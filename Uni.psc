Proceso Universidad
	Escribir 'Ingrese el promedio del estudiante: '
	Leer prom
	Escribir 'Ingrese si es de pregrado o posgrado: '
	Leer est
	Si prom>=4.5 Y est=='pregrado' Entonces
		cre <- 28
		des <- cre*0.25
		tot <- (cre*50000)-des
		Escribir 'El estudiante debe pagar ',tot,'pesos por ',cre,'creditos'
	SiNo
		Si prom>=4 Y prom<4.5 Y est=='pregrado' Entonces
			cre <- 25
			des <- cre*0.1
			tot <- (cre*50000)-des
			Escribir 'El estudiante debe pagar ',tot,'pesos por ',cre,'creditos'
		SiNo
			Si prom>=3.5 Y prom<3.9 Y est=='pregrado' Entonces
				cre <- 20
				des <- cre*0.1
				tot <- (cre*50000)-des
				Escribir 'El estudiante debe pagar ',tot,'pesos por ',cre,'creditos'
			SiNo
				Si prom>=2.5 Y prom<3.4 Y est=='pregrado' Entonces
					cre <- 15
					tot <- (cre*50000)
					Escribir 'El estudiante debe pagar ',tot,'pesos por ',cre,'creditos'
				SiNo
					Si prom<2.5 Y est=='pregrado' Entonces
						Escribir 'El estudiante no tiene derecho a matricula'
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
	Si prom>=4.5 Y est=='posgrado' Entonces
		cre <- 20
		des <- cre*0.2
		tot <- (cre*300000)-des
		Escribir 'El estudiante debe pagar ',tot,'pesos por ',cre,'creditos'
	SiNo
		Si prom<4.5 Y est=='posgrado' Entonces
			cre <- 10
			tot <- (cre*300000)
			Escribir 'El estudiante debe pagar ',tot,'pesos por ',cre,'creditos'
		FinSi
	FinSi
FinProceso
