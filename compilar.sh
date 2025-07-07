#!/bin/bash
echo "=== Compilador del Analizador PSeInt ==="
echo

echo "Paso 1: Generando analizador léxico..."
flex analizador_lexico.l
if [ $? -ne 0 ]; then
    echo "ERROR: Falló flex"
    exit 1
fi

echo "Paso 2: Generando analizador sintáctico..."
bison -d analizador_sintactico.y
if [ $? -ne 0 ]; then
    echo "ERROR: Falló bison"
    exit 1
fi

echo "Paso 3: Compilando con GCC..."
gcc lex.yy.c analizador_sintactico.tab.c -o analizador
if [ $? -ne 0 ]; then
    echo "ERROR: Falló gcc"
    exit 1
fi

echo
echo "¡Compilación exitosa!"
echo "Ejecutable generado: analizador"
echo
echo "Para probar:"
echo "  ./analizador ejemplo.psc"
echo "  ./analizador prueba_simple.psc"
echo
