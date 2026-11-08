#include <iostream>
#include <limits>
#include <cstdlib>
#include "SubMenuAlgebra2_1.h"

using namespace std;

// ===== FUNCIONES AUXILIARES 24 =====

void sumarMatrices(int A[F][COL], int B[F][COL], int C[F][COL], int filas, int column) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < column; ++j) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void restarMatrices(int A[F][COL], int B[F][COL], int C[F][COL], int filas, int column) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < column; ++j) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

void trasponerMatriz(int A[F][COL], int B[F][COL], int filas, int column) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < column; ++j) {
            B[j][i] = A[i][j];
        }
    }
}

int calcularTraza(int A[F][COL], int n) {
    int sumaDiagonal = 0;
    for (int i = 0; i < n; ++i) {
        sumaDiagonal += A[i][i];
    }
    return sumaDiagonal;
}

void imprimirMatriz(int M[F][COL], int filas, int column) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < column; ++j) {
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void pedirDatosMatriz(int M[F][COL], int filas, int columnas, char nombre) {
    cout << "--- Ingreso de datos para la Matriz " << nombre << " ---" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << nombre << "[" << i << "][" << j << "]: ";
            cin >> M[i][j];
        }
    }
    cout << endl;
}


//funciones


void ej06_DividirMatriz(){

    int M[3][4];
    cout << "Programa que divide cada valor de la matriz entre el valor de la posicion 2,2 de la matriz" << endl;

    cout << "Matriz original:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            M[i][j] = rand() % 2001 - 1000;
            cout << M[i][j] <<" | ";
        }
        cout << endl;
    }

    int divisor = M[2][2];
    cout << "El divisor (posicion [2][2] o 2,2) es: " << divisor << endl;

    cout << "Matriz resultante:" << endl;
    cout.setf(ios::fixed);
    cout.precision(2);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            double resultado = static_cast<double>(M[i][j]) / divisor;
            cout << resultado <<" | ";
        }
        cout << endl;
    }


}



void ej07_MatrizTranspuesta3x4(){

    cout<<endl;
                int numeros[3][4];
cout<<"Programa que muestra una matriz de 3 filas y 4 columnas ingresada por el usuario y la transpone en otra matriz que invierte filas y columnas"<<endl;

    for(int i=0;i<3;i++)
        {
for(int j=0;j<4;j++)
    {
    cout<<"por favor digite un  numero ["<<i+1<<"]["<<j+1<<"]: ";
    cout << "\n";
    cin>>numeros[i][j];
    }
        }
           cout<<"Matriz ingresada: "<<endl;
        for (int i=0; i<3; i++)
        {
            for (int j=0; j<4; j++)
{
cout<<numeros[i][j]<<" ";
}
cout<<endl;
        }
         cout<<"Matriz transpuesta: "<<endl;
        for(int j=0; j<4; j++)
            {
        for(int i=0; i<3; i++)
        {

        cout<<numeros[i][j]<<" ";
        }
        cout<<endl;
        }

}



void ej08_SumaDosMatrices(){

    cout<<endl;
                cout<<"Programa que suma dos matrices bidimensionales ingresadas por el usuario"<<endl;
int filas, column;
cout<<"Ingrese la cantidad de filas que tendran sus matrices: "<<endl;
cin>>filas;
cout<<"Ingrese la cantidad de columnas que tendra sus matrices: "<<endl;
cin>>column;
int matriz[filas][column];
for (int i=0; i<filas; i++)
{
    for(int j=0; j<column; j++)
    {
    cout<<"Ingrese los numeros de la primera matriz en la posicion: ["<< i+1 <<"] ["<<j+1<<"]"<<endl;
    cin>>matriz[i][j];
    }
}
cout<<"Primer matriz: "<<endl;
for (int i=0; i<filas; i++ )
{
    for(int j=0; j<column; j++)
    {
        cout<<matriz[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
int matriz2[filas][column];
for (int i=0; i<filas; i++)
{
    for(int j=0; j<column; j++)
    {
    cout<<"Ingrese los numeros de la segunda matriz en la posicion: ["<< i+1 <<"] ["<< j+1<<"]"<<endl;
    cin>>matriz2[i][j];
    }
}
cout<<"Segunda matriz: "<<endl;
for (int i=0; i<filas; i++ )
{
    for(int j=0; j<column; j++)
    {
        cout<<matriz2[i][j]<<" ";
    }
    cout<<endl;
}
int matrizsuma[filas][column];
for(int i=0; i<filas; i++)
{
    for(int j=0; j<column; j++)
    {
        matrizsuma[i][j]=matriz2[i][j]+matriz[i][j];
    }
}
cout<<"Matriz resultante de la suma de las matrices en cada posicion: "<<endl;
for (int i=0; i<filas; i++ )
{
    for(int j=0; j<column; j++)
    {
        cout<<matrizsuma[i][j]<<" ";
    }
    cout<<endl;
}

}



void ejercicio_24(){

    int filas, column;
    static int A[F][COL] = {0};
    static int B[F][COL] = {0};
    static int cuadrada[F][COL] = {0};

    static int resultadoSuma[F][COL] = {0};
    static int resultadoResta[F][COL] = {0};
    static int resultadoTraspuesta[F][COL] = {0};

    int opcion;

    cout << "=== OPERACIONES CON MATRICES ===" << endl;
    cout << "1. Sumar Matrices (A + B)" << endl;
    cout << "2. Restar Matrices (A - B)" << endl;
    cout << "3. Traspuesta de una Matriz (At)" << endl;
    cout << "4. Calcular Traza de una Matriz Cuadrada" << endl;
    cout << "Seleccione una opcion (1-4): ";
    cin >> opcion;
    cout << endl;

    if (opcion < 1 || opcion > 4) {
        cout << "Opcion no valida. Intente con numeros del 1 al 4." << endl;
        return;
    }

    if (opcion == 1 || opcion == 2) {
        cout << "Ingrese el numero de filas " << endl;
        cin >> filas;
        cout << "Ingrese el numero de columnas" << endl;
        cin >> column;
        cout << endl;

        if (filas > F || column > COL || filas <= 0 || column <= 0) {
            cout << "Dimensiones fuera de los limites permitidos." << endl;
            return;
        }

        pedirDatosMatriz(A, filas, column, 'A');
        pedirDatosMatriz(B, filas, column, 'B');

    } else if (opcion == 3) {
        cout << "Ingrese el numero de filas de la matriz A " << endl;
        cin >> filas;
        cout << "Ingrese el numero de columnas de la matriz A " << endl;
        cin >> column;
        cout << endl;

        if (filas > F || column > COL || filas <= 0 || column <= 0) {
            cout << "Dimensiones fuera de los limites permitidos." << endl;
            return;
        }

        pedirDatosMatriz(A, filas, column, 'A');

    } else if (opcion == 4) {
        int n;
        cout << "Ingrese el tamano de la matriz cuadrada n x n " << endl;
        cin >> n;
        cout << endl;

        if (n > F || n <= 0) {
            cout << "Dimensiones fuera de los limites permitidos." << endl;
            return;
        }

        pedirDatosMatriz(cuadrada, n, n, 'C');

        cout << "Matriz Cuadrada (" << n << "x" << n << "):" << endl;
        imprimirMatriz(cuadrada, n, n);
        cout << "La traza es: " << calcularTraza(cuadrada, n) << endl;
        return;
    }

    switch (opcion) {
        case 1:
            sumarMatrices(A, B, resultadoSuma, filas, column);
            cout << "Resultado de la Suma:" << endl;
            imprimirMatriz(resultadoSuma, filas, column);
            break;
        case 2:
            restarMatrices(A, B, resultadoResta, filas, column);
            cout << "Resultado de la Resta:" << endl;
            imprimirMatriz(resultadoResta, filas, column);
            break;
        case 3:
            trasponerMatriz(A, resultadoTraspuesta, filas, column);
            cout << "Matriz Original A:" << endl;
            imprimirMatriz(A, filas, column);
            cout << "Resultado de la Traspuesta:" << endl;
            imprimirMatriz(resultadoTraspuesta, column, filas);
            break;
    }
}




void ej91_TransponerMatriz5x9(){

    /* Aqui programas Ejercicio 91 */

}
