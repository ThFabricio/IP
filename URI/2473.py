apostas = input().split()
resultado = input().split()
cont = 0

for i in apostas:

  for j in resultado:

    if i == j:

      cont += 1

if cont < 3:

  print("azar")

elif cont == 3:

  print('terno')

elif cont == 4:

  print('quadra')

elif cont == 5:

  print('quina')

elif cont == 6:

  print('sena')