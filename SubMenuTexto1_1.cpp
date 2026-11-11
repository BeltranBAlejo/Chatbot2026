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

    char p1[100];
    char p2[100];
    bool esValido;

    do {
        cout << "Ingrese la primera palabra (sufijo): "<<endl;
        cin >> p1;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        esValido = true;
        int tam = strlen(p1);
        for (int i = 0; i < tam; i++) {
            if (!(p1[i] >= 'a' && p1[i] <= 'z') && !(p1[i] >= 'A' && p1[i] <= 'Z')) {
                esValido = false;
                break;
            }
        }

        if (!esValido) {
            cout << "Error: No se permiten numeros ni simbolos. Intente de nuevo"<<endl;
        }
    } while (!esValido);

    do {
        cout << "Ingrese la segunda palabra: "<<endl;
        cin >> p2;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        esValido = true;
        int tam = strlen(p2);
        for (int i = 0; i < tam; i++) {
            if (!(p2[i] >= 'a' && p2[i] <= 'z') && !(p2[i] >= 'A' && p2[i] <= 'Z')) {
                esValido = false;
                break;
            }
        }

        if (!esValido) {
            cout << "Error: No se permiten numeros ni simbolos. Intente de nuevo"<<endl;
        }
    } while (!esValido);

    int tam1 = strlen(p1);
    int tam2 = strlen(p2);

    if (tam1 > tam2) {
        cout << "no es sufijo: '" << p1 << "' es mas larga que '" << p2 << "'." << endl;
    }

    bool esSufijo = true;
    for (int i = 0; i < tam1; i++) {
        if (p2[tam2 - 1 - i] != p1[tam1 - 1 - i]) {
            esSufijo = false;
            break;
        }
    }

    if (esSufijo) {
        cout << "Resultado: '" << p1 << "' si es sufijo de '" << p2 << "'." << endl;
    } else {
        cout << "Resultado: '" << p1 << "' no es sufijo de '" << p2 << "'." << endl;
    }


}



void ej29_PrimeraOcurrencia(){

    char fuente[100];
    char caracteres[50];
    bool leidoFuente = false;
    bool leidoCaracteres = false;

    do {
        cout << "Ingrese la cadena fuente: ";
        cin.getline(fuente, 100);
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
        } else if (fuente[0] != '\0') {
            leidoFuente = true;
        }
    } while (!leidoFuente);

    do {
        cout << "Ingrese los caracteres a buscar: ";
        cin.getline(caracteres, 50);
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
        } else if (caracteres[0] != '\0') {
            leidoCaracteres = true;
        }
    } while (!leidoCaracteres);

    int posicionEncontrada = -1;
    bool encontrado = false;

    int i = 0;
    while (fuente[i] != '\0' && !encontrado) {
        int j = 0;
        while (caracteres[j] != '\0') {
            if (fuente[i] == caracteres[j]) {
                posicionEncontrada = i;
                encontrado = true;
                break;
            }
            j++;
        }
        i++;
    }

    if (encontrado) {
        cout << "La primera ocurrencia se encuentra en el indice: " << posicionEncontrada << endl;
    } else {
        cout << "Ninguno de los caracteres solicitados se encuentra dentro de la cadena fuente." << endl;
    }

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

        char palabra[50];
    char plural[55];

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    int longitud = 0;
    bool esValida = true;

    while (palabra[longitud] != '\0') {
        char c = palabra[longitud];
        if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))) {
            esValida = false;
            break;
        }
        longitud++;
    }

    if (!esValida || longitud == 0) {
        cout << "Entrada invalida. Solo se permiten letras." << endl;
    }

    for (int i = 0; i < longitud; i++) {
        plural[i] = palabra[i];
    }

    char ultima = palabra[longitud - 1];

    if (ultima == 'a' || ultima == 'e' || ultima == 'i' || ultima == 'o' || ultima == 'u' ||
        ultima == 'A' || ultima == 'E' || ultima == 'I' || ultima == 'O' || ultima == 'U') {
        plural[longitud] = 's';
        plural[longitud + 1] = '\0';
    } 
    else if (ultima == 'z' || ultima == 'Z') {
        plural[longitud - 1] = (ultima == 'z') ? 'c' : 'C';
        plural[longitud] = 'e';
        plural[longitud + 1] = 's';
        plural[longitud + 2] = '\0';
    } 
    else {
        plural[longitud] = 'e';
        plural[longitud + 1] = 's';
        plural[longitud + 2] = '\0';
    }

    std::cout << "El plural es: " << plural << std::endl;

}


void ej62_CalculadoraTelegramas(){

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
    } while (numero <= 0);
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


void ej67_NumerosArabigosRoman(){

    int opcion = 0;

do {
    cout << "1. Convertir de Arabigo a Romano" << endl;
    cout << "2. Convertir de Romano a Arabigo" << endl;
    cout << "Ingrese una opcion (1 o 2): ";
    cin >> opcion;

    if (cin.fail() || (opcion != 1 && opcion != 2)) {
        cin.clear();
        cin.ignore(1000, '\n');
        opcion = 0;
        cout << "Opcion no valida. Intente de nuevo." << endl;
    }
} while (opcion == 0);

cin.ignore(1000, '\n');

if (opcion == 1) {
    int num = 0;
    do {
        cout << "Ingrese un numero entero positivo: ";
        cin >> num;
        if (cin.fail() || num <= 0) {
            cin.clear();
            cin.ignore(1000, '\n');
            num = 0;
        }
    } while (num == 0);

    int valores[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char* simbolos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    char resultado[50];
    int idxRes = 0;

    for (int i = 0; i < 13; i++) {
        while (num >= valores[i]) {
            int j = 0;
            while (simbolos[i][j] != '\0') {
                resultado[idxRes] = simbolos[i][j];
                idxRes++;
                j++;
            }
            num -= valores[i];
        }
    }
    resultado[idxRes] = '\0';
    cout << "El numero en romanos es: " << resultado << endl;

} else {
    char romano[50];
    bool valido = false;

    do {
        cout << "Ingrese el numero romano: ";
        cin.getline(romano, 50);

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
        } else if (romano[0] != '\0') {
            valido = true;
            int k = 0;
            while (romano[k] != '\0') {
                char c = romano[k];
                int val = 0;
                if (c == 'I' || c == 'i') val = 1;
                else if (c == 'V' || c == 'v') val = 5;
                else if (c == 'X' || c == 'x') val = 10;
                else if (c == 'L' || c == 'l') val = 50;
                else if (c == 'C' || c == 'c') val = 100;
                else if (c == 'D' || c == 'd') val = 500;
                else if (c == 'M' || c == 'm') val = 1000;

                if (val == 0) {
                    valido = false;
                    cout << "El texto contiene caracteres romanos no validos." << endl;
                    break;
                }
                k++;
            }
        }
    } while (!valido);

    int total = 0;
    int i = 0;

    while (romano[i] != '\0') {
        char c1 = romano[i];
        int actual = 0;
        if (c1 == 'I' || c1 == 'i') actual = 1;
        else if (c1 == 'V' || c1 == 'v') actual = 5;
        else if (c1 == 'X' || c1 == 'x') actual = 10;
        else if (c1 == 'L' || c1 == 'l') actual = 50;
        else if (c1 == 'C' || c1 == 'c') actual = 100;
        else if (c1 == 'D' || c1 == 'd') actual = 500;
        else if (c1 == 'M' || c1 == 'm') actual = 1000;

        int siguiente = 0;
        if (romano[i + 1] != '\0') {
            char c2 = romano[i + 1];
            if (c2 == 'I' || c2 == 'i') siguiente = 1;
            else if (c2 == 'V' || c2 == 'v') siguiente = 5;
            else if (c2 == 'X' || c2 == 'x') siguiente = 10;
            else if (c2 == 'L' || c2 == 'l') siguiente = 50;
            else if (c2 == 'C' || c2 == 'c') siguiente = 100;
            else if (c2 == 'D' || c2 == 'd') siguiente = 500;
            else if (c2 == 'M' || c2 == 'm') siguiente = 1000;
        }

        if (actual < siguiente) {
            total -= actual;
        } else {
            total += actual;
        }
        i++;
    }

    cout << "El numero en arabigos es: " << total << endl;
}

}
