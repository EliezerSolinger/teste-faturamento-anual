# o campo de texto do gupy não permitiu que eu colocasse o código completo.
# solucao desenvolvida em python por questões de praticidade.
#  vetor_ano com apenas alguns valores de exemplo... 
vetor_ano=[1,2,3,3,0,0,4,5]

dias_faturados=[]
for dia in vetor_ano:
    if dia>0: dias_faturados.append(dia)
media_anual=sum(dias_faturados) / float(len(dias_faturados))
dias_acima_da_media = len(list(filter(lambda x: x > media_anual, dias_faturados)))

print("Menor faturamento do ano : ",min(dias_faturados))
print("Maior faturamento do ano : ",max(dias_faturados))
print("Total de dias com faturamento acima da média: ",dias_acima_da_media)
