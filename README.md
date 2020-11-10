# WLang 💻

Es una librería para personas provinientes del lenguaje Python, la cual busca facilitar y agilizar sus ideas para implementar su código en C++ sin tener que aprender necasariamente toda la sintaxis del nuevo lenguaje.

## Implemetación ⚙ 

Para poder empezar a usar la librería solo hace falta agregarla al encabezado de su **main** como se muestra en el ejemplo adjunto "main.cpp"

### Funciones Soportadas 📖

#### Entrada de Datos

Acepta entradas de los siguientes tipos de datos:

- #### int ####
    - #### Métodos ####
        Retornan **int**
        - **readInt()**
        - **readInt(texto)**
- #### double ####
    - #### Métodos ####
        Retornan **double**
        - **readDouble()**
        - **readDouble(texto)**
- #### string ####
    - #### Métodos ####
        Retornan **string**
        - **readString()**
        - **readString(texto)**
        - **read()**
        - **read(texto)**
        
#### Salida de Datos

Acepta entradas de los siguientes tipos de datos:

- **Tipos de Datos aceptados**
    - **int**
    - **double**
    - **string**
    - **float**
    - **char**
- **Métodos**
    - **print(dato)**
        Imprime **dato** que representa cualquiera de los tipos de datos admitidos sin salto de línea.
    - **println(dato)**
        Imprime **dato** que representa cualquiera de los tipos de datos admitidos con salto de línea.

#### Manejo de Strings

- **Métodos**
    - **upper(texto)**
        Retorna un **string** con el texto pasado por parámetro en mayúsculas.
    - **lower(texto)**
        Retorna un **string** con el texto pasado por parámetro en minúsculas.
