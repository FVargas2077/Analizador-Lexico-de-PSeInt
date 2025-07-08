Algoritmo AnalizadorCompleto
	
    Definir i, j, resultado, opcion, suma Como Entero
    Definir text, letra Como Caracter
    Definir palabra Como Cadena
    Definir val, total Como Real
    Definir condicion Como Logico
	
    Dimension arreglo[5]
	
    Escribir "Ingrese un valor entero:"
    Leer i
	
    Escribir "Ingrese una cadena:"
    Leer palabra
	
    Escribir "Ingrese un caracter:"
    Leer letra
	
    Escribir "Ingrese un número real:"
    Leer val
	
    condicion <- Verdadero
	
    Si i > 0 Entonces
        Escribir "El número es positivo"
    Sino
        Escribir "El número no es positivo"
    FinSi
	
    Segun i Hacer
        Caso 1:
            Escribir "Elegiste 1"
        Caso 2:
            Escribir "Elegiste 2"
        De Otro Modo:
            Escribir "Elegiste otro número"
    FinSegun
	
    Mientras i < 5 Hacer
        Escribir "i =", i
        i <- i + 1
    FinMientras
	
    Repetir
        Escribir "Valor actual de j:", j
        j <- j + 1
    Hasta Que j > 3
	
    Para j <- 1 Hasta 3 Con Paso 1 Hacer
        Escribir "Iteración en Para:", j
    FinPara
	
    arreglo[1] <- 10
    arreglo[2] <- 20
    arreglo[3] <- 30
    arreglo[4] <- 40
    arreglo[5] <- 50
	
    Escribir "Contenido del arreglo:"
    Para j <- 1 Hasta 5 hacer
        Escribir "arreglo[", j, "] = ", arreglo[j]
    FinPara
	
    resultado <- Sumar(3, 4)
    Escribir "Resultado de función Sumar:", resultado
	
    total <- Multiplicar(2.5, 4)
    Escribir "Resultado de función Multiplicar:", total
	
    text <- Mayusculas(palabra)
    Escribir "Palabra en mayúsculas:", text
	
    Escribir "Probando operación lógica:"
	
    Si No condicion O condicion Y Verdadero Entonces
        Escribir "Operadores lógicos evaluados correctamente"
    FinSi
	
    ModificarArreglo(arreglo)
	
FinAlgoritmo


Funcion resultado <- Sumar(a, b)
    resultado <- a + b
FinFuncion


Funcion r <- Multiplicar(a, b)
    Definir r Como Real
    r <- a * b
FinFuncion


SubProceso ModificarArreglo(a Por Referencia)
    Para i <- 1 Hasta 5 hacer
        a[i] <- a[i] * 2
    FinPara
    Escribir "Arreglo modificado dentro del subproceso:"
    Para i <- 1 Hasta 5 hacer
        Escribir a[i]
    FinPara
FinSubProceso