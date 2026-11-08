#include <iostream>
#include <limits>
#include <string>
#include <algorithm>
#include <cmath>
#include "SubMenuOperaciones1_3.h"

using namespace std;

void ej02_SepararDigitos(){

    int num;
do {
cout<<"Ingrese un numero entero positivo"<<endl;
cin>>num;
if (cin.fail())
 {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            num = 0;
        }
}
while(num <= 0);
unsigned int temp=num;
int cantidad=0;
do{
   cantidad++;
   temp=temp/10;
} while(temp>0);
int arr[cantidad];
temp=num;
for(int i = cantidad-1; i>=0; i--){
    arr[i]=temp%10;
    temp=temp/10;
}
cout<<"Digitos guardados en el arreglo: "<<endl;
for (int i = 0; i < cantidad; i++){
    cout<<arr[i]<<" ";
}

}


void ej18_SumaBinarios(){

    /* Aqui programas Ejercicio 18 */

}



void ej21_VectorPartidario(){

    cout<<"\n";

            int n;
    do {
    cout << "Digite de cuanto quiere el arreglo (mayor o igual 2): ";
    cout << "\n";
    cin >> n;
    if (cin.fail() || n< 2) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "ERROR: Debe ingresar un numero mayor o igual a 2 para la comparacion ";
                        cout << "\n";
                        n= 0;
                    }
                } while (n < 2);


    int arr[n];

for (int i= 0; i < n; i++) {
        cout << "Digite un numero en el arreglo " << i<< " : ";
        cout << "\n";
        cin>> arr[i];

        while (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout<< "ERROR: Digite el numero nuevamente: ";
                        cout << "\n";
                        cin>> arr[i];
                    }
    }


    int menorPar= arr[0];
    int mayorImpar = arr[1];


    for (int i= 0; i < n;i++) {
        if (i % 2 == 0) {

            if (arr[i]< menorPar) {
                menorPar= arr[i];}
        } else{

            if (arr[i]> mayorImpar) {
                mayorImpar= arr[i];
            }}
    }

    cout<< "El menor arreglo en posiciones pares: "<< menorPar << "\n";
    cout<<"\n";
    cout<< "El mayor arreglo en posiciones impares: "<< mayorImpar << "\n";
    cout<<"\n";
cout<<"\n\n";
    if (menorPar > mayorImpar) {
        cout<< "El arreglo ES PARTIDARIO." << "\n";
    } else {
        cout<< "El arreglo NO ES PARTIDARIO." << "\n";
    }

}



void ej39_CuadradoDiferencia(){

cout<< "\n";
    int n= 0;

    do {
        cout<< "Digite la cantidad de elementos dentro del arreglo (minimo 2): ";
        cin>> n;

        if (cin.fail() || n< 2) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "ERROR: Debe ingresar un numero entero mayor o igual a 2\n";
            n= 0;
        }
    } while (n < 2);

    int A[n];
    int i;

    cout<< "\n";
    for (i = 0; i < n; i++) {
        cout<< "Digite el elemento " << (i + 1) << " de la serie: ";
        cin>> A[i];

        while (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "ERROR: Digite un numero entero valido: ";
            cin >> A[i];
        }
    }

    int v[n - 1];

    for (i = 0; i < n - 1; i++) {
        v[i] = pow(A[i + 1] - A[i], 2);
    }

    cout<< "\n";
    cout<< "//// DIFERENCIAS FINITAS DE LA SERIE ////\n";
    for (i= 0; i< n - 1; i++) {
        cout << v[i] << " ";
    }
    cout << "\n\n";

}



void ej40_BitsADecimal(){

    /* Aqui programas Ejercicio 40 */

}



void ej61_DecimalABinario(){

    /* Aqui programas Ejercicio 61 */

}



void ej63_DecimalAOctal(){

    /* Aqui programas Ejercicio 63 */

}



void ej64_FormatearPuntosMiles(){

    cout << "programa que separa un numero en grupos de 3 digitos con puntos como separadores." << endl;
    long long numero;
    do{
        cout << "Ingresa un numero: ";
        cin >> numero;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            numero = 0;
        }
    }
    while (numero <= 0);
    int digitos[20];
    int cantidad = 0;


    while (numero > 0) {
        digitos[cantidad] = numero % 10;
        numero /= 10;
        cantidad++;
    }


    cout << "Numero con separadores: ";


    for (int i = cantidad - 1; i >= 0; i--) {
        cout << digitos[i];


        if (i > 0 && i % 3 == 0) {
            cout << ".";
        }
    }
    cout << endl;

}



void ej76_TrianguloPascal(){

    int filas;
cout<<"Programa para dibujar el triangulo de Pascal"<<endl;
do {
    cout<<"Ingrese el numero de filas: ";
    cin>>filas;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        filas = 0;
    }
} while (filas <= 0);
int matriz[filas];
for(int i=0;i<filas;i++){
    matriz[i]=1;
}
for(int i=0;i<filas;i++){
    for(int j=0;j<=i;j++){
        cout<<matriz[j]<<" ";
    }
    cout<<endl;
    for(int j=i;j>0;j--){
        matriz[j]=matriz[j]+matriz[j-1];
    }
}

}



void ej83_FiltrarPares(){

    /* Aqui programas Ejercicio 83 */

}
