for i in range(int(input())):
 
    x, y, z = input().split()
 
    x = int(x)
    y = int(y)
    z = int(z)
 
    if x == y and y == z:
 
        print("YES")
 
        print( x, y, z)
 
    elif x != y and x != z and y != z:
 
        print("NO")
 
    elif x == y:
 
        if x < z:
 
            print("NO")
        
        else:
 
            print("YES")
            print(x, z, 1)
 
    elif y == z:
 
        if y < x:
 
            print("NO")
 
        else:
 
            print("YES")
            print(1, x, y)
 
    elif x == z:
        
        if x < y:
 
            print("NO")
 
        elif x > y:
            
            print("YES")
            print(x, y, 1)