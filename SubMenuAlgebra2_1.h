#ifndef SUBMENUALGEBRA21_H
#define SUBMENUALGEBRA21_H

const int F = 100;
const int COL = 100;

void subMenu2D_Algebra();

void ej06_DividirMatriz();
void ej07_MatrizTranspuesta3x4();
void ej08_SumaDosMatrices();
void ejercicio_24();
void ej91_TransponerMatriz5x9();

void sumarMatrices(int A[F][COL], int B[F][COL], int C[F][COL], int filas, int column);  //Declaracion de las funciones auxiliares del enunciado 24
void restarMatrices(int A[F][COL], int B[F][COL], int C[F][COL], int filas, int column);
void trasponerMatriz(int A[F][COL], int B[F][COL], int filas, int column);
int calcularTraza(int A[F][COL], int n);
void imprimirMatriz(int M[F][COL], int filas, int column);
void pedirDatosMatriz(int M[F][COL], int filas, int columnas, char nombre);

#endif
