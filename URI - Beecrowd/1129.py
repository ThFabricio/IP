while True:

    n = int(input())

    if n == 0:
        break

    quest = {0: 'A', 1: 'B', 2: 'C', 3: 'D', 4: 'E'}
    aux = 0


    for i in range(n):

        respostas = input().split()
        cont = '*'
        vari = 0

        for j in respostas:

                if int(j) <= 127:

                    cont = quest[aux]
                    vari += 1

                aux += 1

        aux = 0
        if vari == 1:

            print(cont)

        else:

            print('*')