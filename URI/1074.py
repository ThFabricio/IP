N = int(input())

for i in range(N):

    M = int(input())

    if M == 0:

        print('NULL')

    elif M%2 == 0 and M > 0:

        print('EVEN POSITIVE')

    elif M%2 != 0 and M > 0:

        print("ODD POSITIVE")

    elif M%2 == 0 and M < 0:

        print('EVEN NEGATIVE')

    elif M%2 != 0 and M < 0:

        print("ODD NEGATIVE")