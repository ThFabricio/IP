for i in range(int(input())):
 
    tamanho = int(input())
    arrey = input().split()
    contador = 0
 
    if str(0) in arrey:
 
        while True:
 
            if str(0) in arrey:
 
                posicao = arrey.index(str(0))
                arrey[posicao] = 1
                contador = contador + 1
 
            else: 
 
                break
 
    arrey_mod = map(int, arrey)
    soma = sum(arrey_mod)
 
    if soma == 0:
 
        contador = contador + 1
 
    
 
    print(contador)