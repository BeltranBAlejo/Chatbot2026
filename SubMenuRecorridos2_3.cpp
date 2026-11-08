#include <iostream>
#include <limits>
#include "SubMenuRecorridos2_3.h"

using namespace std;


void ej25_SumaFilasAVector(){

    /* Aqui programas Ejercicio 25 */

}



void ej26_CoordenadasMayorMenor(){

    cout<<"programa que calcula el numero mayor y menor"<<endl;
    cout<<endl;

    int tam;
    cout<<"¿cuntos numeros vas a comparar/ingresar?"<<endl;
    cin>>tam;
    cout<<endl;
    int num[tam],menor,mayor;

    for (int i=0; i<tam; i++)
    {
        cout<<"digite el numero de la posicion "<<i+1<<":"<<endl;
        cin>>num[i];
        cout<<endl;
    }
    menor=mayor=num[0];


    for(int i=0; i<tam; i++)
    {
        if(num[i]<menor)
        {
            menor=num[i];
        }
        if(num[i]>mayor)
        {
            mayor=num[i];
        }



        if(num[i]>mayor)
        {
            mayor=num[i];
        }
        if(num[i]<menor)
        {
            menor=num[i];
        }
    }
    cout<<"el numero mayor es: "<<mayor<<endl;
    cout<<"el numero menor es: "<<menor<<endl;

}



void ej38_ReporteMatriz3x4(){

    cout<<"Matriz 3x4 que informa: "<<"\n"<<"1)Los datos cargados en la matriz."<<"\n"<<"2)Promedio General."<<"\n"<<"3)Sumatoria de los N pares ingresados en la matriz \n";
    int matriz[3][4];
    int sumaTotal = 0;
    int sumaPares = 0;
    cout << "\n Ingrese los 12 numeros de la matriz:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matriz[i][j];

            sumaTotal += matriz[i][j];

            if (matriz[i][j] % 2 == 0) {
                sumaPares += matriz[i][j];
            }
        }}

    cout << "\n Los datos cargados en la matriz:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout<<"\n";
    }

    cout << "\n Promedio General: " << (sumaTotal / 12.0) << "\n";
    cout << "\n";
    cout << " Sumatoria de los N pares ingresados: " << sumaPares << "\n";

}



void ej78_BuscarPuntoSilla(){

    /* Aqui programas Ejercicio 78 */

}



void ej92_MayorVenta5x5(){

    /* Aqui programas Ejercicio 92 */

}



void ej96_ModaRepeticiones5x5(){

    /* Aqui programas Ejercicio 96 */

}



void ej97_CoordenadaMayorPrimo(){

    /* Aqui programas Ejercicio 97 */

}



void ej99_ColumnaPrimeraAparicionMayor(){

    int matriz[4][4];
                     int mayor = 0;
                     int columnaMayor = 0;

                      cout << "Programa que imprime el numero de la columna en donde se digite el numero mas grande de una matriz 4x4" << endl;

                        for (int i = 0; i < 4; i++) {
                        for (int j = 0; j < 4; j++) {
                          do {
                                  cout << "Digite el numero de la posicion de la matriz [" << i + 1 << "][" << j + 1 << "]: "<<endl;
                                 cin >> matriz[i][j];

                                 if (cin.fail()) {
                                   cin.clear();
                                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                  matriz[i][j] = 0;
                                 }
                                } while (matriz[i][j] == 0);

                             if (matriz[i][j] > mayor) {
                mayor = matriz[i][j];
                columnaMayor = j + 1;
            }
        }
    }
cout << "Matriz ingresada:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] <<endl;
        }
        cout << endl;
    }

    cout << "El numero mayor es: " << mayor << endl;
    cout << "La columna donde se encuentra el numero mas grande es: " << columnaMayor << endl;

}
