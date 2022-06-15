flag = True

while flag:
    M, N = input().split()
    S = ''

    if (1 <= int(M) <= 999999999) and (1 <= int(N) <= 999999999):
        if M != 0 and N != 0:
            L = int(M) + int(N)
            K = str(L)
            for i in K:
                if i != '0':
                    S = S + i

            print(S)

    else:
        flag = False