#Ingreso de datos
import string


prom = float(input("Ingrese el promedio del estudiante: "))
est = input("Ingrese si es de pregrado o posgrado: ")

#Calculos
if prom >= 4.5 and est == "pregrado":
    cre = 28
    des = cre * 0.25
    tot = (cre * 50000) - des
    print("El estudiante debe pagar ", tot, "pesos por " , cre, "creditos" )

elif prom >= 4.0 and prom < 4.5 and est == "pregrado":
    cre = 25
    des = cre * 0.1
    tot = (cre * 50000) - des
    print("El estudiante debe pagar ", tot, "pesos por " , cre, "creditos" )

elif prom > 3.5 and prom < 4.0 and est == "pregrado":
    cre = 20
    tot = cre * 50000
    print("El estudiante debe pagar ", tot, "pesos por " , cre, "creditos" )

elif prom >= 2.5 and prom < 3.5 and est == "pregrado":
    cre = 15
    tot = cre * 50000
    print("El estudiante debe pagar ", tot, "pesos por " , cre, "creditos" )

elif prom < 2.5 and est == "pregrado":
    cre = 0
    tot = cre * 50000
    print("El estudiante debe pagar ", tot, "pesos por " , cre, "creditos" )

elif prom >= 4.5 and est == "posgrado":
    cre = 20
    des = cre * 0.2
    tot = (cre * 300000) - des
    print("El estudiante debe pagar ", tot, "pesos por " , cre, "creditos"  )

elif prom < 4.5 and est == "posgrado":
    cre = 10
    tot = cre * 300000
    print("El estudiante no tiene derecho a matricula")

