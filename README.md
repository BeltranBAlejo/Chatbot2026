#include <iostream>
#include <thread>
#include <chrono>
#include <limits>
#include <windows.h>
#include <string>

using namespace std;

// Declaracion
void menuVectores();
void menuMatrices();

void subMenu1D_Texto();
void subMenu1D_Estadistica();
void subMenu1D_Numeros();
void subMenu1D_Busqueda();
void subMenu1D_Simulacion();

void subMenu2D_Algebra();
void subMenu2D_Patrones();
void subMenu2D_Recorridos();
void subMenu2D_Negocios();

int main() {
    int opcionPrincipal;
    do {
        cout << "==============================================\n";
        cout << "==========         DAIGO IA          =========\n";
        cout << "==============================================\n";
        cout << "\n";
        this_thread::sleep_for(chrono::seconds(2));
        cout << "Hola bienvenido usuario";
        cout<<  "\n";
        cout << "Mi nombre es  DAIGO IA";
        cout<<  "\n";
        cout << "¿Que te gustaria hacer el dia de hoy?";
        cout<<  "\n";

        cout << "1. Arreglos Unidimensionales (Vectores)\n";
        cout << "2. Arreglos Bidimensionales (Matrices)\n";
        cout << "3. Creditos e Informacion del Grupo\n";
        cout << "4. Salir\n";
        cout << "Digite alguna opcion: ";
        cin >> opcionPrincipal;

        switch (opcionPrincipal) {
            case 1:
                menuVectores();
                break;
            case 2:
                menuMatrices();
                break;
            case 3:
                cout << "\n===== CREDITOS =====\n";
                cout << "Trabajo final Algoritmia y programacion\n";
                cout << "Tomas Gabriel Alba Rodriguez 160005701\n";
                cout << "Traidora y algo 1600057\n";
                cout << "Sebastian Herrera Ortega 160005729 \n";
                cout << "Jose y algo 1600057\n";
                break;
            case 4:
                cout << "\n¡Nos veremos pronto!. Gracias por usar DAIGO IA!!\n";
                break;
            default:
                cout << "\nOpcion invalida. Vuelve a intentarlo.\n";
                break;
        }
    } while (opcionPrincipal != 4);

    return 0;
}

// CATEGORIA 1: VECTORES (1D)
void menuVectores() {
    int opcion1D = 0;

    do {
        cout << "\n============================================\n";
        cout << "======= CATEGORIA 1: VECTORES (1D) ===========\n";
        cout << "==============================================\n";
        cout << "1. Texto, Letras y Cadenas\n";
        cout << "2. Estadisticas, Promedios y Conteo de Datos\n";
        cout << "3. Operaciones Numericas y Propiedades Matematicas\n";
        cout << "4. Busqueda, Filtros y Ordenamiento\n";
        cout << "5. Sistemas de Gestion\n";
        cout << "6. Volver al Menu Principal\n";
        cout << "Digite alguna opcion porfavor: ";
        cin >> opcion1D;

        switch (opcion1D) {
            case 1: subMenu1D_Texto(); break;
            case 2: subMenu1D_Estadistica(); break;
            case 3: subMenu1D_Numeros(); break;
            case 4: subMenu1D_Busqueda(); break;
            case 5: subMenu1D_Simulacion(); break;
            case 6: cout << "\nVolviendo al Menu Principal...\n"; break;
            default: cout << "\nOpcion invalida.\n"; break;
        }
    } while (opcion1D != 6);
}
//Texto

void subMenu1D_Texto() {
    int ej = 0;
    do {
        cout << "\n==== SUBGRUPO 1.1: TEXTO Y CADENAS ====\n";
        cout << "1. Ejercicio 9  (Encriptar frase ASCII +2)\n";
        cout << "2. Ejercicio 10 (Contar vocales)\n";
        cout << "3. Ejercicio 11 (Frase al reves)\n";
        cout << "4. Ejercicio 22 (Contar palabras, vocales y consonantes)\n";
        cout << "5. Ejercicio 23 (Verificador de sufijo)\n";
        cout << "6. Ejercicio 29 (Primera posicion de un caracter)\n";
        cout << "7. Ejercicio 32 (Frecuencia de 1000 letras aleatorias)\n";
        cout << "8. Ejercicio 52 (Ordenar lista de nombres)\n";
        cout << "9. Ejercicio 53 (Convertir palabra a plural)\n";
        cout << "10. Ejercicio 62 (Calculadora de telegramas)\n";
        cout << "11. Ejercicio 67 (Arabigos a romanos)\n";
        cout << "12. Volver al menu de Vectores\n";
        cout << "Digite opcion: ";
        cin >> ej;

        switch (ej) {
            case 1:  {
    cin.ignore();
    string palabra;
    cout << "Programa que encripta una cadena de caracteres para sumarle dos al codigo ASCII y los imprime" << endl;
    cout << "Ingrese una cadena de caracteres: " << endl;
    getline(cin, palabra);
    string fraseEncriptada=palabra;
    for(int i = 0; i < palabra.length(); i++) {
        fraseEncriptada[i] = palabra[i] + 2;
        cout << "caracter " << i + 1 << " encriptado : " << fraseEncriptada[i] << " ";  
    } 
    cout << endl << "La frase encriptada es: ";
for(int i = 0; i < palabra.length(); i++) {
        cout << fraseEncriptada[i];
    } break;  }
            case 2:  /* Aqui programas Ejercicio 10 */ break;
            case 3: {   
                string palabra; 
    cout << "Programa para escribir una frase al reves" << endl;
    cout << "Ingrese una frase: "<<endl;
    getline(cin, palabra); 
    cout << "La frase al reves es: ";
    for(int i = palabra.length() - 1; i >= 0; i--) {
        cout << palabra[i];
    }  break; }
            case 4:  {
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
 break;  }
            case 5:  /* Aqui programas Ejercicio 23 */ break;
            case 6:  /* Aqui programas Ejercicio 29 */ break;
            case 7:  /* Aqui programas Ejercicio 32 */ break;
            case 8: {  int N;
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
    } break; }
            case 9:  /* Aqui programas Ejercicio 53 */ break;
            case 10: /* Aqui programas Ejercicio 62 */ break;
            case 11: /* Aqui programas Ejercicio 67 */ break;
            case 12: cout << "Volviendo a la opcion anterior...\n"; break;
            default: cout << "Opcion invalida.\n"; break;
        }
    } while (ej != 12);
}
// Subgrupo 1.2: Estadistica

void subMenu1D_Estadistica() {
    int ej = 0;
    do {
        cout << "\n--- SUBGRUPO 1.2: ESTADISTICAS Y PROMEDIOS ---\n";
        cout << "1. Ejercicio 15 (Histograma de notas 1 a 5)\n";
        cout << "2. Ejercicio 17 (Escalar lista reales 0 a 1)\n";
        cout << "3. Ejercicio 27 (Promedio de alturas, sobre/bajo media)\n";
        cout << "4. Ejercicio 28 (Primeros 10 suman mas que ultimos 10)\n";
        cout << "5. Ejercicio 30 (Media, varianza y desviacion estandar)\n";
        cout << "6. Ejercicio 55 (Mayor, menor y sus repeticiones)\n";
        cout << "7. Ejercicio 72 (Encuesta cafeteria con histograma)\n";
        cout << "8. Ejercicio 98 (Contar numeros terminados en 3)\n";
        cout << "9. Volver al menu de Vectores\n";
        cout << "Digite opcion: ";
        cin >> ej;

        switch (ej) {
            case 1: /* Aqui programas Ejercicio 15 */ break;
            case 2: /* Aqui programas Ejercicio 17 */ break;
            case 3:{  int N;
do {
cout << "Ingrese el numero de personas (entero positivo): " << endl;
cin >> N;
if (N<=0) {
    cout << "Error: Por favor, ingrese un numero positivo." << endl;
}    
}
while (N <= 0);
double altura[N];
double sumaaltura = 0;
for (int i = 0; i < N; i++) {
    cout << "Ingrese la altura de la persona " << i + 1 << ": "<< endl;
    cin >> altura[i];
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
cout << "Personas por debajo de la altura promedio: " << Imedia << endl; break; }
            case 4: /* Aqui programas Ejercicio 28 */ break;
            case 5: /* Aqui programas Ejercicio 30 */ break;
            case 6: /* Aqui programas Ejercicio 55 */ break;
            case 7: /* Aqui programas Ejercicio 72 */ break;
            case 8: /* Aqui programas Ejercicio 98 */ break;
            case 9: cout << "Volviendo a la opcion anterior...\n"; break;
            default: cout << "Opcion invalida\n"; break;
        }
    } while (ej != 9);
}

// ---------------------------------------------------------
// Subgrupo 1.3: Numeros y Operaciones
// ---------------------------------------------------------
void subMenu1D_Numeros() {
    int ej = 0;
    do {
        cout << "\n--- SUBGRUPO 1.3: OPERACIONES NUMERICAS ---\n";
        cout << "1. Ejercicio 2  (Separar digitos de un numero en vector)\n";
        cout << "2. Ejercicio 18 (Suma de dos numeros binarios)\n";
        cout << "3. Ejercicio 21 (Evaluar si vector es Partidario)\n";
        cout << "4. Ejercicio 39 (Serie del cuadrado de la diferencia)\n";
        cout << "5. Ejercicio 40 (Bits a decimal)\n";
        cout << "6. Ejercicio 61 (Decimal a binario)\n";
        cout << "7. Ejercicio 63 (Decimal a octal)\n";
        cout << "8. Ejercicio 64 (Formatear numero con puntos de miles)\n";
        cout << "9. Ejercicio 76 (Triangulo de Pascal en vector 1D)\n";
        cout << "10. Ejercicio 83 (Filtrar solo numeros pares)\n";
        cout << "11. Volver al menu de Vectores\n";
        cout << "Digite opcion: ";
        cin >> ej;

        switch (ej) {
            case 1: { unsigned int num;
cout<<"Ingrese un numero entero positivo"<<endl;
cin>>num;

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
} break; }
            case 2:  /* Aqui programas Ejercicio 18 */ break;
            case 3:  /* Aqui programas Ejercicio 21 */ break;
            case 4:  /* Aqui programas Ejercicio 39 */ break;
            case 5:  /* Aqui programas Ejercicio 40 */ break;
            case 6:  /* Aqui programas Ejercicio 61 */ break;
            case 7:  /* Aqui programas Ejercicio 63 */ break;
            case 8:  /* Aqui programas Ejercicio 64 */ break;
            case 9: {   int filas;
cout<<"Programa para dibujar el triangulo de Pascal"<<endl;
cout<<"Ingrese el numero de filas: ";
cin>>filas;
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
} break; }
            case 10: /* Aqui programas Ejercicio 83 */ break;
            case 11: cout << "Volviendo a la opcion anterior...\n"; break;
            default: cout << "Opcion invalida.\n"; break;
        }
    } while (ej != 11);
}
// Subgrupo 1.4: Busqueda, Filtros y Ordenamiento

void subMenu1D_Busqueda() {
    int ej = 0;
    do {
        cout << "\n==== SUBGRUPO 1.4: BUSQUEDA Y ORDENAMIENTO =====\n";
        cout << "1. Ejercicio 19 (Mezcla de dos vectores ordenados)\n";
        cout << "2. Ejercicio 20 (Buscar todas las posiciones de X)\n";
        cout << "3. Ejercicio 34 (Agrupar pares e impares ordenados)\n";
        cout << "4. Ejercicio 35 (Valor maximo en rango)\n";
        cout << "5. Ejercicio 36 (Indice del maximo en rango)\n";
        cout << "6. Ejercicio 37 (Ordenar de mayor a menor)\n";
        cout << "7. Ejercicio 54 y 85 (Busqueda binaria / dicotomica)\n";
        cout << "8. Ejercicio 65 (Insertar numero en indice elegido)\n";
        cout << "9. Ejercicio 70 y 71 (Ordenar y consultar contratos por fecha)\n";
        cout << "10. Ejercicio 75 (Filtrar numeros perfectos)\n";
        cout << "11. Ejercicio 82 (Filtrar numeros primos)\n";
        cout << "12. Ejercicio 94 (Filtrar numeros deficientes)\n";
        cout << "13. Volver al menu de Vectores\n";
        cout << "Digite opcion: ";
        cin >> ej;

        switch (ej) {
            case 1:  /* Aqui programas Ejercicio 19 */ break;
            case 2:  /* Aqui programas Ejercicio 20 */ break;
            case 3:  /* Aqui programas Ejercicio 34 */ break;
            case 4:  /* Aqui programas Ejercicio 35 */ break;
            case 5:  /* Aqui programas Ejercicio 36 */ break;
            case 6:  /* Aqui programas Ejercicio 37 */ break;
            case 7:  /* Aqui programas Ejercicio 54/85 */ break;
            case 8:  /* Aqui programas Ejercicio 65 */ break;
            case 9:  /* Aqui programas Ejercicio 70/71 */ break;
            case 10: /* Aqui programas Ejercicio 75 */ break;
            case 11: /* Aqui programas Ejercicio 82 */ break;
            case 12: /* Aqui programas Ejercicio 94 */ break;
            case 13: cout << "Volviendo a la opcion anterior...\n"; break;
            default: cout << "Opcion invalida.\n"; break;
        }
    } while (ej != 13);
}
// Subgrupo 1.5: Simulacion Real

void subMenu1D_Simulacion() {
    int ej = 0;
    do {
        cout << "\n==== SUBGRUPO 1.5: GESTION REAL ====\n";
        cout << "1. Ejercicio 1  (Cobro de parqueadero)\n";
        cout << "2. Ejercicio 3  (Letra oficial de DNI)\n";
        cout << "3. Ejercicio 5  (Consulta de paises por posicion)\n";
        cout << "4. Ejercicio 12 y 16 (Calificador de examen opcion multiple)\n";
        cout << "5. Ejercicio 41 y 42 (Rotacion de angulos 90, 180, 270)\n";
        cout << "6. Ejercicio 66 (Reservas fumadores en avion)\n";
        cout << "7. Ejercicio 69 (Coordenadas de poligono de N lados)\n";
        cout << "8. Ejercicio 73 (Tiempos competencia de natacion)\n";
        cout << "9. Ejercicio 79 (Control peso corderos frigorifico)\n";
        cout << "10. Ejercicio 80 (Multas de transito por cuadrante)\n";
        cout << "11. Ejercicio 81 (Simulador de Baloto)\n";
        cout << "12. Ejercicio 88 (Marcas de atletas ordenadas)\n";
        cout << "13. Volver al menu de Vectores\n";
        cout << "Digite opcion: ";
        cin >> ej;

        switch (ej) {
            case 1:  {
                int capacidadCoches [500];
    int opcion, posicion, horaLLegada, horaSalida, totalHoras, totalPagar;

    for (int i = 0; i < 500; i++) {
        capacidadCoches[i] = -1;
    }

    this_thread::sleep_for(chrono::seconds(4));
    cout << "Bienvenido al sistema del Parqueadero" << endl;

    do {


    cout << "\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout<<"Seleccione una opción"<< endl;
    cout << "\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout<<"1) Ingresar coche"<<endl;
    cout << "\n";
    cout<<"2) Retirar coche"<<endl;
    cout << "\n";
    cout<<"3) Atrás"<<endl;
    cout << "\n";
     cin >> opcion;

 if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
    cout << "\n";


        switch (opcion)
    {
        case 1:

        cout<<"////INGRESO DE VEHICULO////"<<endl;
        cout<<"\n";
         this_thread::sleep_for(chrono::seconds(2));
        cout << "Ingrese la posición del coche: "<<endl;
        cout << "\n";
        cout << "del 0 al 499" << endl;
        cout << "\n";
        cin >> posicion;

 if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
        cout <<"\n";
           this_thread::sleep_for(chrono::seconds(1));
            if (posicion >= 0 && posicion <= 499) {
                if (capacidadCoches[posicion] == -1) {

                cout << "Ingrese la hora de llegada: "<<endl;
                cout << "\n";
                cout << "0 hasta 23 hora"<<endl;
                cout<<"\n";
                cin >> horaLLegada;
                if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
                cout << "\n";
               this_thread::sleep_for(chrono::seconds(1));
                if (horaLLegada >=0 && horaLLegada <= 23){

                capacidadCoches[posicion] = horaLLegada;

                   this_thread::sleep_for(chrono::seconds(3));
                cout<<"Vehiculo registrado exitosamente"<<endl;
                cout<<"\n";



                }else {
                    this_thread::sleep_for(chrono::seconds(3));
                cout<<"La hora digitada no esta dentro del limite"<<endl;
                cout<<"\n";
                }


            } else {
                this_thread::sleep_for(chrono::seconds(3));
                cout<<"\n";
                cout << "La posición esta ocupada" << endl;
                cout << "\n";
            }
        }   else {
            this_thread::sleep_for(chrono::seconds(3));
            cout << "la posición es inválida" << endl;
            cout << "\n";
        }
        break;

        case 2:
             cout<<"////RETIRO DE VEHICULO////"<<endl;
        cout<<"\n";
        this_thread::sleep_for(chrono::seconds(2));
        cout << "Ingrese la posición del coche: "<<endl;
        cout << "\n";
        cout << "del 0 al 499" << endl;
        cout << "\n";
        cin >> posicion;
        if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
        cout <<"\n";
            if (posicion >= 0 && posicion <= 499) {
                if (capacidadCoches[posicion] != -1) {
                this_thread::sleep_for(chrono::seconds(1));
                cout << "Ingrese la hora de salida: "<<endl;
                cout << "\n";
                cout << "0 hasta 23 hora"<<endl;
                cout<<"\n";
                cin >> horaSalida;
                if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
                cout << "\n";

                if (horaSalida >=0 && horaSalida <= 23){

                horaLLegada=capacidadCoches[posicion];
                this_thread::sleep_for(chrono::seconds(1));
                cout<<"Vehiculo retirado exitosamente"<<endl;
                cout<<"\n";

                    if (horaSalida >= horaLLegada){
                        totalHoras = horaSalida - horaLLegada;
                    }else {
                        totalHoras = (24 - horaLLegada) + horaSalida;
                    }

                    totalPagar = totalHoras * 3000;
                    this_thread::sleep_for(chrono::seconds(3));
                    cout<<"Las horas estacionadas del vehículo son: "<<totalHoras<<endl;
                    cout<<"\n";
                    cout<<"Y su monto a pagar es de: "<<totalPagar<<endl;

                    capacidadCoches[posicion] = -1;


              }else {
                this_thread::sleep_for(chrono::seconds(3));
                cout<<"La hora digitada no esta dentro del limite"<<endl;
                cout<<"\n";
                }


            } else {
                this_thread::sleep_for(chrono::seconds(3));
                cout<<"\n";
                cout << "La posición no se encuentra ocupada" << endl;
                cout << "\n";
            }
        }   else {
            this_thread::sleep_for(chrono::seconds(3));
            cout << "la posición es inválida" << endl;
            cout << "\n";


        }
        break;

        case 3:

            cout << "Usted esta saliendo del sistema del parqueadero" << endl;
            cout<<"\n";
            this_thread::sleep_for(chrono::seconds(2));
            break;

        default:
        cout<<"\n";
        cout << "La opción digitada es inválida" << endl;
        cout<<"\n";
        break;
    }
     }while(opcion != 3);

     cout<<"Usted ha salido del sistema del parqueadero";
    cout<<"\n";
     break;}
            case 2:  /* Aqui programas Ejercicio 3 */ break;
            case 3:  /* Aqui programas Ejercicio 5 */ break;
            case 4: {  int nP;
cout << "Ingrese el numero de preguntas del examen: ";
cin >> nP;
char calPreguntas[nP];
for(int i=0; i<nP; i++){
cout << "Ingrese su respuesta de la pregunta " << i+1 << ": (A/B/C/D/E)" << endl;
cin >> calPreguntas[i];
}
char preguntaCorrecta[nP];
for(int i=0; i<nP; i++){
cout << "La respuesta correcta de la pregunta " << i+1 << " es: (A/B/C/D/E)" << endl;
cin >> preguntaCorrecta[i];
}
int aciertos=0;
for(int i=0; i<nP; i++){
if(calPreguntas[i]==preguntaCorrecta[i]){
aciertos++;
}
}
cout << "El numero de aciertos es: " << aciertos << endl; break; }
            case 5:  {

    int posiciones;
    cout << "Programa que almacena nombres de paises en diferentes posiciones y permite ver el dato guardado en la posicion seleccionada" << endl;
    cout << "Ingrese el numero de posiciones que desea ingresar: ";
    cin >> posiciones;
    string paises[posiciones];
    for(int i = 0; i < posiciones; i++) {
        cout << "Ingrese el nombre del pais en la posicion " << i + 1 << ": ";
        cin >> paises[i];
    }
int j;
do {
    cout << "Ingrese la posicion del pais que desea ver "<< endl;
    cin >> j;
    if(j > 0 && j <= posiciones) {
        cout << "El pais en la posicion " << j << " es: " << paises[j-1] << endl;
    } else {
        cout << "Posicion invalida" << endl;
    }
    char opcion;
    cout << "Desea ver otra posicion? (s/n): ";
    cin >> opcion;
    if(opcion == 'n' || opcion == 'N') {
        break;
    }
} while(true); break; }
            case 6:  /* Aqui programas Ejercicio 66 */ break;
            case 7:  /* Aqui programas Ejercicio 69 */ break;
            case 8:  /* Aqui programas Ejercicio 73 */ break;
            case 9:  /* Aqui programas Ejercicio 79 */ break;
            case 10: /* Aqui programas Ejercicio 80 */ break;
            case 11: /* Aqui programas Ejercicio 81 */ break;
            case 12: /* Aqui programas Ejercicio 88 */ break;
            case 13: cout << "Volviendo a la opcion anterior...\n"; break;
            default: cout << "Opcion invalida.\n"; break;
        }
    } while (ej != 13);
}

// =========================================================
// CATEGORIA 2: MATRICES (2D)
// =========================================================
void menuMatrices() {
    int opcion2D = 0;

    do {
        cout << "\n============================================\n";
        cout << "========= CATEGORIA 2: MATRICES (2D) =========\n";
        cout << "==============================================\n";
        cout << "1. Operaciones y Algebra de Matrices\n";
        cout << "2. Patrones, Formas y Estructuras Especiales\n";
        cout << "3. Recorridos, Filas, Columnas y Coordenadas\n";
        cout << "4. Modelos de Negocios y Problemas Reales\n";
        cout << "5. Volver al Menu Principal\n";
        cout << "Digite alguna opcion: ";
        cin >> opcion2D;

        switch (opcion2D) {
            case 1: subMenu2D_Algebra(); break;
            case 2: subMenu2D_Patrones(); break;
            case 3: subMenu2D_Recorridos(); break;
            case 4: subMenu2D_Negocios(); break;
            case 5: cout << "\nVolviendo al Menu Principal...\n"; break;
            default: cout << "\nOpcion invalida.\n"; break;
        }
    } while (opcion2D != 5);
}
// Subgrupo 2.1: Algebra

void subMenu2D_Algebra() {
    int ej = 0;
    do {
        cout << "\n==== SUBGRUPO 2.1: OPERACIONES MATRICES =====\n";
        cout << "1. Ejercicio 6  (Dividir matriz 3x4 entre celda [1][1])\n";
        cout << "2. Ejercicio 7  (Matriz transpuesta 3x4 a 4x3)\n";
        cout << "3. Ejercicio 8  (Suma de dos matrices)\n";
        cout << "4. Ejercicio 24 (Suma, resta, transpuesta y traza)\n";
        cout << "5. Ejercicio 91 (Transponer matriz 5x9 a 9x5)\n";
        cout << "6. Volver al menu de Matrices\n";
        cout << "Digite opcion: ";
        cin >> ej;


        switch (ej) {
            case 1: { int M[3][4];
    cout << "Programa que divide cada valor de la matriz entre el valor de la posicion 2,2 de la matriz" << endl;

    cout << "Matriz original:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            M[i][j] = rand() % 2001 - 1000;
            cout << M[i][j] << endl;
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
            cout << resultado << endl;
        }
        cout << endl;
    }break; }
            case 2: /* Aqui programas Ejercicio 7 */ break;
            case 3: /* Aqui programas Ejercicio 8 */ break;
            case 4: /* Aqui programas Ejercicio 24 */ break;
            case 5: /* Aqui programas Ejercicio 91 */ break;
            case 6: cout << "Volviendo a la opcion anterior...\n"; break;
            default: cout << "Opcion invalida.\n"; break;
        }
    } while (ej != 6);
}
// Subgrupo 2.2: Patrones

void subMenu2D_Patrones() {
    int ej = 0;
    do {
        cout << "\n==== SUBGRUPO 2.2: PATRONES Y FORMAS ====\n";
        cout << "1. Ejercicio 4  (Cuadrado Magico)\n";
        cout << "2. Ejercicio 56 (Comprobar matriz Simetrica)\n";
        cout << "3. Ejercicio 57 (Comprobar matriz Antisimetrica)\n";
        cout << "4. Ejercicio 58 (Comprobar matriz Diagonal)\n";
        cout << "5. Ejercicio 59 (Comprobar matriz Triangular Inferior)\n";
        cout << "6. Ejercicio 60 (Comprobar matriz Triangular Superior)\n";
        cout << "7. Ejercicio 89 (Generar matriz Marco 8x6)\n";
        cout << "8. Ejercicio 90 (Generar matriz Identidad 7x7)\n";
        cout << "9. Volver al menu de Matrices\n";
        cout << "Digite opcion: ";
        cin >> ej;

        switch (ej) {
            case 1: /* Aqui programas Ejercicio 4 */ break;
            case 2: /* Aqui programas Ejercicio 56 */ break;
            case 3: /* Aqui programas Ejercicio 57 */ break;
            case 4: /* Aqui programas Ejercicio 58 */ break;
            case 5: /* Aqui programas Ejercicio 59 */ break;
            case 6: /* Aqui programas Ejercicio 60 */ break;
            case 7: /* Aqui programas Ejercicio 89 */ break;
            case 8:{ 
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
break; }
            case 9: cout << "Volviendo a la opcion anterior...\n"; break;
            default: cout << "Opcion invalida.\n"; break;
        }
    } while (ej != 9);
}
// Subgrupo 2.3: Recorridos

void subMenu2D_Recorridos() {
    int ej = 0;
    do {
        cout << "\n==== SUBGRUPO 2.3: CORDENADAS ====\n";
        cout << "1. Ejercicio 25 (Suma de cada fila a un vector)\n";
        cout << "2. Ejercicio 26 (Coordenadas [f,c] del mayor y menor)\n";
        cout << "3. Ejercicio 38 (Reporte matriz 3x4, promedio y pares)\n";
        cout << "4. Ejercicio 78 (Buscar Punto de Silla)\n";
        cout << "5. Ejercicio 92 (Mayor venta registrada en 5x5)\n";
        cout << "6. Ejercicio 96 (Moda y repeticiones en matriz 5x5)\n";
        cout << "7. Ejercicio 97 (Coordenada del mayor numero primo)\n";
        cout << "8. Ejercicio 99 (Columna de la primera aparicion del mayor)\n";
        cout << "9. Volver al menu de Matrices\n";
        cout << "Digite opcion: ";
        cin >> ej;

        switch (ej) {
            case 1: /* Aqui programas Ejercicio 25 */ break;
            case 2: /* Aqui programas Ejercicio 26 */ break;
            case 3: /* Aqui programas Ejercicio 38 */ break;
            case 4: /* Aqui programas Ejercicio 78 */ break;
            case 5: /* Aqui programas Ejercicio 92 */ break;
            case 6: /* Aqui programas Ejercicio 96 */ break;
            case 7: /* Aqui programas Ejercicio 97 */ break;
            case 8:{
                 int matriz[4][4];
    int mayor = 0;
    int columnaMayor = 0;

    cout << "Programa que imprime el numero de la columna en donde se digite el numero mas grande de una matriz 4x4" << endl;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Digite el numero de la posicion de la matriz [" << i + 1 << "][" << j + 1 << "]: "<<endl;
            cin >> matriz[i][j];

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

                break; }
            case 9: cout << "Volviendo a la opcion anterior...\n"; break;
            default: cout << "Opcion invalida.\n"; break;
        }
    } while (ej != 9);
}
// Subgrupo 2.4: Negocios

void subMenu2D_Negocios() {
    int ej = 0;
    do {
        cout << "\n==== SUBGRUPO 2.4: MODELOS DE NEGOCIOS ====\n";
        cout << "1. Ejercicio 13 (Ranking de aspectos de restaurante)\n";
        cout << "2. Ejercicio 14 (Produccion de leche hato 7xN)\n";
        cout << "3. Ejercicio 31 (Asientos de avion 25x4)\n";
        cout << "4. Ejercicio 33 (Ingresos 18 vendedores x 10 productos)\n";
        cout << "5. Ejercicio 43 (Costos fabrica de autos)\n";
        cout << "6. Ejercicio 44 (Nutrientes Dieta Cambridge)\n";
        cout << "7. Ejercicio 45 y 46 (Migracion ciudad vs suburbios)\n";
        cout << "8. Ejercicio 47, 48 y 49 (Produccion lubricantes)\n";
        cout << "9. Ejercicio 50 y 51 (Precios cocteles por baldes)\n";
        cout << "10. Ejercicio 68 (Ventas 16 representantes x 5 zonas)\n";
        cout << "11. Ejercicio 74 (Notas 30 alumnos x 6 asignaturas)\n";
        cout << "12. Ejercicio 93 (Kilometros N choferes x 6 dias)\n";
        cout << "13. Volver al menu de Matrices\n";
        cout << "Digite opcion: ";
        cin >> ej;

        switch (ej) {
            case 1:{  cout <<"\n";
            const int client = 5, aspect = 4;
            float A[client][aspect];
            float prom[4], temProm=0;
            string nombres[4] = {"Atencion", "Comida", "Precio", "Ambiente"};

    cout << "-Aspectos a evaluar (Calificacion de 1 a 10):\n";
    cout << "  1. Atencion de parte de los empleados\n";
    cout << "  2. Calidad de la comida\n";
    cout << "  3. Justicia del precio\n";
    cout << "  4. Ambiente (musica, decoracion, comodidad)\n";


            for (int c = 0; c < client; c++){
               for (int a = 0; a < aspect; a++){

                do {
                cout <<"\n";
                cout << "Digite cliente ["<< (c + 1) <<"] su puntuacion del 1 al 10. Aspecto a evaluar ["<< (a + 1) <<"]:";
                    cin >>A[c][a];
                    if ((A[c][a] < 1) || (A[c][a] > 10)) {
                cout << "Error: La puntuacion debe estar entre 1 y 10. Intentelo de nuevo.\n";
            }

        } while (A[c][a] < 1 || A[c][a] > 10);
                }
                cout <<"\n";
                }
            for (int a = 0; a < aspect; a++) {
            float sum = 0;

               for (int c = 0; c < client; c++) {
                  sum += A[c][a];
                }

        prom[a] = sum / client;
                   }
                for (int i = 0; i < aspect - 1; i++) {
                    for (int j = 0; j < aspect - 1 - i; j++) {
                            if (prom[j] < prom[j + 1]) {
                                temProm = prom[j];

                                prom[j] = prom[j + 1];
                                prom[j + 1] = temProm;

                                string tempNombre = nombres[j];
                                nombres[j] = nombres[j + 1];
                                nombres[j + 1] = tempNombre;
                        }
                    }
                }
            for (int a = 0; a < aspect; a++) {
            cout << (a + 1) << ". " << nombres[a]<< "."<< " Promedio: " << prom[a] << "\n";
    }

            break;}

            case 2:  /* Aqui programas Ejercicio 14 */ break;
            case 3:  /* Aqui programas Ejercicio 31 */ break;
            case 4:  /* Aqui programas Ejercicio 33 */ break;
            case 5:  /* Aqui programas Ejercicio 43 */ break;
            case 6:  /* Aqui programas Ejercicio 44 */ break;
            case 7:  /* Aqui programas Ejercicio 45,46 */ break;
            case 8:  /* Aqui programas Ejercicio 47,48,49 */ break;
            case 9:  /* Aqui programas Ejercicio 50,51 */ break;
            case 10: /* Aqui programas Ejercicio 68 */ break;
            case 11: /* Aqui programas Ejercicio 74 */ break;
            case 12: /* Aqui programas Ejercicio 93 */ break;
            case 13: cout << "Volviendo a la opcion anterior...\n"; break;
            default: cout << "Opcion invalida.\n"; break;
        }
    } while (ej != 13);
}
