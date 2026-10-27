
#include <iostream>

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
        cout << "\n============================================\n";
        cout << "=========        CHAT BOT          ==========\n";
        cout << "=========     CHAT YIPITI :V       ==========\n";
        cout << "============================================\n";
        cout << "Buenas senor usuario, me llamo chatyipiti:V\n";
        cout << "vengo a ofrecer mis servicios con el problema que tenga.\n\n";
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
                cout << "Sebastian y algo 1600057 \n";
                cout << "Jose y algo 1600057\n";
                break;
            case 4:
                cout << "\nNos volveremos a ver en algun luga :). Gracias por usar ChatYipiti :V\n";
                break;
            default:
                cout << "\nOpcion invalida. Intentelo de nuevo.\n";
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
            case 1:  {   break;}
            case 2:  /* Aqui programas Ejercicio 10 */ break;
            case 3:  /* Aqui programas Ejercicio 11 */ break;
            case 4:  /* Aqui programas Ejercicio 22 */ break;
            case 5:  /* Aqui programas Ejercicio 23 */ break;
            case 6:  /* Aqui programas Ejercicio 29 */ break;
            case 7:  /* Aqui programas Ejercicio 32 */ break;
            case 8:  /* Aqui programas Ejercicio 52 */ break;
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
            case 3: /* Aqui programas Ejercicio 27 */ break;
            case 4: /* Aqui programas Ejercicio 28 */ break;
            case 5: /* Aqui programas Ejercicio 30 */ break;
            case 6: {
                cout<< "\n";
                int num[10], menor=0, mayor=0, repet1=0, repet2=0 ;

                    for (int i= 0; i< 10; i++ ) {
                      cout << "Digite un numero para este vector" <<" "<< i << " : " <<"\n";
                        cin >> num [i];
                    }
                    menor= mayor = num [0];
                    for (int i=1 ; i< 10; i++){
                      if (num[i]<menor ){
                        menor = num[i];
                      }
                      if (num[i]>mayor ){
                        mayor = num[i];
                      }
                    }
                    for (int i = 0; i < 10; i++) {
                      if (num[i] == mayor) {
                      repet1++;
                      }
                      if (num[i] == menor){
                        repet2++;
                      }
                    }
                    cout << "El numero mayor es : "<<" "<< mayor <<"\n";
                    cout << "El numero menor es : "<<" "<< menor <<"\n";
                    cout << "Las veces que se repitio "<<mayor << ": "<<" "<< repet1 <<"\n";
                    cout << "Las veces que se repitio "<<menor << ": "<<" "<< repet2 <<"\n";

                 break;
                 }
            case 7: /* Aqui programas Ejercicio 72 */ break;
            case 8: {
                cout<< "\n";
        int  vec[10], sum3 = 0;

        for (int i= 0; i< 10; i++) {

           cout << "Digite un numero para el vector" <<" "<< i << ":"<<"\n";
           cin >> vec[i];
        }
        for (int i=0; i< 10; i++) {
          if (vec[i] % 10 ==3 ) {
              sum3++;
            }
          }
          cout<< "\n";
          cout << "Cantidad de numeros terminados en tres: "<< sum3 << "\n";

            break;
            }

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
            case 1:  /* Aqui programas Ejercicio 2 */ break;
            case 2:  /* Aqui programas Ejercicio 18 */ break;
            case 3:  /* Aqui programas Ejercicio 21 */ break;
            case 4:  /* Aqui programas Ejercicio 39 */ break;
            case 5:  /* Aqui programas Ejercicio 40 */ break;
            case 6:  /* Aqui programas Ejercicio 61 */ break;
            case 7:  /* Aqui programas Ejercicio 63 */ break;
            case 8:  /* Aqui programas Ejercicio 64 */ break;
            case 9:  /* Aqui programas Ejercicio 76 */ break;
            case 10:{
                cout <<"\n";

                int manz[6];






                break;}
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
            case 1:  /* Aqui programas Ejercicio 1 */ break;
            case 2:  /* Aqui programas Ejercicio 3 */ break;
            case 3:  /* Aqui programas Ejercicio 5 */ break;
            case 4:  /* Aqui programas Ejercicio 12/16 */ break;
            case 5:  /* Aqui programas Ejercicio 41/42 */ break;
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
            case 1: /* Aqui programas Ejercicio 6 */ break;
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
            case 8: /* Aqui programas Ejercicio 90 */ break;
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
            case 8: /* Aqui programas Ejercicio 99 */ break;
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
            case 1:  /* Aqui programas Ejercicio 13 */ break;
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
