X = input().split(" ")
x1 = float(X[0])
y1 = float(X[1])

Y = input().split(" ")
x2 = float(Y[0])
y2 = float(Y[1])

DISTANCIA = ( (x2 - x1) ** 2 + ( y2 - y1 ) ** 2 ) ** (1/2)

print("%.4F" %DISTANCIA)