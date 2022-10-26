#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace System;
using namespace std;

void menu() {
    cout << "  MENU";
    cout << "\n ======\n";
    cout << " 1.Sumar 2 numeros complejos" << endl;
    cout << " 2.Restar 2 numeros complejos" << endl;
    cout << " 3.Salir" << endl;
    cout << " Ingrese opcion: ";
}
void Sumar(int* real1, int* real2, int* im1, int* im2, int* sumar1, int* sumai1) {
    cout << "\n Numero 1" << endl;
    cout << " Parte real: "; cin >> *real1;
    cout << " Parte imaginaria: "; cin >> *im1;
    cout << "\n Numero 2" << endl;
    cout << " Parte real: "; cin >> *real2;
    cout << " Parte imaginaria: "; cin >> *im2;
    *sumar1 = *real1 + *real2;
    *sumai1 = *im1 + *im2;
    cout << "\n (" << *real1 << "+" << *im1 << "i) + (" << *real2 << "+" << *im2 << "i) = (" << *sumar1 << "+" << *sumai1 << "i)\n";
}
void Restar(int* real1, int* real2, int* im1, int* im2, int* restar1, int* restai1) {
    cout << "\n Numero 1" << endl;
    cout << " Parte real: "; cin >> *real1;
    cout << " Parte imaginaria: "; cin >> *im1;
    cout << "\n Numero 2" << endl;
    cout << " Parte real: "; cin >> *real2;
    cout << " Parte imaginaria: "; cin >> *im2;
    *restar1 = *real1 - *real2;
    *restai1 = *im1 - *im2;
    cout << "\n (" << *real1 << "+" << *im1 << "i) - (" << *real2 << "+" << *im2 << "i) = (" << *restar1 << "+" << *restai1 << "i)\n";
}
int main() {
    int* opcion=new int;
    int* real1 = new int;
    int* im1 = new int;
    int* real2 = new int;
    int* im2 = new int;
    int* sumar1 = new int;
    int* sumai1 = new int;
    int* restar1 = new int;
    int* restai1 = new int;
    
    while (true) {
        menu();
        do {
            cin >> *opcion;
        } while (*opcion < 1 || *opcion>3);
        switch (*opcion) {
        case 1:
            Sumar(real1, real2, im1, im2, sumar1, sumai1);
            break;
        case 2:
            Restar(real1, real2, im1, im2, restar1, restai1);
            break;
        case 3: exit(0);
        }
        _getch();
        system("cls");
    }
    return 0;
}