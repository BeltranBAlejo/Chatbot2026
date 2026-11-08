#include <iostream>
#include <limits>
#include "SubMenuPatrones2_2.h"

using namespace std;


void ej04_CuadradoMagico(){

    cout<<"BIENVENIDO AL CUADRADO MAGICO"<<endl;
    cout<<"\n";

    int n;

    do {

    cout<<"Digite la capacidad impar del cuadrado magico"<<endl;
    cout<<"\n";
    cin>>n;
    cout<<"\n";
    if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    n = 0;
}
    } while (n <= 0 || n % 2 == 0);

    int fila = 0;
     int columna = 0;
     int cuadrado [n][n], nuevaFila, nuevaColumna;


    for (fila = 0; fila < n; fila++){
        for ( columna = 0; columna < n; columna++){
            cuadrado [fila][columna]= 0;
        }
    }

    fila = 0;
    columna = n/2;

    for (int numero = 1; numero <= n * n; numero++){
        cuadrado [fila][columna] = numero;

        nuevaFila = (fila - 1 + n)% n;
        nuevaColumna = (columna + 1 ) % n;

        if (cuadrado[nuevaFila][nuevaColumna] != 0){

            fila = (fila + 1 ) % n;

        }else {
            fila = nuevaFila;
            columna = nuevaColumna;
        }
    }

    cout <<"TU CUADRADDO MAGICO ESTA LISTO"<<"\n";
    cout<<"\n";

    for (fila = 0; fila < n; fila ++){
        for (columna = 0; columna < n; columna ++){


            cout << "|"<<cuadrado[fila][columna]<<"|"<<"\t";

        }
        cout<<endl;
        cout<<"\n";

    }

}



void ej56_MatrizSimetrica(){

    cout<<"Programa que indica si una matriz es simetrica";
    int n;
    cout << "\n Ingrese el tamano de la matriz cuadrada (N x N): ";
    cin >> n;

    int a[n][n];


    cout << " Ingrese los elementos la matriz: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Posicion [" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }


    bool esSimetrica = true;
    for (int i = 0; i < n; i++) {

        for (int j = i + 1; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                esSimetrica = false;
                break;
            }
        }
        if (!esSimetrica) break;
    }

    if (esSimetrica) {
        cout << "\n La matriz SI es simetrica.\n";
    } else {
        cout << "\n La matriz NO es simetrica.\n";
    }

}



void ej57_MatrizAntisimetrica(){

    cout<<"Programa que indique si la matriz a es antisimétrica o no \n";
    int n;
    cout << "\n Ingrese el tamano de la matriz cuadrada (N x N): ";
    cin >> n;

    int a[n][n];

    cout << "Ingrese los elementos de la matriz:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Posicion [" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    bool esAntisimetrica = true;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (i == j) {if (a[i][j] != 0) {
                esAntisimetrica = false;
                    break;
                }
            } else {
                if (a[i][j] != -a[j][i]) {
                    esAntisimetrica = false;
                    break;
                }
            }
        }
        if (!esAntisimetrica) break;
    }

    if (esAntisimetrica) {
        cout << "\n La matriz SI es antisimetrica. \n";
    } else {
        cout << "\n La matriz NO es antisimetrica. \n";
    }

}



void ej58_MatrizDiagonal(){

    cout<<"Programa que indique si la matriz a es diagonal o no \n";
    int n;
    cout << "\n Ingrese el tamano de la matriz cuadrada (N x N): ";
    cin >> n;

    int a[n][n];

    cout << "Ingrese los elementos de la matriz:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Posicion [" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    bool esDiagonal = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                if (a[i][j] != 0) {
                    esDiagonal = false;
                    break;
                }
            }
        }
        if (!esDiagonal) break;
    }

    if (esDiagonal) {
        cout << "\nLa matriz SI es diagonal.\n";
    } else {
        cout << "\nLa matriz NO es diagonal.\n";
    }

}



void ej59_TriangularInferior(){

    cout<<"Programa que dice si una matriz es o no triangular inferior \n ";
    int n;
    cout << "\n Ingrese el tamano de la matriz cuadrada (N x N): ";
    cin >> n;

    int a[n][n];

    cout << "Ingrese los elementos de la matriz:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Posicion [" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    bool esTriangularInferior = true;
    for (int i = 0; i < n; i++) {

        for (int j = i + 1; j < n; j++) {
            if (a[i][j] != 0) {
                esTriangularInferior = false;
                break;
            }
        }
        if (!esTriangularInferior) break;
    }

    if (esTriangularInferior) {
        cout << "\nLa matriz SI es triangular inferior.\n";
    } else {
        cout << "\nLa matriz NO es triangular inferior.\n";
    }

}



void ej60_TriangularSuperior(){

    /* Aqui programas Ejercicio 60 */

}




void ej89_MatrizMarco8x6(){

    /* Aqui programas Ejercicio 89 */

}



void ej90_MatrizIdentidad7x7(){


    cout << "Programa que genera una matriz identidad de 7x7" << endl;
                int matriz[7][7];
for(int i=0;i<7;i++){
    for(int j=0;j<7;j++){
        if(i==j){
            matriz[i][j]=1;
        } else {
            matriz[i][j]=0;
        }
    }
}
for(int i=0;i<7;i++){
    for(int j=0;j<7;j++){
        cout<<matriz[i][j]<<" ";
    }
    cout<<endl;
}

}
