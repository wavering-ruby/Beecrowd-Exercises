# Declando a variavel para o looping
N = int(input());

# Colocando o valor máximo, se o programa testar com valores maiores, alterar esse limite
valor_menor = 9999.99;

for i in range(0, N): # Repete três vezes (0, 1, 2)

    # Pegando os dois valores em linha e seperando-os em duas variáveis diferentes
    P, G = input().split(" ");

    # Convertendo as variáveis do tipo String para Int e Float
    G = int(G);
    P = float(P);

    # Verificando se o Preço * Grama / Grama Total Inserira
    if((P * 1000)/G < valor_menor):

        # Inserindo o novo menor valor na variável
        valor_menor = (P * 1000)/G;

# Imprimindo conforme exercício
print(f'{valor_menor:.2f}');