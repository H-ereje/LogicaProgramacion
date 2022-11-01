nombre = input("Nombre del empleado: ")
salario = int(input("Salario básico por hora: "))
horas = int(input("Número de horas trabajadas en el mes: "))

if salario * horas > 450000:
  print(nombre, "su salario mensual es", salario * horas)
else:
  print(nombre)