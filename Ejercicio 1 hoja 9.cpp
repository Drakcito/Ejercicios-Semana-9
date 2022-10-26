#include "pch.h"
#include <iostream>
using namespace std;
using namespace System;

void GenerarNumeros(int& n1, int& n2, int& n3, int& n4) {
    Random x;
    n1 = x.Next(1, 41);//[1,41>
    do {
        n2 = x.Next(1, 41);
    } while (n2 == n1);
    do {
        n3 = x.Next(1, 41);
    } while (n3 == n2 || n3 == n1);
    do {
        n4 = x.Next(1, 41);
    } while (n4 == n3 || n4 == n2 || n4 == n1);
}
void Mayor(int n1, int n2, int n3, int n4, int& mayor) {//& = se usa cuando
    mayor = n1;
    if (n2 > mayor)mayor = n2;
    if (n3 > mayor)mayor = n3;
    if (n4 > mayor)mayor = n4;
}
void Menor(int n1, int n2, int n3, int n4, int& menor) {//& = se usa cuando
    menor = n1;
    if (n2 < menor)menor = n2;
    if (n3 < menor)menor = n3;
    if (n4 < menor)menor = n4;
}
void Anterior_mayor(int n1, int n2, int n3, int n4, int menor, int mayor, int& aux_mayor) {
    aux_mayor = menor;
    if (n1 > aux_mayor && n1 < mayor)aux_mayor = n1;
    if (n2 > aux_mayor && n2 < mayor)aux_mayor = n2;
    if (n3 > aux_mayor && n3 < mayor)aux_mayor = n3;
    if (n4 > aux_mayor && n4 < mayor)aux_mayor = n4;
}
void Graficar_Lineas(int x, int y, int n) {
    int aux_x;
    for (int i = x; i > x - n; i--) {
        Console::SetCursorPosition(i, y);
        cout << "*";
        aux_x = i;
    }
    Console::SetCursorPosition(aux_x - 2, y);
    cout << n;
    cout << endl;
}
void Graficar(int n1, int n2, int n3, int n4) {
    int x = 79, y = 2;//x: aumenta hacia la derecha, y: aumenta hacia abajo

    Graficar_Lineas(x, y, n1);
    Graficar_Lineas(x, y + 1, n2);
    Graficar_Lineas(x, y + 2, n3);
    Graficar_Lineas(x, y + 3, n4);
}
int main() {
    int num1, num2, num3, num4, mayor, menor, ant_mayor;
    GenerarNumeros(num1, num2, num3, num4);
    cout << " Numero 1: " << num1 << endl;
    cout << " Numero 2: " << num2 << endl;
    cout << " Numero 3: " << num3 << endl;
    cout << " Numero 4: " << num4 << endl;
    Mayor(num1, num2, num3, num4, mayor);
    cout << " El mayor de los 4 numeros es: " << mayor << endl;
    Menor(num1, num2, num3, num4, menor);
    cout << " El menor de los 4 numeros es: " << menor << endl;
    Anterior_mayor(num1, num2, num3, num4, menor, mayor, ant_mayor);
    cout << " El anterior al mayor es: " << ant_mayor << endl;
    int seg_num;
    if (num1 > menor && num1 < ant_mayor) seg_num = num1;
    if (num2 > menor && num2 < ant_mayor) seg_num = num2;
    if (num3 > menor && num3 < ant_mayor) seg_num = num3;
    if (num4 > menor && num4 < ant_mayor) seg_num = num4;
    Graficar(menor, seg_num, ant_mayor, mayor);
    return 0;
}