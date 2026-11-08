#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>
#include <ctime>
#include "SubMenuTexto1_1.h"


using namespace std;





void ej09_EncriptarAscii(){

cin.ignore();
    string palabra;
    cout << "Programa que encripta una cadena de caracteres para sumarle dos al codigo ASCII y los imprime" << endl;
    cout << "Ingrese una cadena de caracteres: " << endl;
    getline(cin, palabra);
    string fraseEncriptada=palabra;
    for(size_t i = 0; i < palabra.length(); i++) {
        fraseEncriptada[i] = palabra[i] + 2;
        cout << "caracter " << i + 1 << " encriptado : " << fraseEncriptada[i] << endl;
    }
    cout << endl << "La frase encriptada es: ";
for(size_t i = 0; i < palabra.length(); i++) {
        cout << fraseEncriptada[i];
    }  }





void ej10_ContarVocalesFrase(){
    /* Aqui programas Ejercicio 10 */

}



void ej11_FraseAlReves(){

    string palabra;
    cout << "Programa para escribir una frase al reves" << endl;
    cout << "Ingrese una frase: "<<endl;
    getline(cin, palabra);
    cout << "La frase al reves es: ";
    cout << "\n";
    for(int i = palabra.length() - 1; i >= 0; i--) {
        cout << palabra[i];
    }

}


void ej22_ContarVocalesConsonantes(){

    cin.ignore();
    char palabra[100];
    cout << "Programa para saber cuantas vocales, letras, y consonantes tiene una frase" << endl;
    cout << "Ingrese una frase: " << endl;
    cin.getline(palabra, 100);
    int vocales = 0, consonantes = 0, letras = 0;
    for(int i = 0; palabra[i] != '\0'; i++) {
        if((palabra[i] >= 'a' && palabra[i] <= 'z') || (palabra[i] >= 'A' && palabra[i] <= 'Z')) {
            letras++;
            if(palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || palabra[i] == 'o' || palabra[i] == 'u' ||
               palabra[i] == 'A' || palabra[i] == 'E' || palabra[i] == 'I' || palabra[i] == 'O' || palabra[i] == 'U') {
                vocales++;
            } else {
                consonantes++;
            }
        }
    }
    cout << "Total de letras: " << letras << endl;
    cout << "Total de vocales: " << vocales << endl;
    cout << "Total de consonantes: " << consonantes << endl;


}


void ej23_Sufijo2Palabras(){

    /* Aqui programas Ejercicio 23 */


}



void ej29_PrimeraOcurrencia(){

    /* Aqui programas Ejercicio 29 */

}




void ej32_Frecuencia1000Letras(){

    cout << "Programa que genera 1000 letras mayusculas y cuenta cuantas veces aparece cada una " << endl;
    char letras[1000];
    srand(time(0));
    for (int i = 0; i < 1000; i++) {
         int numeroAleatorio = rand() % 26;
        letras[i] = 'A' + numeroAleatorio;
    }
   cout << "Letras generadas: " << endl;
    for (int i = 0; i < 1000; i++) {
        cout << letras[i] << " ";
        if ((i + 1) % 50 == 0) {
            cout << endl;
        }
    }
    int cantidadLetras[26] = {0};
    for (int i = 0; i < 1000; i++) {
        cantidadLetras[letras[i] - 'A']++;
    }
    cout << "Cantidad de veces que aparece cada letra: " << endl;
    for (int i = 0; i < 26; i++) {
        cout << (char)('A' + i) << ": " << cantidadLetras[i] << endl;
    }
            }





void ej52_OrdenarAlfabetica(){

    int N;
    do {
        cout << "Ingrese la cantidad de nombres para ordenar alfabeticamente: " << endl;
        cin >> N;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error: Por favor, ingrese un numero entero." << endl;
            N = 0;
        } else if (N <= 0) {
            cout << "Error: Por favor, ingrese un numero positivo." << endl;
        }
    } while (N <= 0);
    string nombres[N];
    for (int i = 0; i < N; i++) {
        cout << "Ingrese el nombre de la persona " << i + 1 << ": "<< endl;
        cin >> nombres[i];
    }
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (nombres[j] > nombres[j + 1]) {
                swap(nombres[j], nombres[j + 1]);
            }
        }
    }
    cout << "Nombres ordenados alfabeticamente: " << endl;
    for (int i = 0; i < N; i++) {
        cout << nombres[i] << endl;
    }

}


void ej53_PalabrasPlural(){

    /* Aqui programas Ejercicio 53 */

}


void ej62_CalculadoraTelegramas(){

    /* Aqui programas Ejercicio 62 */

}


void ej67_NumerosArabigosRoman(){

    /* Aqui programas Ejercicio 67 */

}
