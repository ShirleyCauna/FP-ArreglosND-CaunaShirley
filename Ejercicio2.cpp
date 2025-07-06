/* 2. Buscar un Valor en una Matriz: Escriba un programa que busque un valor específico en una matriz
de 3x3 y devuelva todas las posiciones donde se encuentra, indicando la fila y la columna de cada
ocurrencia. 
Ejemplo de entrada                              Ejemplo de Salida
Matriz:						El valor 2 se encuentra en:
1 2 3						Fila 0, Columna 1
4 2 6						Fila 1, Columna 1
7 2 9						Fila 2, Columna 1
Valor a buscar: 2 
 */

#include <iostream>
using namespace std;

void mostrarMatriz(int matriz[][3], int fila, int columna) {
	for (int i = 0; i < fila; i++) {
		for (int j = 0; j < columna; j++) {
			cout << matriz[i][j] << "  ";
		}
		cout << endl;
	}
}

int main() {
	int matriz[3][3] = {
		{1, 2, 3},
		{4, 2, 6},
		{7, 2, 9}
	};

	int valor;
	cout << "Matriz:\n";
	mostrarMatriz(matriz, 3, 3);

	cout << "Valor que desea buscar: ";
	cin >> valor;

	// Búsqueda aún no implementada

	return 0;
}