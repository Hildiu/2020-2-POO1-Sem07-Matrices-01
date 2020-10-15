//
// Created by MARIA HILDA BERMEJO RIOS on 10/14/20.
//

#ifndef INC_07_SEMANA___B___ARRAYS_UFUNCIONES_H
#define INC_07_SEMANA___B___ARRAYS_UFUNCIONES_H


#include <iostream>
#include <iomanip>
using namespace std;

const int MAXFILAS=8;
const int MAXCOL=8;

int ** crearMatriz(int filas, int col);
void llenaMatriz(int ** pM,int filas, int col );
void imprimirMatriz(int **pM, int filas, int col );
int elMenor(int **pM, int filas, int col );
int sumadeDiagonal(int **pM, int filas, int col );
int sumaTriangularSuperior(int **pM, int filas, int col);
void liberarMatriz(int **&pM, int filas, int col);

#endif //INC_07_SEMANA___B___ARRAYS_UFUNCIONES_H
