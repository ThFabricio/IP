t = int(input())

for i in range(t):

    n_ins = int(input())
    cont = []
    contador = 0

    for j in range(n_ins):

        ins = input().split(' ')

        if ins[0] == 'SAME':
            
            ins[0] = cont[int(ins[2]) - 1]

        if ins[0] == 'LEFT':

            cont.append('LEFT')
            contador -= 1

        if ins[0] == 'RIGHT':

            cont.append('RIGHT')
            contador += 1

    print(contador)