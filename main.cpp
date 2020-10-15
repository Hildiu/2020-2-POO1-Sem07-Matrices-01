#include <iostream>
#include "UFunciones.h"
using namespace  std;

int main()
{ int **pM= nullptr;

  srand(time(nullptr));
  pM = crearMatriz(MAXFILAS,MAXCOL);
  llenaMatriz(pM,MAXFILAS,MAXCOL);
  imprimirMatriz(pM, MAXFILAS, MAXCOL);
  cout << "\n";
  cout<< "\nEl dato mas pequeno es: " << elMenor(pM, MAXFILAS, MAXCOL);
  cout << "\nSuma de la diagonal principal : " << sumadeDiagonal(pM, MAXFILAS, MAXCOL);
  cout << "\nSuma de los elementos por encima de la diagonal principal : " << sumaTriangularSuperior(pM, MAXFILAS, MAXCOL);
  liberarMatriz(pM,MAXFILAS, MAXCOL);
  return 0;
}
