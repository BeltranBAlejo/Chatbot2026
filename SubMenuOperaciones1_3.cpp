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

    long long b1, b2;
    bool esValido;

    cout << "Programa para sumar dos numeros binarios"<<endl;
    do {
        cout << "Ingrese el primer numero binario: ";
        cin >> b1;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Error: Ingreso letras o caracteres no validos"<<endl;
            continue;
        }
        esValido = true;
        long long temp = b1;
        if (temp < 0) esValido = false;
        
        while (temp > 0) {
            if (temp % 10 > 1) {
                esValido = false;
                break;
            }
            temp /= 10;
        }

        if (!esValido) {
            cout << "Error: Solo se permiten los digitos 0 y 1"<<endl;
        }
    } while (!esValido);

    do {
        cout << "Ingrese el segundo numero binario: ";
        cin >> b2;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Error: Ingreso letras o caracteres no validos"<<endl;
            continue;
        }

        esValido = true;
        long long temp = b2;
        if (temp < 0) esValido = false;

        while (temp > 0) {
            if (temp % 10 > 1) {
                esValido = false;
                break;
            }
            temp /= 10;
        }

        if (!esValido) {
            cout << "Error: Solo se permiten los digitos 0 y 1"<<endl;
        }
    } while (!esValido);

    long long suma = 0, potencia = 1;
    int acarreo = 0;

    long long n1 = b1, n2 = b2;
    while (n1 > 0 || n2 > 0 || acarreo > 0) {
        int d1 = n1 % 10;
        int d2 = n2 % 10;

        int total = d1 + d2 + acarreo;
        suma += (total % 2) * potencia;
        acarreo = total / 2;

        potencia *= 10;
        n1 /= 10;
        n2 /= 10;
    }

    cout << "Resultado: " << suma << endl;

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

    bool esValido;
    long long b1;

    cout << "Programa para pasar un numero binario a decimal"<<endl;
    do {
        cout << "Ingrese el numero binario: ";
        cin >> b1;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Ingreso letras o caracteres no validos"<<endl;
            continue;
        }
        esValido = true;
        long long temp = b1;
        if (temp < 0) esValido = false;
        
        while (temp > 0) {
            if (temp % 10 > 1) {
                esValido = false;
                break;
            }
            temp /= 10;
        }

        if (!esValido) {
            cout << "Error: Solo se permiten los digitos 0 y 1"<<endl;
        }
    } while (!esValido);
    long long decimal = 0;
    for(int i=0; b1 > 0; i++){
        decimal += (b1 % 10) * pow(2, i);
        b1 /= 10;
    }
    cout << "Resultado: " << decimal << endl;

}



void ej61_DecimalABinario(){

  int numeroDecimal;
    cout << "Programa para pasar de un numero decimal a binario (positivo entero)" << endl;
    do{
        cout << "Ingrese un numero decimal: ";
        cin >> numeroDecimal;
        if(cin.fail()) {
            cout << "Ingrese un numero valido" << endl;
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            numeroDecimal = 0;
        }
    }while(numeroDecimal <= 0);
int binario[64];
int contador = 0;
for(int i = 0; numeroDecimal > 0; i++){
    binario[i] = numeroDecimal % 2;
    numeroDecimal = numeroDecimal / 2;
    contador++;
}
cout << "El numero binario es: ";
cout << "|";
for(int i = contador - 1; i >= 0; i--){
    cout << binario[i]<<"|";   
}

}



void ej63_DecimalAOctal(){

        int numeroDecimal;
    cout << "Programa para pasar de un numero decimal a octal (positivo entero)" << endl;
    do{
        cout << "Ingrese un numero decimal: ";
        cin >> numeroDecimal;
        if(cin.fail()) {
            cout << "Ingrese un numero valido" << endl;
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            numeroDecimal = 0;
        }
    }while(numeroDecimal <= 0);
int octal[64];
int contador = 0;
for(int i = 0; numeroDecimal > 0; i++){
    octal[i] = numeroDecimal % 8;
    numeroDecimal = numeroDecimal / 8;
    contador++;
}
cout << "El numero octal es: "<<endl;
cout << "|";
for(int i = contador - 1; i >= 0; i--){
    cout << octal[i]<<"|";   
}

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
