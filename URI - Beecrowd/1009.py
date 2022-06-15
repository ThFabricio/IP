nome = input()
salario_fixo = float(input())
vendas_efetuadas = float(input())

salario_total = salario_fixo + (0.15 * vendas_efetuadas)

print("TOTAL = R$ %.2f" %(salario_total))