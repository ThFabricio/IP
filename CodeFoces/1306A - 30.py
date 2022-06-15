for i in range(int(input())):
 
  numero = input().split()
  n1 = int (numero[0])
  n2 = int (numero[1])
 
  if n1 < n2:
 
    n1 += n1
 
    if n1 > n2:
 
      j = n1*n1
 
    else:
 
      j = n2*n2
 
 
  else:
 
    n2 += n2
 
    if n2 > n1:
 
      j = n2 * n2
 
    else:
 
      j = n1*n1
 
 
  print(j)