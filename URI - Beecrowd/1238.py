N = int(input())

for i in range(N):

    s1, s2 = input().split(' ')
    s = ''
    k = 0
    l = 0

    if len(s1) > len(s2):

        aux = int(len(s1))

    elif len(s2) >= len(s1):

        aux = int(len(s2))

    for j in range(aux):

        if k < len(s1):

            s = s + s1[k]
            k = k + 1

        if l < len(s2):

            s = s + s2[l]
            l = l + 1


    print(s)