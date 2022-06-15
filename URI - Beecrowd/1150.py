x = int(input())
z = int(input())
cont = 0
j = 0

while x >= z:
    z = int(input())

while z >= j:

    j += x
    cont = cont + 1
    x += 1

print(cont)