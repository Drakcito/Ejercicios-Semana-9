#include "pch.h"
#include <conio.h>
#include <iostream>

using namespace std;
using namespace System;

void menu() {
	cout << "\t MENU\n";
	cout << "\t=============\n";
	cout << "\t1) Determinar el factorial de un número\n";
	cout << "\t2) Calcular el valor de ea\n";
	cout << "\t3) Imprime rombo\n";
	cout << "\t4) Fin\n";
	cout << "\n\t Digite una opcion: ";
}

int HallarFactorial(int n) {
	int factorial = 1;
	for (int i = 1; i <= n; i++) {
		factorial = factorial * i;
	}
	return factorial;
}

void HallarEA(double& a, double& k, int& n) {
	double sumatoria = 0;
	cout << "Digite el valor de a: ";
	cin >> a;
	cout << "Digite el valor de k: ";
	cin >> k;
	cout << "Digite el numero de elementos: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		sumatoria = sumatoria + (pow(a, i) / HallarFactorial(i));
	}
	cout << "La sumatoria es: " << sumatoria << endl;
}

void ImprimirRombo(int n) {
	//triangulo arriba
	int k = 2 * n - 2;
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < k; i++) {
			cout << " ";
		}
		k -= 1;
		for (int i = 0; i <= j; i++) {
			cout << " *";
		}
		cout << endl;
	}
	//triangulo abajo
	for (int j = n; j >= 0; j--) {
		for (int i = k; i > 0; i--) {
			cout << " ";
		}
		k += 1;
		for (int i = j; i >= 0; i--) {
			cout << " *";
		}
		cout << endl;
	}
}

int main() {
	int opcion;
	int n, factorial;
	double a, k;
	while (true) {
		system("cls");
		menu();
		do {
			cin >> opcion;
		} while (opcion < 1 || opcion>4);
		switch (opcion) {
		case 1:
			system("cls");
			cout << "Hallando Factorial" << endl;
			cout << "ingrese un numero para hallar el factorial: ";
			cin >> n;
			factorial = HallarFactorial(n);
			cout << "El factorial de " << n << " es: " << factorial << endl;
			break;
		case 2:
			system("cls");
			cout << "Hallar EA" << endl;
			HallarEA(a, k, n);
			break;
		case 3:
			system("cls");
			cout << "Entro a la funcion Imprimir Rombo" << endl;
			cout << "Digite n: ";
			cin >> n;
			ImprimirRombo(n);
			break;
		case 4: exit(0);
		}
		_getch();
	}
	return 0;
}