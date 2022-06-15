def idioma(P):

    for k in range(1, len(P)):

        if P[0] != P[k]:

            return 'ingles'

    return P[0]

N = int(input())

for i in range(N):
    P = []
    K = int(input())

    for j in range(K):

        P.append(input().lower())

    print(idioma(P))