#include <iostream>
#include <limits>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include "SubMenuOrganizar1_4.h"

using namespace std;


void ej19_MezclarVectoresOrdenados(){

    cout << "\n";
    int valor1, valor2;

    do {
        cout << "Digite el la cantidad que desee: ";
        cout << "\n";
        cin >> valor1;
        if (cin.fail() || valor1 <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            valor1 = 0;
        }
    } while (valor1<= 0);

    do {
        cout<< "Digite el la cantidad que desee: ";
        cout << "\n";
        cin>> valor2;
        if (cin.fail() || valor2 <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            valor2 = 0;
        }
    } while (valor2 <= 0);

    cout<<"\n";
int n1[valor1], n2[valor2], n3[valor1 + valor2];

    for (int i = 0; i < valor1; i++) {
        do {
            cout << "Digite el valor que quiere dentro de " << i << " : " << "\n";
            cin >> n1[i];
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                break;
            }
        } while (true);
    }

    for (int i = 0; i < valor2; i++) {
        do {
            cout << "Digite el valor que quiere dentro de " << i << " : " << "\n";
            cin >>n2[i];
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                break;}
        } while (true);
    }

    for (int i = 0; i < valor1; i++) {
        n3[i] = n1[i];
    }
    for (int i = 0; i< valor2; i++) {
        n3[valor1 + i]= n2[i];
    }

int total = 0;
total = valor1 +valor2;

    for (int i = 0; i< total - 1; i++) {
        for (int j = 0; j< total - i - 1; j++) {
            if (n3[j] > n3[j + 1]) {
                int aux = n3[j];
                n3[j]= n3[j + 1];
                n3[j+ 1] = aux;
        }
    }
    }

    cout << "Valores ordenados\n";
    for (int i = 0; i < total; i++) {
        cout << n3[i] << " ";
    }

    cout << "\n";

}



void ej20_BuscarPosicionesX(){

    cout << "\n";
                int n;

                do {
                    cout<< "Digite cuantos elementos en el arreglo quiere: ";
                    cout << "\n";
                    cin>> n;


                if (cin.fail() || n<= 0 ){
                   cin.clear();
                   cin.ignore(numeric_limits<streamsize>::max(), '\n');

                   cout << "ERROR: Debe digitar un numero entero mayor a 0 \n";
                   n =0;


                }
                }while (n<=0);

                int arr[n];


                for(int i = 0; i< n; i++ ){

                    cout<< "Digite un numero en la posicion "<< i+1 << " : ";
                    cout << "\n";
                    cin>> arr[i];
                    while (cin.fail()){
                        cin.clear();
                         cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "ERROR: Digite un numero entero: ";
                        cout << "\n";
                        cin >> arr[i];

                    }
                }
cout<< "\n";
                int x;


                cout<< "Digite un numero positivo que desea buscar en el arreglo: ";
                cout << "\n";
                cin>> x;
                while (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout<< "ERROR: Digite un numero entero: ";
                    cout << "\n";
                    cin>> x;
                }
cout<< "\n";
                bool encon= false;
                cout << "El numero "<< x<< " se encuentra en la posicion: ";
                cout << "\n";
                for (int i= 0; i< n; i++) {
                    if (arr[i] == x) {
                        cout << (i + 1) << " ";
                        encon = true;
                    }
                }

                if (encon== false) {
                    cout << "(No se encontro algun numero en los arreglos";
                }
                cout <<"\n";

}



void ej34_AgruparParesImparesOrdenados(){

    int v[100];
    int i, j, aux;

    srand(time(0));

    cout<< "\n";

    cout<< "Vector original de 100 numeros aleatorios: \n";
    for (i = 0; i < 100; i++) {
        v[i] = (rand() % 1000) + 1;
        cout<< v[i] << " ";
        if ((i + 1) % 10 == 0) {
            cout<< "\n";
        }
    }

    for (i= 0; i< 100 - 1; i++) {
        for (j = 0; j< 100- 1- i; j++) {
            bool intercambiar= false;

            if (v[j] % 2 != 0 && v[j + 1] % 2 == 0) {
                intercambiar = true;
            }
            else if ((v[j] % 2 == 0 && v[j + 1] % 2 == 0) || (v[j] % 2 != 0 && v[j + 1] % 2 != 0)) {
                if (v[j] > v[j + 1]) {
                    intercambiar = true;
                }
            }

            if (intercambiar) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
                }
                }
    }

    cout<< "\n";
    cout<< "2. Vector clasificado: \n";

    for (i = 0; i < 100; i++) {
        cout<< v[i] << " ";
        if ((i + 1) % 10 == 0) {
            cout<< "\n";
            }
    }
    cout << "\n";

}



void ej35_ValorMaximoEnRango(){

    cout<< "\n";
    int n = 0;

    do {
        cout<< "Digite la cantidad de datos para el arreglo: ";
        cin >> n;

        if (cin.fail() || n <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<< "ERROR: Debe digitar un numero positivo\n";
            n = 0;
        }
    } while (n<= 0);

    int A[n];
    int i;

    for (i= 0; i < n; i++) {
        cout<< "Digite el elemento en la posicion "<< (i + 1)<< ": ";
        cin>> A[i];

        while (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<< "ERROR: Digite un numero entero valido: ";
            cin>> A[i];
        }
    }
cout<<"\n";
    int inf= 0;
    int sup= 0;

    do {
        cout<< "Digite la posicion inferior del rango (entre 1 y "<< n<< "): ";
        cin>> inf;

        cout<< "Digite la posicion superior del rango (entre "<< inf<< " y "<< n << "): ";
        cin>> sup;

        if (cin.fail() || inf< 1 || sup> n || inf> sup) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<< "ERROR: Rango invalido. Asegurese de que 1 <= inferior Y <= superior Y <= "<< n<< "\n";
            inf= 0;
            sup= 0;
        }
    } while (inf == 0 || sup== 0);

    int maxRango = A[inf - 1];

    for (i = inf - 1; i<= sup - 1; i++) {
        if (A[i]> maxRango) {
            maxRango = A[i];
        }
    }

    cout<< "\n";
    cout<< "VALOR MAXIMO EN EL RANGO :( " << inf << ", " << sup << ") \n";
    cout<< "El valor maximo dentro del rango es: " << maxRango << "\n";
    cout<< "\n";

}



void ej36_IndiceMaximoEnRango(){

    cout<< "\n";
    int n= 0;

    do {
        cout << "Digite la cantidad de datos para el arreglo: ";
        cin >> n;

        if (cin.fail() || n <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<< "ERROR: Debe digitar un numero positivo\n";
            n= 0;
        }
    } while (n<= 0);
cout<< "\n";
    int A[n];
    int i;

    for (i= 0; i < n; i++) {
        cout<< "Digite el elemento en la posicion " << (i + 1) << ": ";
        cin>> A[i];

        while (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<< "ERROR: Digite un numero entero valido: ";
            cin>> A[i];
        }
    }

    cout<< "\n";
    int inf= 0;
    int sup = 0;

    do {
        cout<< "Digite la posicion inferior del rango (entre 1 y " << n << "): ";
        cin>> inf;

        cout<< "Digite la posicion superior del rango (entre " << inf << " y " << n << "): ";
        cin>> sup;

        if (cin.fail() || inf < 1 || sup > n || inf > sup) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<< "ERROR: Rango invalido. Asegurese de que 1 <= inferior Y  <= superior Y <= "<< n<< "\n";
            inf= 0;
            sup= 0;
        }
    } while (inf== 0 || sup == 0);

    int posMax= inf;

    for (i= inf - 1; i <= sup - 1; i++) {
        if (A[i] > A[posMax - 1]) {
            posMax = i + 1;
        }
    }

    cout<< "\n";
    cout<< "INDICE DEL VALOR MAXIMO EN EL RANGO (" << inf << ", " << sup << ")\n";
    cout<< "El valor maximo " << A[posMax - 1] << " se encuentra en la posicion: " << posMax << "\n";
    cout<< "\n";

}



void ej37_OrdenarMayorAMenor(){

    cout<< "\n";
    int n= 0;

    do {
        cout<< "Digite la cantidad que haya dentro del arreglo: ";
        cin>> n;

        if (cin.fail() || n<= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "ERROR: Debe digitar un numero positivo\n";
            n = 0;
        }
    } while (n <= 0);

    int v[n];
    int i, j, aux;

    cout << "\n";
    for (i = 0; i< n; i++) {
        cout<< "Digite el numero en la posicion " << (i + 1) << ": ";
        cin>> v[i];

        while (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<< "ERROR: Digite un numero entero valido: ";
            cin>> v[i];
        }
    }

    for (i = 0; i< n - 1; i++) {
        for (j = 0; j< n - 1 - i; j++) {
            if (v[j] < v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }

    cout << "\n";
    cout << "//// ARREGLO ORDENADO DE MAYOR A MENOR ////\n";
    for (i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << "\n\n";

}



void ej54_85_BusquedaBinaria(){

    cout<<"\n";
    int n= 0;

    do {
        cout<< "Digite la cantidad de numeros que tendra el arreglo: ";
        cin>> n;

        if (cin.fail() || n <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<< "ERROR: Debe ingresar un numero entero positivo\n";
            n= 0;
        }
    } while (n<= 0);

    int v[n];
    int i, j, aux;

    cout<< "\n";
    for (i= 0; i < n; i++) {
        cout<< "Digite el elemento en la posicion "<< (i + 1)<< ": ";
        cin>> v[i];

        while (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<< "ERROR: Digite un numero entero valido: ";
            cin>> v[i];
        }
    }

    for (i= 0; i< n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }

    cout<< "\n";
    cout<<"Arreglo ordenado para la busqueda binaria:\n";
    for (i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << "\n";

    int x= 0;
    cout<< "Digite el numero que desea buscar: ";
    cin>> x;

    while (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "ERROR: Digite un numero entero valido: ";
        cin >> x;
    }

    int inf = 0, mitad=0;
    int sup= n - 1;
    int pos= -1;

    while (inf<= sup) {
        mitad = inf + (sup - inf) / 2;

        if (v[mitad]== x) {
            pos = mitad;
            break;
        } else if (v[mitad] < x) {
            inf= mitad + 1;
        } else {
            sup= mitad - 1;
        }
    }

    cout << "\n";
    if (pos != -1) {
        cout<< "El numero "<< x<< " se encontro en la posicion "<< (pos + 1)<< "\n";
        cout<< "El numero esta guardado en la casilla "<< pos<< "\n";
    } else {
        cout<< "El numero " << x << " no esta en la lista\n";
        cout<< "Resultado de busqueda en tabla = "<< pos<< "\n";
    }
    cout<< "\n";

}



void ej65_InsertarEnIndice(){
cout<<"\n";
    int n = 0;

    do {
        cout<< "Digite la cantidad de datos iniciales (entre 1 y 99): ";
        cin>> n;

        if (cin.fail() || n < 1 || n >= 100) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<< "ERROR: Debe ingresar un numero entero entre 1 y 99\n";
            n= 0;
        }
    } while (n < 1 || n >= 100);

    int v[100];

    srand(time(0));
    for (int k = 0; k< n; k++) {
        v[k]= rand() % 100;
    }

    for (int k= 0; k< n - 1; k++) {
        for (int j= 0; j< n - k - 1; j++) {
            if (v[j]> v[j + 1]) {
                int aux = v[j];
                v[j]= v[j + 1];
                v[j + 1]= aux;
            }
        }
    }

    cout<< "\nVector ordenado:\n";
    for (int k = 0; k < n; k++) {
        cout<< "["<< k<< "]: "<< v[k]<< "\n";
    }

    int valorr = 0;
    cout<< "\nDigite el numero que quiere colocar: ";
    cin>> valorr;
    cout<<"\n";

    while (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<< "ERROR: Digite un numero entero valido: ";
        cin>> valorr;
    }

    int posic = -1;
    do {
        cout<< "Digite la posicion en donde desea colocarlo (de 0 a " << n << "): ";
        cin>> posic;

        if (cin.fail() || posic< 0 || posic> n) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<< "ERROR: Posicion fuera del rango\n";
            posic = -1;
        }
    } while (posic < 0 || posic > n);

    for (int i= n; i> posic; i--) {
        v[i]= v[i - 1];
    }

    v[posic] = valorr;
    n++;

    cout<< "\nVector resultante despues de la colocacion:\n";
    for (int k = 0; k < n; k++) {
        cout << "[" << k << "]: " << v[k]<< "\n";
    }
    cout<< "\n";

}



void ej70_71_ContratosPorFecha(){
cout<<"\n";
    int N= 0;

    do {
        cout<< "Digite la cantidad de contratos a registrar (entre 1 y 40): ";
        cin>> N;

        if (cin.fail() || N < 1 || N > 40) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<< "ERROR: Debe ingresar un numero entero entre 1 y 40\n";
            N = 0;
        }
    } while (N < 1 || N > 40);

    int dia[40];
    int mes[40];
    int anual[40];
    int numContrato[40];

    for (int k = 0; k < N; k++) {
        cout<< "\n/// REGISTRO DEL CONTRATO " << (k + 1) << " ///\n";

        cout<< "Numero de contrato: ";
        cin>> numContrato[k];

        while (cin.fail() || numContrato[k]<= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<< "ERROR: Ingrese un numero de contrato valido: ";
            cin>> numContrato[k];
        }

        cout<< "Dia de firma (1-31): ";
        cin>> dia[k];

        while (cin.fail() || dia[k] < 1 || dia[k] > 31) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<< "ERROR: Digite un dia valido (1-31): ";
            cin>> dia[k];
        }

        cout << "Mes de firma (1-12): ";
        cin >> mes[k];

        while (cin.fail() || mes[k] < 1 || mes[k] > 12) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "ERROR: Digite un mes valido (1-12): ";
            cin >> mes[k];
        }

        cout<< "Tiempo anual de firma (ej. 2024): ";
        cin>> anual[k];

        while (cin.fail() || anual[k] < 1900 || anual[k] > 2100) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<< "ERROR: Digite el tiempo anual valido: ";
            cin>> anual[k];
        }
    }

    for (int i = 0; i< N - 1; i++) {
        for (int j = 0; j< N - i - 1; j++) {
            bool intercambiar = false;

            if (anual[j]< anual[j + 1]) {
                intercambiar = true;
            }else if (anual[j] == anual[j + 1]) {
                if (mes[j]< mes[j + 1]) {
                    intercambiar = true;
                }else if (mes[j] == mes[j + 1]) {
                    if (dia[j]< dia[j + 1]) {
                        intercambiar = true;
                }
            }
            }

            if (intercambiar) {
                int auxAnual= anual[j];
                anual[j]= anual[j + 1];
                anual[j + 1]= auxAnual;

                int auxMes = mes[j];
                mes[j] = mes[j + 1];
                mes[j + 1]= auxMes;

                int auxDia = dia[j];
                dia[j] = dia[j + 1];
                dia[j + 1]= auxDia;

                int auxNum = numContrato[j];
                numContrato[j]= numContrato[j + 1];
                numContrato[j + 1]= auxNum;
        }
    }
    }

    cout << "\n LISTADO DE CONTRATOS \n";
    for (int k = 0; k < N; k++) {
        cout << "Contrato Numero: "<< numContrato[k] << " / Fecha: " << dia[k] << "/" << mes[k] << "/" << anual[k] << "\n";
    }
    cout << "\n";

 //71
    int opcionSubmenu = 0;
    cout<< "-DESEA CONSULTAR UNA FECHA? \n";
    cout<< "1.Si, quiero consultar contratos por fecha \n";
    cout<< "2.No, quiero finalizar y volver al menu principal\n";
    cout<< "Digite una opcion: ";
    cin>> opcionSubmenu;

    while (cin.fail() || (opcionSubmenu != 1 && opcionSubmenu != 2)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<< "ERROR: Digite 1 para consultar o 2 para salir: ";
        cin>> opcionSubmenu;
    }
    if (opcionSubmenu == 1) {
        int diaBusq= 0, mesBusq= 0, anioBusq= 0;

        cout<< "\n";
        cout<< "Digite el dia a consultar (1-31): ";
        cin>> diaBusq;
        while (cin.fail() || diaBusq < 1 || diaBusq > 31) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<< "ERROR: Digite un dia valido (1-31): ";
            cin>> diaBusq;
        }

        cout<< "Digite el mes a consultar (1-12): ";
        cin>> mesBusq;
        while (cin.fail() || mesBusq < 1 || mesBusq > 12) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<< "ERROR: Digite un mes valido (1-12): ";
            cin>> mesBusq;
        }

        cout<< "Digite el anual a consultar: ";
        cin>> anioBusq;
        while (cin.fail() || anioBusq < 1900 || anioBusq > 2100) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<< "ERROR: Digite un anio valido: ";
            cin>> anioBusq;
        }

        int contadorContratos = 0;
        for (int k = 0; k < N; k++) {
            if (dia[k]== diaBusq && mes[k]== mesBusq && anual[k]== anioBusq) {
                contadorContratos++;
            }
        }

        cout<< "\nResultado: Se realizaron "<< contadorContratos<< " contrato en la fecha "<< diaBusq << "/"<< mesBusq << "/"<< anioBusq<< "\n";
    } else {
        cout << "\nVolviendo al menu del chatbot...\n\n";
    }

}



void ej75_FiltrarNumerosPerfectos(){
cout<<"\n";
    int n= 0;

    do {
        cout<< "Digite la cantidad de numeros a generar (entre 1 y 100): ";
        cin>> n;

        if (cin.fail() || n < 1 || n > 100) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<< "ERROR: Debe ingresar un numero entero positivo entre 1 y 100\n";
            n = 0;
        }
    } while (n< 1 || n> 100);

    int v[n];
    int perfectos[n];
    int numP = 0;

    srand(time(0));
    for (int k= 0; k< n; k++) {
        v[k]= rand() % 500 + 1;
    }

    for (int k= 0; k < n; k++) {
        int suma= 0;

        for (int d= 1; d <= v[k] / 2; d++) {
            if (v[k] % d== 0) {
                suma += d;
            }
        }

        if (suma== v[k] && v[k] > 0) {
            perfectos[numP] = v[k];
            numP++;
        }
    }

    cout << "\n////// RESULTADOS OBTENIDOS //////\n";

    cout<< "Vector original generado (" << n << ") :\n";
    for (int k = 0; k< n; k++) {
        cout<< v[k]<< " | ";
    }
    cout<< "\n\n";

    if (numP> 0) {
        cout<< "Numeros perfectos encontrados (" << numP << "):\n";
        for (int k = 0; k < numP; k++) {
            cout<< perfectos[k]<< " | ";
        }
        cout<< "\n\n";
    } else {
        cout<< "No se encontraron numeros perfectos en el vector generado\n\n";
    }

}



void ej82_FiltrarNumerosPrimos(){
cout<<"\n";
    int n= 0;

    do {
        cout<< "Digite la cantidad de numeros a generar (entre 1 y 100): ";
        cin>> n;

        if (cin.fail() || n < 1 || n > 100) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<< "ERROR: Debe ingresar un numero entero positivo entre 1 y 100\n";
            n= 0;
        }
    } while (n < 1 || n > 100);

    int v[n];
    int primos[n];
    int cantPrimos= 0;

    srand(time(0));
    for (int k= 0; k< n; k++) {
        v[k]= rand() % 500 + 1;
    }

    for (int i= 0; i< n; i++) {
        bool esPrimo = true;

        if (v[i]<= 1) {
            esPrimo= false;
        } else {
            for (int d = 2; d * d <= v[i]; d++) {
                if (v[i] % d == 0) {
                    esPrimo= false;
                    break;
            }
        }
        }

        if (esPrimo) {
            primos[cantPrimos] = v[i];
            cantPrimos++;
        }
    }


    cout<< "\n///// RESULTADOS OBTENIDOS /////\n";

    cout<< "Vector original generado (" << n << " ):\n";
    for (int k = 0; k < n; k++) {
        cout<< v[k]<< " | ";
    }
    cout<< "\n\n";

    if (cantPrimos > 0) {
        cout<< "Numeros primos encontrados (" << cantPrimos << " en total):\n";
        for (int k = 0; k< cantPrimos; k++) {
            cout<< primos[k]<< " | ";
        }
        cout<< "\n\n";
    } else {
        cout<< "No se encontraron numeros primos en el vector\n\n";
    }

}


void ej94_FiltrarNumerosDeficientes(){

    cout<< "\n";
    int n= 0;

    do {
        cout<< "Digite la cantidad de numeros para generar: ";
        cin>> n;

        if (cin.fail() || n <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "ERROR: Debe digitar un numero entero positivo\n";
            n= 0;
        }
    } while (n<= 0);

    int v[n];
    int deficientes[n];
    int cantDefi = 0;

srand(time(0));
    for (int k = 0; k < n; k++) {
        v[k]= rand() % 500 + 1;
    }

    for (int k = 0; k < n; k++) {
        int suma= 0;

        for (int d = 1; d <= v[k] / 2; d++) {
            if (v[k] % d== 0) {
                suma += d;
            }
        }

        if (suma< v[k]) {
            deficientes[cantDefi] = v[k];
            cantDefi++;
        }
    }

    cout<< "\nVector original :\n";
    for (int k = 0; k < n; k++) {
        cout<< v[k]<< " ";
    }
cout<< "\n";

    if (cantDefi > 0) {
        cout << "Numeros deficientes" << cantDefi << " en total:\n";
        for (int k = 0; k < cantDefi; k++) {
            cout<< deficientes[k] << " ";
        }
        cout<< "\n\n";
    }else {
        cout<< "No se encontraron numeros deficientes en el vector\n\n";
    }

}
