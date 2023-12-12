import math

# Função polinomial
def funcao_polinomial(coeficientes, valor_x):
    resultado = 0
    grau = len(coeficientes) - 1
    for i, coeficiente in enumerate(coeficientes):
        resultado += coeficiente * (valor_x ** (grau - i))
    return resultado

# Função exponencial composta
def funcao_exponencial_composta(bases, valor_x):
    resultado = 1
    for base in bases:
        resultado *= base ** valor_x
    return resultado

# Função trigonométrica
def funcao_trigonometrica(tipo, amplitude, valor_x):
    if tipo == 'seno':
        return amplitude * math.sin(valor_x)
    elif tipo == 'cosseno':
        return amplitude * math.cos(valor_x)
    else:
        raise ValueError("Tipo de função trigonométrica inválido.")

# Função logarítmica
def funcao_logaritmica(base, valor_x):
    return math.log(valor_x, base)

# Regra da Potência
def derivada_regra_da_potencia(coeficientes, expoente, valor_x):
    resultado = 0
    for i, coeficiente in enumerate(coeficientes):
        resultado += coeficiente * i * (valor_x ** (expoente - i - 1))
    return resultado


# Regra da Soma/Diferença
def derivada_regra_da_soma_diferenca(f1, f2, valor_x):
    return f1(valor_x) + f2(valor_x)


# Regra do Produto
def derivada_regra_do_produto(f1, f2, valor_x):
    return f1(valor_x) * derivada_regra_da_potencia([1], 1, valor_x) + f2(valor_x) * derivada_regra_da_potencia([1], 1, valor_x)

# Regra do Quociente
def derivada_regra_do_quociente(f1, f2, valor_x):
    numerador = f1(valor_x) * derivada_regra_da_potencia([1], 1, valor_x) - f2(valor_x) * derivada_regra_da_potencia([1], 1, valor_x)
    denominador = f2(valor_x) ** 2
    return numerador / denominador
# Regra da Cadeia
def derivada_regra_da_cadeia(f, g, valor_x):
    return f(g(valor_x)) * g(valor_x)

# Derivada da Função Exponencial
def derivada_funcao_exponencial(base, valor_x):
    return base ** valor_x * math.log(base)

# Derivada do Logaritmo Natural
def derivada_logaritmo_natural(valor_x):
    return 1 / valor_x

# Derivada da Função Seno
def derivada_funcao_seno(valor_x):
    return math.cos(valor_x)

# Derivada da Função Cosseno
def derivada_funcao_cosseno(valor_x):
    return -math.sin(valor_x)

# Recebe a escolha do usuário
opcao = input("Escolha a opção:\n1. Funções\n2. Derivada\n3. Sair\n")
while opcao != "3":
    # Caso de resolver funções
    if opcao == "1":
        escolha = input("Escolha a função:\n1. polinomial\n2. exponencial\n3. trigonometrica\n4. logaritmica\n")

        if escolha == "1":
            coeficientes_polinomio = [float(c) for c in input("Digite os coeficientes do polinômio separados por espaço: ").split()]
            funcao = lambda x: funcao_polinomial(coeficientes_polinomio, x)
        elif escolha == "2":
            bases_exponenciais = [float(b) for b in input("Digite as bases da função exponencial separadas por espaço: ").split()]
            funcao = lambda x: funcao_exponencial_composta(bases_exponenciais, x)
        elif escolha == "3":
            tipo_trigonometrica = input("Digite o tipo de função trigonométrica (seno ou cosseno): ")
            amplitude_trigonometrica = float(input("Digite a amplitude da função trigonométrica: "))
            funcao = lambda x: funcao_trigonometrica(tipo_trigonometrica, amplitude_trigonometrica, x)
        elif escolha == "4":
            base_logaritmo = float(input("Digite a base da função logarítmica: "))
            funcao = lambda x: funcao_logaritmica(base_logaritmo, x)
        else:
            print("Escolha inválida.")
            exit()

        valor_ponto = float(input("Digite o valor para avaliar a função: "))
        resultado = funcao(valor_ponto)
        print(f"O resultado da função escolhida em {valor_ponto} é: {resultado}")

    # Caso de derivar funções
    elif opcao == "2":
        escolha_derivada = input("Escolha a opção de derivação:\n1. Regra da Potência\n2. Regra da Soma/Diferença\n3. Regra do Produto\n4. Regra do Quociente\n5. Regra da Cadeia\n6. Derivada da Função Exponencial\n7. Derivada do Logaritmo Natural\n8. Derivada da Função Seno\n9. Derivada da Função Cosseno\n")

        if escolha_derivada == "1":
            coeficientes = [float(c) for c in input("Digite os coeficientes da função polinomial separados por espaço: ").split()]
            expoente = int(input("Digite o expoente da regra da potência: "))
            valor_ponto_derivada = float(input("Valor para avaliar a derivada: "))
            resultado_derivada = derivada_regra_da_potencia(coeficientes, expoente, valor_ponto_derivada)

        elif escolha_derivada == "2":
            f1 = lambda x: input("Digite a primeira função para a regra da soma/diferença: ")
            f2 = lambda x: input("Digite a segunda função para a regra da soma/diferença: ")
            valor_ponto_derivada = float(input("Valor para avaliar a derivada: "))
            resultado_derivada = derivada_regra_da_soma_diferenca(f1, f2, valor_ponto_derivada)

        elif escolha_derivada == "3":
            f1 = lambda x: float(input("Digite a primeira função para a regra do produto: "))
            f2 = lambda x: float(input("Digite a segunda função para a regra do produto: "))
            valor_ponto_derivada = float(input("Valor para avaliar a derivada: "))
            resultado_derivada = derivada_regra_do_produto(f1, f2, valor_ponto_derivada)

        elif escolha_derivada == "4":
            f1 = lambda x: float(input("Digite a função no numerador para a regra do quociente: "))
            f2 = lambda x: float(input("Digite a função no denominador para a regra do quociente: "))
            valor_ponto_derivada = float(input("Valor para avaliar a derivada: "))
            resultado_derivada = derivada_regra_do_quociente(f1, f2, valor_ponto_derivada)

        elif escolha_derivada == "5":
            f = lambda x: float(input("Digite a função interna para a regra da cadeia: "))
            g = lambda x: float(input("Digite a função externa para a regra da cadeia: "))
            valor_ponto_derivada = float(input("Valor para avaliar a derivada: "))
            resultado_derivada = derivada_regra_da_cadeia(f, g, valor_ponto_derivada)

        elif escolha_derivada == "6":
            base_exponencial = float(input("Digite a base da função exponencial: "))
            valor_ponto_derivada = float(input("Valor para avaliar a derivada: "))
            resultado_derivada = derivada_funcao_exponencial(base_exponencial, valor_ponto_derivada)

        elif escolha_derivada == "7":
            valor_ponto_derivada = float(input("Valor para avaliar a derivada: "))
            resultado_derivada = derivada_logaritmo_natural(valor_ponto_derivada)

        elif escolha_derivada == "8":
            valor_ponto_derivada = float(input("Valor para avaliar a derivada: "))
            resultado_derivada = derivada_funcao_seno(valor_ponto_derivada)

        elif escolha_derivada == "9":
            valor_ponto_derivada = float(input("Valor para avaliar a derivada: "))
            resultado_derivada = derivada_funcao_cosseno(valor_ponto_derivada)

        else:
            print("Escolha inválida.")
            exit()

        print(f"O resultado da derivada escolhida em {valor_ponto_derivada} é: {resultado_derivada}")
else:
    print("Opção inválida.")
