#include <iostream>
#include <limits>
#include <thread>
#include <chrono>
#include <string>
#include "SubMenuGestion1_5.h"

using namespace std;


void ej01_CobroParqueadero(){

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
    cout<<"Seleccione una opcion"<< endl;
    cout << "\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout<<"1) Ingresar coche"<<endl;
    cout << "\n";
    cout<<"2) Retirar coche"<<endl;
    cout << "\n";
    cout<<"3) Atras"<<endl;
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

        cout << "////INGRESO DE VEHICULO////" << endl;
        cout << "\n";

        this_thread::sleep_for(chrono::seconds(2));

        cout << "Ingrese la posicion del coche: " << endl;
        cout << "\n";
        cout << "del 0 al 499" << endl;
        cout << "\n";

        cin >> posicion;

        while (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\n";
            cout << "Ingrese la posicion del coche: " << endl;
            cout << "\n";
            cout << "del 0 al 499" << endl;
            cout << "\n";

            cin >> posicion;
        }

        cout << "\n";
        this_thread::sleep_for(chrono::seconds(1));

        if (posicion >= 0 && posicion <= 499) {

            if (capacidadCoches[posicion] == -1) {

                cout << "Ingrese la hora de llegada: " << endl;
                cout << "\n";
                cout << "0 hasta 23 hora" << endl;
                cout << "\n";

                cin >> horaLLegada;

                while (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n";
                cout << "Ingrese la hora de llegada: " << endl;
                cout << "\n";
                cout << "0 hasta 23 hora" << endl;
                cout << "\n";

                cin >> horaLLegada;
                }

                cout << "\n";
                this_thread::sleep_for(chrono::seconds(1));

                if (horaLLegada >= 0 && horaLLegada <= 23) {

                    capacidadCoches[posicion] = horaLLegada;

                    this_thread::sleep_for(chrono::seconds(3));

                    cout << "Vehiculo registrado exitosamente" << endl;
                    cout << "\n";

                } else {

                    this_thread::sleep_for(chrono::seconds(3));

                    cout << "La hora digitada no esta dentro del limite" << endl;
                    cout << "\n";
                }

            } else {

                this_thread::sleep_for(chrono::seconds(3));

                cout << "\n";
                cout << "La posicion esta ocupada" << endl;
                cout << "\n";
            }

        } else {

            this_thread::sleep_for(chrono::seconds(3));

            cout << "la posición es invalida" << endl;
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

          while (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "\n";
            cout << "Ingrese la posicion del coche: " << endl;
            cout << "\n";
            cout << "del 0 al 499" << endl;
            cout << "\n";

            cin >> posicion;
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

                while (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n";
                cout << "Ingrese la hora de llegada: " << endl;
                cout << "\n";
                cout << "0 hasta 23 hora" << endl;
                cout << "\n";

                cin >> horaLLegada;
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
                cout << "La posicion no se encuentra ocupada" << endl;
                cout << "\n";
            }
        }   else {
            this_thread::sleep_for(chrono::seconds(3));
            cout << "la posicion es inválida" << endl;
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
        cout << "La opcion digitada es invalida" << endl;
        cout<<"\n";
        break;
    }
     }while(opcion != 3);

     cout<<"Usted ha salido del sistema del parqueadero";
    cout<<"\n";

}



void ej03_LetraOficialDNI(){

    /* Aqui programas Ejercicio 3 */

}



void ej05_ConsultaPaisesPosicion(){

    int posiciones;
    cout << "Programa que almacena nombres de paises en diferentes posiciones y permite ver el dato guardado en la posicion seleccionada" << endl;
    do {
    cout << "Ingrese el numero de posiciones que desea ingresar: ";
    cin >> posiciones;
    if (cin.fail())
 {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            posiciones = 0;
        }
    }
    while(posiciones <= 0);
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
} while(true);

}



void ej12_16_CalificadorExamen(){

    int nP;
    do {
        cout << "Ingrese el numero de preguntas del examen: ";
        cin >> nP;
        if (cin.fail())
 {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            nP = 0;
        }
    } while (nP <= 0);

    string calPreguntas[nP];
    for(int i = 0; i < nP; i++){
         do {
                cout << "Ingrese su respuesta de la pregunta " << i+1 << ": (A/B/C/D/E)" << endl;
                cin >> calPreguntas[i];
              }
     while (calPreguntas[i] != "A" && calPreguntas[i] != "B" && calPreguntas[i] != "C" && calPreguntas[i] != "D" && calPreguntas[i] != "E");
    }

    string preguntaCorrecta[nP];
    for(int i = 0; i < nP; i++){
        do {
            cout << "La respuesta correcta de la pregunta " << i+1 << " es: (A/B/C/D/E)" << endl;
            cin >> preguntaCorrecta[i];
        } while (preguntaCorrecta[i] != "A" && preguntaCorrecta[i] != "B" && preguntaCorrecta[i] != "C" && preguntaCorrecta[i] != "D" && preguntaCorrecta[i] != "E");
    }

    int aciertos = 0;
    for(int i = 0; i < nP; i++){
        if(calPreguntas[i] == preguntaCorrecta[i]){
            aciertos++;
        }
    }

    cout << "El numero de aciertos es: " << aciertos << endl;

}



void ej41_42_RotacionAngulos(){

    /* Aqui programas Ejercicio 41 y 42 */

}



void ej66_ReservasAvion(){

    /* Aqui programas Ejercicio 66 */

}



void ej69_CoordenadasPoligono(){

    /* Aqui programas Ejercicio 69 */

}



void ej73_TiemposNatacion(){

    /* Aqui programas Ejercicio 73 */

}



void ej79_ControlPesoCorderos(){

    /* Aqui programas Ejercicio 79 */

}



void ej80_MultasTransitoCuadrante(){

    /* Aqui programas Ejercicio 80 */

}



void ej81_SimuladorBaloto(){

    /* Aqui programas Ejercicio 81 */

}



void ej88_MarcasAtletas(){

    /* Aqui programas Ejercicio 88 */

}
