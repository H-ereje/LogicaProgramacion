cantidad = int(input("Introduzca la cantidad de escritorios que desea comprar: "))
if cantidad < 5:
    descuento = 0.1
    print("Usted recibirá un descuento del 10%")
elif cantidad >= 5 and cantidad < 10:
    descuento = 0.2
    print("Usted recibirá un descuento del 20%")
else:
    descuento = 0.4
    print("Usted recibirá un descuento del 40%")

print("Usted deberá pagar: ", cantidad*800000*(1-descuento))