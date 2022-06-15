volume, troca = input().split()
mud = input().split()

for i in mud:

  i = int(i)
  volume = int(volume) + i

  if volume >= 100:

    volume = 100

  elif volume <= 0 and i < 0:

    volume = 0



  
print(volume)