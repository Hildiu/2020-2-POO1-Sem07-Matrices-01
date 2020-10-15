//
// Created by MARIA HILDA BERMEJO RIOS on 10/14/20.
//

#include "UFunciones.h"

int ** crearMatriz(int filas, int col)
{
  int **pMatriz=new int*[filas];
  for(int f=0; f<filas;f++)
    pMatriz[f]= new int[col];
  return pMatriz;
}

void llenaMatriz(int ** pM,int filas, int col )
{
  for(int f=0; f<filas; f++)
  {
    for(int c=0; c<col; c++)
      pM[f][c]= rand()%999+1;
  }
}

void imprimirMatriz(int **pM, int filas, int col )
{
  cout << "\n";
  for(int f=0; f<filas; f++) {
    for (int c = 0; c < col; c++)
      cout << setw(5) << pM[f][c];
    cout << "\n";
  }
}

int elMenor(int **pM, int filas, int col )
{
  int menor=pM[0][0];
  for(int f=0; f < filas; f++)
    for (int c = 0; c < col; c++)
      if(pM[f][c]< menor)
        menor = pM[f][c];
  return menor;
}

int sumadeDiagonal(int **pM, int filas, int col )
{
  int suma=0;
  for(int f=0; f < filas; f++)
    suma+=pM[f][f];
  return suma;
}


int sumaTriangularSuperior(int **pM, int filas, int col)
{
  int suma=0;
  for(int f=0; f<filas-1; f++)
    for(int c=f+1; c<col; c++)
      suma +=pM[f][c];
  return suma;
}

void liberarMatriz(int **&pM, int filas, int col)
{
  for(int f=0; f<filas; f++)
    delete []pM[f];
  delete []pM;
  pM= nullptr;
}