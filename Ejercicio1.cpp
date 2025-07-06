#include <iostream>
using namespace std;

int main() {
    int matriz1[3][3];
    int matriz2[3][3];

    // Ingreso de matriz 1
    cout << "Ingrese elementos de la matriz 1:\n";
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            cin >> matriz1[i][j];

    // Ingreso de matriz 2
    cout << "Ingrese elementos de la matriz 2:\n";
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            cin >> matriz2[i][j];

    // Aún no se multiplica
    return 0;
}