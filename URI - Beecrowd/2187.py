t = 0

while True:

    notas = int(input())

    if notas == 0:

        break

    cedulas = [0 for i in range(4)]
    cedulas[0] = int(notas/50)
    aux = notas%50
    cedulas[1] = int(aux/10)
    aux = notas % 10
    cedulas[2] = int(aux / 5)
    aux = notas % 5
    cedulas[3] = int(aux / 1)
    aux = notas%1
    t += 1
    print('Teste %i' %t)
    print(cedulas[0], cedulas[1], cedulas[2], cedulas[3])
    print()