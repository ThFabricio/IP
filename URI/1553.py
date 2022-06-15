while True:

    N, K = input().split()

    if N and K == '0':

        break

    perguntas = input().split()
    K = int(K)
    contador = 0
    perguntas_feitas = {}

    for p in perguntas:

        p = int(p)
        if p in perguntas_feitas:
            perguntas_feitas[p] += 1
        else:
            perguntas_feitas[p] = 1

    for c in perguntas_feitas:

        if perguntas_feitas[c] >= K:

            contador += 1

    print(contador)