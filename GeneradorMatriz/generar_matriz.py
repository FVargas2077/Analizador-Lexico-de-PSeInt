import csv
import re
import os

base_dir = os.path.dirname(os.path.abspath(__file__))
archivo_txt = os.path.join(base_dir, '../tokens.txt')
archivo_modelo = os.path.join(base_dir, 'Modelo.tsv')
archivo_csv = os.path.join(base_dir, 'Matriz_Simbolos.csv')

def cargar_modelo(archivo_modelo):
    modelo = {}
    with open(archivo_modelo, 'r', encoding='utf-8') as modelo_file:
        reader = csv.reader(modelo_file, delimiter='\t')
        next(reader)
        for row in reader:
            token = row[0].strip()
            lexema = row[1].strip()
            descripcion = row[2].strip()
            if token not in modelo:
                modelo[token] = {}
            modelo[token][lexema] = descripcion
    return modelo

modelo = cargar_modelo(archivo_modelo)

casos_especiales = {
    'CONST_REAL': 'Representa constantes numericas con decimales.',
    'CONST_ENTERO': 'Representa constantes numericas enteras.',
    'CONST_TEXTO': 'Representa cadenas de texto entre comillas.',
    'IDENTIFICADOR': 'Nombres de variables, funciones u otros elementos definidos por el usuario.',
    'SALTO_LINEA': 'Indica un salto de linea en el codigo.',
    'CARACTER_NO_RECONOCIDO': 'Caracter que no coincide con ningun patron definido.'
}

with open(archivo_txt, 'r', encoding='latin-1') as txt_file, \
     open(archivo_csv, 'w', newline='', encoding='utf-8') as csv_file:

    writer = csv.writer(csv_file, delimiter=';')

    writer.writerow(['TOKEN', 'LEXEMA', 'DESCRIPCION'])

    for linea in txt_file:
        linea = linea.strip()
        if linea: 
            token = ''
            i = 1 
            while i < len(linea) and linea[i] not in [',', '>']:
                token += linea[i]
                i += 1

            descripcion = ''
            lexema = ''
            while i < len(linea) and linea[i] != ',':
                i += 1
            i += 1 
            while i < len(linea) and linea[i] == ' ':
                i += 1
            lexema = linea[i:].strip() 
            if lexema.endswith('>'):
                lexema = lexema[:-1] 

            if token in casos_especiales:
                descripcion = casos_especiales[token]
            else:
                if not lexema and token in modelo:
                    descripcion = modelo[token].get('+', '')
                else:
                    descripcion = modelo.get(token, {}).get(lexema, '')

            writer.writerow([token, lexema, descripcion])

print(f"Archivo '{archivo_csv}' creado correctamente.")