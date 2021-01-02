#include <iostream>
#include <string>
using namespace std;

/* Lectura */

int readInt(string txt)
{
    int dato;
    cout << txt;
    cin >> dato;
    return dato;
}

int readInt()
{
    int dato;
    cin >> dato;
    return dato;
}

double readDouble(string txt)
{
    double dato;
    cout << txt;
    cin >> dato;
    return dato;
}

double readDouble()
{
    double dato;
    cin >> dato;
    return dato;
}

string readString(string txt)
{
    string dato;
    cout << txt;
    cin >> dato;
    return dato;
}

string readString()
{
    string dato;
    cin >> dato;
    return dato;
}

string read()
{
    string dato;
    cin >> dato;
    return dato;
}

string read(string txt)
{
    string dato;
    cout << txt;
    cin >> dato;
    return dato;
}

/* Escritura */

#define print(x) cout << x ;

#define println(x) cout << x << endl;

/* Operaciones con Strings */

string upper(string cadena)
{
    for (int i = 0; i < cadena.length(); i++)
        cadena[i] = toupper(cadena[i]);
    return cadena;
}

string lower(string cadena)
{
    for (int i = 0; i < cadena.length(); i++)
        cadena[i] = tolower(cadena[i]);
    return cadena;
}

/* Matematica */

#include <math.h>

