PROD1 = input().split(" ")
CODP1 = int(PROD1[0])
QNTP1 = int(PROD1[1])
PREP1 = float(PROD1[2])
TTP1 = QNTP1 * PREP1

PROD2 = input().split(" ")
CODP2 = int(PROD2[0])
QNTP2 = int(PROD2[1])
PREP2 = float(PROD2[2])
TTP2 = QNTP2 * PREP2

TTP = TTP2 + TTP1

print("VALOR A PAGAR: R$ %.2f" %(TTP))