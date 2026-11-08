#include <iostream>
#include <limits>
#include "SubMenuNegocios2_4.h"

using namespace std;


void ej13_RankingRestaurante(){

    cout <<"\n";
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
                cout << "\n";
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

}



void ej14_ProduccionLecheHato(){

    cout<<"algoritmo que guarda en una matriz de dimensi0n 7xN la produccion de leche diaria (en litros), el total de leche en 7 dias de cada vaca y cual vaca produce mas leche en una semana"<<endl;
int  column;
cout<<endl;
cout<<"Ingrese la cantidad de vacas "<<endl;
cin>>column;
cout<<"la primera llave indica el dia y la segunda la vaca"<<endl;
cout<<endl;
int matriz[7][column];
for (int i=0; i<7; i++){
for(int j=0; j<column; j++){
cout<<"ingrese la cantida de leche producida cada dia ["<< i+1 <<"] ["<<j+1<<"]"<<endl;
cin>>matriz[i][j];
cout<<endl;}}
cout<<" matriz: "<<endl;
for (int i=0; i<7; i++ ){
for(int j=0; j<column; j++){
cout<<matriz[i][j]<<" ";}
cout<<endl;}
int sumaColumnas[column];

for (int j = 0; j < column; j++){
int sumaColumna = 0;
for (int i = 0; i < 7; i++)
    {sumaColumna += matriz[i][j];}
sumaColumnas[j]=sumaColumna;
cout << "el total de leche producida cada semana por la vaca " << j+1 << " es: " << sumaColumna << endl;
cout<<endl;
}

int Mayor=sumaColumnas[0];
int vacaMayor=0;
for (int j=1;j<column;j++)
    {
if(sumaColumnas[j]>Mayor)
{
Mayor=sumaColumnas[j];
vacaMayor=j;

}
}
cout<<"la vaca que mas produce leche es la vaca: "<<vacaMayor+1<<endl;

}



void ej31_AsientosAvion25x4(){

    /* Aqui programas Ejercicio 31 */

}



void ej33_IngresosVendedoresProductos(){

    /* Aqui programas Ejercicio 33 */

}



void ej43_CostosFabricaAutos(){

    /* Aqui programas Ejercicio 43 */

}



void ej44_NutrientesDietaCambridge(){

    /* Aqui programas Ejercicio 44 */

}



void ej45_46_MigracionCiudadSuburbios(){

    /* Aqui programas Ejercicio 45,46 */

}



void ej47_48_49_ProduccionLubricantes(){

    /* Aqui programas Ejercicio 47,48,49 */

}



void ej50_51_PreciosCoctelesBaldes(){

    /* Aqui programas Ejercicio 50,51 */

}



void ej68_VentasRepresentantesZonas(){

    /* Aqui programas Ejercicio 68 */

}



void ej74_NotasAlumnosAsignaturas(){

    /* Aqui programas Ejercicio 74 */

}



void ej93_KilometrosChoferesDias(){

    /* Aqui programas Ejercicio 93 */

}
