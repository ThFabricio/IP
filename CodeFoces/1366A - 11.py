for i in range(int(input())):
 
    gravetos, diamante = input().split()
    gravetos = int(gravetos)
    diamante = int(diamante)
 
    if gravetos == 0 or diamante == 0:
 
        print(0)
 
    elif gravetos >= (2*diamante):
 
        print(diamante)
 
    elif diamante >= (2*gravetos):
 
        print(gravetos)
 
    else:
 
        aux = (diamante+gravetos)//3
        print(aux)