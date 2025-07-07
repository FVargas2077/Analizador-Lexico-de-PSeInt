@echo off
echo === Compilador del Analizador PSeInt ===
echo.

echo Paso 1: Generando analizador lexico...
flex analizador_lexico.l
if errorlevel 1 (
    echo ERROR: Fallo en flex
    pause
    exit /b 1
)

echo Paso 2: Generando analizador sintactico...
bison -d analizador_sintactico.y
if errorlevel 1 (
    echo ERROR: Fallo en bison
    pause
    exit /b 1
)

echo Paso 3: Compilando con GCC...
gcc lex.yy.c analizador_sintactico.tab.c -o analizador.exe
if errorlevel 1 (
    echo ERROR: Fallo en gcc
    pause
    exit /b 1
)

echo.
echo ¡Compilacion exitosa!
echo Ejecutable generado: analizador.exe
echo.
echo Para probar:
echo   analizador.exe ejemplo.psc
echo   analizador.exe prueba_simple.psc
echo.
pause
