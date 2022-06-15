for i in range(int(input())):
 
  numero = int(input())
 
  numero = str(numero)
  aux = len(numero)
  cont = 0
  seila = ''
  result = ''
 
  for j in range(len(numero)):
 
    p = numero[j]
 
    if p != '0':
 
      seila = p + ('0'*(aux-1))
      result += seila + ' '
      cont += 1  
 
    aux -= 1
 
  print(cont)
  print(result)