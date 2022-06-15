N = int(input())

for i in range(N):

    v = input().split()
    x = int(v[0])
    y = int(v[1])

    if (1 <= x <= 100) and (1 <= y <= 100):

        R = (3*x)**2 + y**2
        B = 2*(x**2) + (5*y)**2
        C = -100*x + y**3

        if R > B and R > C:
            print("Rafael ganhou")
        elif B > R and B > C:
            print("Beto ganhou")
        elif C >= R and C > B:
            print("Carlos ganhou")