mat = input().split()
vin = input().split()
palavra = input()

Amat = int(mat[0])*2
Rmat = int(mat[1])
Emat = int(mat[2])
tempM = (len(palavra)*Emat) + int(Amat) + int(Rmat)

Avin = int(vin[0])*2
Rvin = int(vin[1])
Evin = int(vin[2])
tempV = (len(palavra)*Evin) + int(Avin) + int(Rvin)


if tempM < tempV:

    print('Matheus')

elif tempV < tempM:

    print('Vinicius')

elif tempM == tempV:

    print('Empate')