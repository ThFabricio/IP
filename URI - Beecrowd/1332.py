def numero(N):

    if 'ne' in str(N) or 'on' in str(N) or 'o' and 'e' in str(N):
        return 1
    elif 'tw' in str(N) or 'ow' in str(N) or 't' and 'o' or str(N):
        return 2



T = int(input())
cont = 0

for i in range(T):

    N = input()

    if len(N) == 3:

        print(numero(N))

    elif len(N) == 5:
        print(3)