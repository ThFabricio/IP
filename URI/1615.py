t = int(input())

for i in range(t):

    N, M = input().split()
    VM = input().split()
    qntd_v = -1
    VC = {}
    candidato = 0

    for c in range(1, int(N)+ 1):
        VC[c] = 0

    for v in VM:

        v = int(v)
        VC[v] += 1

        if VC[v] >= qntd_v:

            qntd_v = VC[v]
            candidato = v

    result = qntd_v/int(M)

    if result > 0.5:

        print(candidato)

    else:

        print(-1)