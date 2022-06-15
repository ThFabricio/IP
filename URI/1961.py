PC = input().split()
Altura = input().split()
pulo = int(PC[0])
contador = 0

for i in range(1,len(Altura)):

    atual_cano = int(Altura[i-1])
    proximo_cano = int(Altura[i])

    if abs(atual_cano - proximo_cano) > pulo:

        contador = 1
        break



if contador ==  0:

    print('YOU WIN')

else:

    print('GAME OVER')