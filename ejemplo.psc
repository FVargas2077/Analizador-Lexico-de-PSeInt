Algoritmo EjemploCompleto
    // Este es un ejemplo completo para probar el analizador
    
    Definir numero, contador, suma Como Entero
    Definir promedio Como Real
    Definir nombre, mensaje Como Cadena
    Definir esPositivo Como Logico
    
    // Asignaciones
    numero <- 10
    contador = 0
    suma := 0
    nombre <- "Usuario"
    esPositivo <- Verdadero
    
    // Estructura condicional
    Si numero > 5 Entonces
        Escribir "El número es mayor a 5"
        suma <- suma + numero
    Sino
        Escribir "El número es menor o igual a 5"
    FinSi
    
    // Estructura Según
    Segun numero Hacer
        Caso 10:
            Escribir "Es exactamente 10"
        Caso 5:
            Escribir "Es exactamente 5"
        De Otro Modo:
            Escribir "Es otro número"
    FinSegun
    
    // Ciclo Para con asignación
    Para contador <- 1 Hasta 5 Hacer
        suma <- suma + contador
        Escribir contador
    FinPara
    
    // Ciclo Para con Desde
    Para contador Desde 1 Hasta 3 Con Paso 1 Hacer
        Escribir "Iteración:", contador
    FinPara
    
    // Ciclo Mientras
    contador <- 1
    Mientras contador <= 3 Hacer
        Escribir "Mientras:", contador
        contador <- contador + 1
    FinMientras
    
    // Ciclo Repetir
    contador <- 1
    Repetir
        Escribir "Repetir:", contador
        contador <- contador + 1
    Hasta Que contador > 2
    
    // Operaciones aritméticas
    promedio <- suma / 5
    numero <- 2 ^ 3
    
    // Operaciones lógicas
    Si (numero > 0) Y (promedio > 0) Entonces
        Escribir "Ambos son positivos"
    FinSi
    
    Si NO esPositivo Entonces
        Escribir "No es positivo"
    FinSi
    
    // Entrada de datos
    Leer nombre
    Escribir "Hola", nombre
    
FinAlgoritmo
