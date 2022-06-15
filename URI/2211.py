p = int(input())

for i in range(p):

    name_comp = input()
    grau_dif = float(input())
    notas_comp = input().split()
    max = float(notas_comp[0])
    min = float(notas_comp[0])
    soma = 0

    for j in range(len(notas_comp)):

        soma = soma + float(notas_comp[j])

    for k in range(len(notas_comp)):

        if min > float(notas_comp[k]):

            min = float(notas_comp[k])

        elif max < float(notas_comp[k]):

            max = float(notas_comp[k])

    soma = ( soma - (min + max) ) * grau_dif
    print("%s %.2f" %(name_comp, soma))