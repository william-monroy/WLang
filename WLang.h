#include <iostream>
#include <string>
using namespace std;

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

void println(string dato)
{
    cout << dato << endl;
}

void print(string dato)
{
    cout << dato;
}

void println(int dato)
{
    cout << dato << endl;
}

void print(int dato)
{
    cout << dato;
}

void println(double dato)
{
    cout << dato << endl;
}

void print(double dato)
{
    cout << dato;
}

void println(float dato)
{
    cout << dato << endl;
}

void print(float dato)
{
    cout << dato;
}

void println(char dato)
{
    cout << dato << endl;
}

void print(char dato)
{
    cout << dato;
}
