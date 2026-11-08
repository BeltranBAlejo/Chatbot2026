#include <iostream>
#include <thread>
#include <chrono>
#include <limits>
#include <windows.h>
#include <string>
#include <cstdlib> //para numeros aleatorios ran sran
#include <ctime>
#include <cmath>



#include "SubMenuTexto1_1.h"
#include "SubMenuEstadistica1_2.h"
#include "SubMenuOperaciones1_3.h"
#include "SubMenuOrganizar1_4.h"
#include "SubMenuGestion1_5.h"
#include "SubMenuAlgebra2_1.h"
#include "SubMenuPatrones2_2.h"
#include "SubMenuRecorridos2_3.h"
#include "SubMenuNegocios2_4.h"

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
    system("color 01");
    int opcionPrincipal;
    do {
        cout << "==============================================\n";
        cout << "==========         DAIGO IA          =========\n";
        cout << "==============================================\n";
        cout << "\n";
        this_thread::sleep_for(chrono::milliseconds(500));
        cout << "Hola bienvenido querido usuario o usuaria :D";
        cout<<  "\n";
        cout << "Mi nombre es  DAIGO IA B)";
        cout<<  "\n";
        cout << "Que te gustaria que te colaborara el dia de hoy?";
        cout<<  "\n";

        cout << "1. Arreglos Unidimensionales (Vectores)\n";
        cout << "2. Arreglos Bidimensionales (Matrices)\n";
        cout << "3. Creditos e Informacion del Grupo\n";
        cout << "4. Salir\n";
        cout << "Digite alguna opcion: ";
        cout << "\n";
        cin >> opcionPrincipal;

        if (cin.fail()) {
            cin.clear(); //Limpia error
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Borra el texto repetido
            opcionPrincipal = 0; //Se le coloca en modo default
        }

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
                cout << "Diego Alejandro Beltran Barreto 160005707\n";
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
        cout << "\n";
        cin >> opcion1D;

            if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            opcion1D = 0;
        }

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





//Subgrupo 1.1: Texto

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
        cout << "\n";
        cin >> ej;

            if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            ej = 0;
        }
        switch (ej) {


        case 1:   ej09_EncriptarAscii(); break;
        case 2:  ej10_ContarVocalesFrase(); break;
        case 3: ej11_FraseAlReves(); break;
        case 4:  ej22_ContarVocalesConsonantes();  break;
        case 5:  ej23_Sufijo2Palabras();  break;
        case 6:  ej29_PrimeraOcurrencia();  break;
        case 7:  ej32_Frecuencia1000Letras();  break;
        case 8: ej52_OrdenarAlfabetica();  break;
        case 9:  ej53_PalabrasPlural(); break;
        case 10: ej62_CalculadoraTelegramas(); break;
        case 11: ej67_NumerosArabigosRoman(); break;
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
        cout << "\n";
        cin >> ej;

            if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            ej = 0;
}

        switch (ej) {

        case 1:   ej15_PromedioYMayores();    break;
        case 2: ej17_ConteoPositivosNegativo();   break;
        case 3:  ej27_DesviacionEstandar();   break;
        case 4:  ej28_MedianaVector();   break;
        case 5: ej30_ModaVector();   break;
        case 6: ej55_PorcentajeParesImpares(); break;
        case 7: ej72_PromedioPonderado(); break;
        case 8: ej98_EstadisticasCalificacion();  break;
        case 9: cout << "Volviendo a la opcion anterior...\n"; break;


        default: cout << "Opcion invalida\n"; break;

        }
    } while (ej != 9);
}



// Subgrupo 1.3: Numeros y Operaciones
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
        cout << "\n";
        cin >> ej;

            if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            ej = 0;
}

        switch (ej) {
            case 1:  ej02_SepararDigitos();  break;
            case 2:  ej18_SumaBinarios();  break;
            case 3:  ej21_VectorPartidario();  break;
            case 4: ej39_CuadradoDiferencia(); break;
            case 5:  ej40_BitsADecimal(); break;
            case 6:  ej61_DecimalABinario();  break;
            case 7:  ej63_DecimalAOctal();  break;
            case 8:  ej64_FormatearPuntosMiles();  break;
            case 9:  ej76_TrianguloPascal();  break;
            case 10: ej83_FiltrarPares(); break;
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
        cout << "\n";
        cin >> ej;

            if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            ej = 0;
}

        switch (ej) {


            case 1: ej19_MezclarVectoresOrdenados();  break;
            case 2:  ej20_BuscarPosicionesX();   break;
            case 3:  ej34_AgruparParesImparesOrdenados();  break;
            case 4:   ej35_ValorMaximoEnRango();  break;
            case 5:   ej36_IndiceMaximoEnRango();  break;
            case 6:   ej37_OrdenarMayorAMenor();  break;
            case 7:   ej54_85_BusquedaBinaria();  break;
            case 8:  ej65_InsertarEnIndice();  break;
            case 9:  ej70_71_ContratosPorFecha(); break;
            case 10: ej75_FiltrarNumerosPerfectos();  break;
            case 11: ej82_FiltrarNumerosPrimos();  break;
            case 12: ej94_FiltrarNumerosDeficientes(); break;
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
        cout << "\n";
        cin >> ej;

            if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            ej = 0;
}

        switch (ej){
            case 1:  ej01_CobroParqueadero();  break;
            case 2:  ej03_LetraOficialDNI();  break;
            case 3:  ej05_ConsultaPaisesPosicion();  break;
            case 4:   ej12_16_CalificadorExamen(); break;
            case 5:  ej41_42_RotacionAngulos();  break;
            case 6:  ej66_ReservasAvion();  break;
            case 7:  ej69_CoordenadasPoligono();  break;
            case 8:  ej73_TiemposNatacion(); break;
            case 9:  ej79_ControlPesoCorderos();  break;
            case 10: ej80_MultasTransitoCuadrante();  break;
            case 11: ej81_SimuladorBaloto();  break;
            case 12: ej88_MarcasAtletas();   break;
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
        cout << "\n";
        cin >> opcion2D;

            if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            opcion2D = 0;
}
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
        cout << "1. Ejercicio 6  (Dividir matriz 3x4 entre celda [2][2])\n";
        cout << "2. Ejercicio 7  (Matriz transpuesta 3x4 a 4x3)\n";
        cout << "3. Ejercicio 8  (Suma de dos matrices)\n";
        cout << "4. Ejercicio 24 (Suma, resta, transpuesta y traza)\n";
        cout << "5. Ejercicio 91 (Transponer matriz 5x9 a 9x5)\n";
        cout << "6. Volver al menu de Matrices\n";
        cout << "Digite opcion: ";
        cout << "\n";
        cin >> ej;

            if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            ej = 0;
}
        switch (ej) {

            case 1:  ej06_DividirMatriz(); break;
            case 2: ej07_MatrizTranspuesta3x4(); break;
            case 3:   ej08_SumaDosMatrices();  break;
            case 4: ejercicio_24(); break;
            case 5: ej91_TransponerMatriz5x9(); break;
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
        cout << "\n";
        cin >> ej;

            if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            ej = 0;
}
        switch (ej) {


            case 1:  ej04_CuadradoMagico(); break;
            case 2: ej56_MatrizSimetrica();  break;
            case 3: ej57_MatrizAntisimetrica();  break;
            case 4: ej58_MatrizDiagonal();  break;
            case 5: ej59_TriangularInferior();  break;
            case 6: ej60_TriangularSuperior();  break;
            case 7: ej89_MatrizMarco8x6();  break;
            case 8: ej90_MatrizIdentidad7x7(); break;
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
        cout << "\n";
        cin >> ej;

            if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            ej = 0;
}
        switch (ej) {
            case 1: ej25_SumaFilasAVector(); break;
            case 2: ej26_CoordenadasMayorMenor(); break;
            case 3: ej38_ReporteMatriz3x4();  break;
            case 4: ej78_BuscarPuntoSilla();  break;
            case 5: ej92_MayorVenta5x5();  break;
            case 6: ej96_ModaRepeticiones5x5();  break;
            case 7: ej97_CoordenadaMayorPrimo();  break;
            case 8: ej99_ColumnaPrimeraAparicionMayor(); break;
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
        cout << "\n";
        cin >> ej;

            if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            ej = 0;
}

        switch (ej) {


            case 1:  ej13_RankingRestaurante(); break;
            case 2:  ej14_ProduccionLecheHato(); break;
            case 3:  ej31_AsientosAvion25x4(); break;
            case 4:  ej33_IngresosVendedoresProductos(); break;
            case 5:  ej43_CostosFabricaAutos();  break;
            case 6:  ej44_NutrientesDietaCambridge();  break;
            case 7:  ej45_46_MigracionCiudadSuburbios();  break;
            case 8:  ej47_48_49_ProduccionLubricantes();  break;
            case 9:  ej50_51_PreciosCoctelesBaldes();  break;
            case 10: ej68_VentasRepresentantesZonas();  break;
            case 11: ej74_NotasAlumnosAsignaturas();  break;
            case 12: ej93_KilometrosChoferesDias(); break;
            case 13: cout << "Volviendo a la opcion anterior...\n"; break;



            default: cout << "Opcion invalida.\n"; break;
        }
    } while (ej != 13);
}
