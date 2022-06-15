try:

    while True:

        particula = input().split(" ")

        if (int(particula[0]) <= 100 and int(particula[0]) >= -100) and int(particula[1]) <= 200:

            v = int(particula[0])
            t = int(particula[1])
            result = v * (t*2)
            print(result)

except EOFError:
    pass