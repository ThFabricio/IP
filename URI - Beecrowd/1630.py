try:

    while True:

        V = input().split()
        n1 = int(V[0])
        n2 = int(V[1])

        v1 = n1
        v2 = n2
        resto = v1 % v2

        while resto != 0:

            v1 = v2
            v2 = resto
            resto = v1%v2

        resul = ( (n1/v2) + (n2/v2) ) * 2
        print(int(resul))

except EOFError:
    pass