t = int(input())

for i in range(t):

    j = int(input())
    p = str(bin(j))
    cont = 0

    for k in p:

        if '1' == k:

            cont += 1

    print(cont)