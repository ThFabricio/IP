import math

T = int(input())

for i in range(T):

    N = input().split()
    N = sorted(N)
    qntd = int (N.pop())

    if (1 < qntd < 11):
        j = math.ceil((len(N) - 1)/2)

        print("Case %i: %i" %(int(i +1), int(N[j])))