#include <iostream>
#include <limits>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include "SubMenuEstadistica1_2.h"

using namespace std;


void ej15_PromedioYMayores(){

    cout <<"\n";
int n, dato;
int frecuencia [5]= {0,0,0,0,0};

do {
    cout << "Digite la cantidad de datos a ingresar (entre 1 y 100): ";
    cout << "\n";
    cin >> n;
    if (n < 1 || n > 100) {
        cout << "ERROR: Debe digitar una cantidad entre 1 y 100.\n";
    }
} while (n < 1 || n > 100);


for (int i = 0; i < n; i++) {
    do {
        cout << "Digite el dato " << (i + 1) << " (valor de 1 a 5): ";
        cout << "\n";
        cin >> dato;
        if ((dato< 1) || (dato> 5)) {
            cout << "ERROR: El dato debe ser de 1 a 5.\n";
        }
    } while (dato < 1 || dato > 5);
    frecuencia [dato-1]++;
 }

for (int i=0; i< 5; i++ ){
    cout<<"intervalo " <<(i+1) <<":";
    cout << "\n";
    for (int j=0; j< frecuencia[i]; j++){

        cout<< "*";
    }cout << "\n";
}

}


void ej17_ConteoPositivosNegativo(){

    cout << "\n";
int n;
double normi;
do {
        cout << "Digite la cantidad de numeros a ingresar: ";
        cout << "\n";
        cin >> n;
        if (cin.fail() || n <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "ERROR: Debe ingresar un numero entero positivo.\n";
            n = 0;
        }
    } while (n <= 0);

double numeros[n];

for (int i = 0; i < n; i++) {
    cout << "Digite el numero " << (i + 1) << ": ";
    cout << "\n";
    cin >> numeros[i];
    while (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "ERROR: Ingrese un numero valido: ";
            cout << "\n";
            cin >> numeros[i];
        }
}
double mayor=0;

mayor = numeros[0];

for (int i=1 ; i<n ; i++ ){

    if (numeros[i]> mayor){
        mayor= numeros[i];

    }
}

cout<< "\n";
if (mayor == 0) {
        cout << "\nEl numero mayor es 0. No se puede normalizar dividiendo por cero.\n";
    }

else {
    for (int i = 0; i < n; i++) {
    normi = numeros[i] / mayor;
    cout << "Numero " << (i + 1)<< " -original: "<< numeros[i]<< "  Normalizado: "<< normi<< "\n";
}
}


}


void ej27_DesviacionEstandar(){

    int N;
do {
cout << "Ingrese el numero de personas (entero positivo): " << endl;
cin >> N;
if (cin.fail())
 {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            N = 0;
        }
}
while (N <= 0);
double altura[N];
double sumaaltura = 0;
for (int i = 0; i < N; i++) {
    do {
        cout << "Ingrese la altura de la persona " << i + 1 << ": "<< endl;
        cin >> altura[i];
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            altura[i] = 0;
        }
    } while (altura[i] <= 0);
    sumaaltura += altura[i];
}
double promedio = sumaaltura / N;
int Amedia=0;
int Imedia=0;
for (int i = 0; i < N; i++) {
    if (altura[i] > promedio) {
        Amedia++;
    } else if (altura[i] < promedio) {
        Imedia++;
    }
}
cout << "Altura promedio: " << promedio << endl;
cout << "Personas por encima de la altura promedio: " << Amedia << endl;
cout << "Personas por debajo de la altura promedio: " << Imedia << endl;


}


void ej28_MedianaVector(){

        int v[20];
    int suma1= 0;
    int suma2= 0;
    int i;

srand(time(0));


    cout<< "Vector generado aleatoriamente: \n";
    for (i= 0; i< 20; i++) {

        v[i]= rand() % 100;
        cout << i << " = " << v[i] <<"\n";

        if (i< 10) {
            suma1 += v[i];
        }
        else {
            suma2 += v[i];
        }
    }

cout<<"\n";
    cout<< "Suma de los primeros 10 vectores: " << suma1 << "\n";
    cout<< "Suma de los ultimos 10 vectores:  " << suma2 << "\n";
cout<<"\n";

    if (suma1 > suma2) {
        cout<< "RESULTADO: La suma de los primeros 10 ES MAYOR \n";
    } else if (suma1< suma2) {
        cout<< "RESULTADO: La suma de los primeros 10 NO es mayor\n";
    } else {
        cout<< "RESULTADO: Ambas sumas son IGUALES \n";
    }



}


void ej30_ModaVector(){

    cout<<"\n";
    int n= 0;

    do {
        cout<< "Digite la cantidad de numeros para ingresar: ";
        cin>> n;

        if (cin.fail() || n <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "ERROR: Debe ingresar un numero positivo \n";
            n= 0;
        }
    } while (n<= 0);

    cout<<"\n";
    double x[n];
    double suma= 0.0, media= 0.0,sumaDiferencias= 0.0 , varianza= 0.0, desviacion= 0.0;
    int i;

    for (i = 0; i< n; i++) {
        cout<< "Digite el numero "<<(i + 1) << ": ";
        cin>> x[i];

        while (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<< "ERROR: Ingrese un numero nuevamente: ";
            cout<< "\n";
            cin>> x[i];
        }

        suma += x[i];
    }

    media= suma / n;

    for (i = 0; i < n; i++) {
        sumaDiferencias += pow(x[i] - media, 2);
    }
    varianza= sumaDiferencias / n;

    desviacion = sqrt(varianza);

    cout<< "\n";
    cout<< "Media (Promedio general): "<< media << "\n";
    cout<< "Varianza: " << varianza<< "\n";
    cout<< "Desviacion estandar: "<< desviacion << "\n";



}



void ej55_PorcentajeParesImpares(){
cout<<"\n";
    int cantElementos = 0;

    do {
        cout<< "Digite la cantidad de elementos del vector: ";
        cin>> cantElementos;

        if (cin.fail() || cantElementos<= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<< "ERROR: Debe ingresar un numero entero positivo\n";
            cantElementos= 0;
        }
    } while (cantElementos<= 0);

    int arregloPares[cantElementos];
    int numIngresado= 0;

    for (int i= 0; i < cantElementos; i++) {
        cout<< "Vector [" << i << "]: ";
        cin>> numIngresado;

        while (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<< "ERROR: Digite un numero entero valido: ";
            cin>> numIngresado;
        }

        arregloPares[i]= numIngresado;
    }

    int numMayor= arregloPares[0];
    int numMenor= arregloPares[0];

    for (int i= 1; i< cantElementos; i++) {
        if (arregloPares[i]> numMayor) {
            numMayor = arregloPares[i];
        }
        if (arregloPares[i]< numMenor) {
            numMenor = arregloPares[i];
        }
    }

    int repeticionesMayor= 0;
    int repeticionesMenor= 0;

    for (int i = 0; i< cantElementos; i++) {
        if (arregloPares[i]== numMayor) {
            repeticionesMayor++;
        }
        if (arregloPares[i]== numMenor) {
            repeticionesMenor++;
        }
    }

    cout<< "\nRESULTADOS\n";
    cout<< "Numero mayor: "<< numMayor<< " se repite "<< repeticionesMayor<< " numero de veces\n";
    cout<< "Numero menor: "<< numMenor<< " se repite "<< repeticionesMenor<< " numero de veces\n\n";

}



void ej72_PromedioPonderado(){
cout<< "\n";
    int totalEstud= 0;
    int nota= 0;
    int frecuencia[10]= {0};

    cout<< "//// ENCUESTA DE SATISFACCION CAFETERIA CENTRAL /////\n";
    cout<< "Ingrese las calificaciones de los estudiantes (1 al 10).\n";
    cout<< "Digite 0 para finalizar la encuesta\n\n";

    do {
        cout<< "Digite la calificacion de su comida (1-10, 0 para terminar): ";
        cin>> nota;

        while (cin.fail() || nota < 0 || nota > 10) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<< "ERROR: Ingrese una calificacion valida entre 1 y 10 (o 0 para salir): ";
            cin>> nota;
        }

        if (nota != 0) {
            frecuencia[nota - 1]++;
            totalEstud++;
        }
    } while (nota != 0);

    cout<< "\n//////// RESUMEN DE LA ENCUESTA  //////////\n";
    cout<< "Estudiantes encuestados: " << totalEstud << "\n\n";
    cout<< "Calificacion | Num. Estudiantes | Histograma\n";
    cout<< "=============================================\n";

    for (int i = 0; i< 10; i++) {
        cout << "      "<< (i + 1)<< "       |        "<< frecuencia[i]<< "         | ";
        for (int j = 0; j < frecuencia[i]; j++) {
        cout<< "*";
        }
    cout<< "\n";
    }
    cout<< "\n";

}



void ej98_EstadisticasCalificacion(){

    int vector[10];
int num;
int contador;
cout<<"Programa que imprime de entre 10 numeros los que terminen en 3 ingresados por el usuario (enteros diferentes de cero)"<<endl;
for (int i=0; i<10; i++){
    do {
    cout<<"Ingrese el numero "<<i+1<<" a evaluar"<<endl;
    cin>>vector[i];
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        vector[i] = 0;
    }
    } while (vector[i] == 0);
}
cout<<"Vector ingresado: "<<endl;
for (int i=0; i<10; i++){
    cout<<vector[i]<<" | ";
}
for (int i=0; i<10; i++){
    if (vector[i]%10==3 || vector[i]%10==-3){
        contador++;
    }
}
cout<<"\nLa cantidad de numeros que terminan en 3 que contiene el vector son: "<<contador<<endl;

}
