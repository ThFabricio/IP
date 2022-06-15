and1 = int(input())
and2 = int(input())
and3 = int(input())
mior = [0 for i in range(3)]

mior[0] = and2*2 + and3*4
mior[1] = and1*2 + and3*2
mior[2] = and1*4 + and2*2

print(min(mior))