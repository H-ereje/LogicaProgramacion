Proceso Empleado
	Escribir 'Ingrese el número de escritorios: '
	Leer n
	Si n < 5 Entonces
		Escribir 'El precio final es: ' n * 800000 * 0.9
	SiNo
		Si n>=5 & n<10 Entonces
			Escribir 'El precio final es: ' n * 800000 * 0.8
		SiNo
			Si n > 10 Entonces
				Escribir 'El precio final es: ' n * 800000 * 0.6
			SiNo
				Escribir 'Fin'
			Fin Si
		Fin Si
	Fin Si
	
FinProceso
