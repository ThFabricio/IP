T = int(input())

for i in range(T):

    S = input()
    L = ('A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'S', 's')
    cont = 1

    for j in S:

        if j in L:

            cont = cont * 3

        else:
            cont = cont * 2

    print(cont)