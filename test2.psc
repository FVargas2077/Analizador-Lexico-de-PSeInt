Algoritmo PromedioEstudiantes
	// Declaración de variables
	Definir numEstudiantes como entero;
	Definir nombres como cadena; // Se asume un máximo de 100 estudiantes
	Dimension notasPorEstudiante[100]; // Se asume un máximo de 100 notas por estudiante
	Dimension promedioNotas[100];
	
	// Solicitar al usuario el número de estudiantes
	Escribir "Ingrese la cantidad de estudiantes:";
	Leer numEstudiantes;
	
	// Validar la cantidad de estudiantes
	Mientras numEstudiantes <= 0 Hacer
		Escribir "La cantidad de estudiantes debe ser mayor que 0. Ingrese nuevamente:";
		Leer numEstudiantes;
	FinMientras
	
	// Llamar a la función para capturar los nombres y notas de los estudiantes
	CapturarDatosEstudiantes(numEstudiantes, nombres, notasPorEstudiante);
	
	// Llamar a la función para calcular el promedio de cada estudiante
	CalcularPromedios(numEstudiantes, notasPorEstudiante, promedioNotas);
	
	// Llamar a la función para mostrar los resultados
	MostrarResultados(numEstudiantes, nombres, promedioNotas);
	
FinAlgoritmo

// Subproceso para capturar los nombres y notas de los estudiantes
SubProceso CapturarDatosEstudiantes(numEstudiantes, nombres, notasPorEstudiante)
	Definir i, j, numNotas como entero;
	Para i = 1 Hasta numEstudiantes Hacer
		Escribir "Ingrese el nombre del estudiante ", i, ":";
		Leer nombres[i];
		
		Escribir "Ingrese la cantidad de notas para ", nombres[i], ":";
		Leer numNotas;
		
		// Validar la cantidad de notas
		Mientras numNotas <= 0 Hacer
			Escribir "La cantidad de notas debe ser mayor que 0. Ingrese nuevamente:";
			Leer numNotas;
		FinMientras
		
		notasPorEstudiante[i] = numNotas; // Almacenar la cantidad de notas
		
		Para j = 1 Hasta numNotas Hacer
			Escribir "Ingrese la nota ", j, " para ", nombres[i], ":";
			Leer notasPorEstudiante[i, j]; // Se asume que las notas se guardan en una matriz bidimensional
		FinPara
	FinPara
FinSubProceso