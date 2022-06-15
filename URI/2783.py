album = input().split()
cont_carimbo = int(album[1])
carimbo = input().split()

figurinhas = input().split()

for i in range(len(carimbo)):

  tarimba = carimbo[i] 

  for j in range(len(figurinhas)):

    tarimbado = figurinhas[j]

    if tarimba == tarimbado:

      cont_carimbo -= 1
      break


print(cont_carimbo)