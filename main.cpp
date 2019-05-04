/* TAREA 3                                               *
*  CURSO: LENGUAJES DE PROGRAMACIÓN - LPW72 GRUPO 1      *
*  DOCENTE: JUAN CAMILO CORREA CHICA                     *
*  INSTITUTO TECNOLÓGICO METROPOLITANO                   *
*  FECHA MÁXIMA DE ENTREGA: MAYO 4/2019 - 11:59AM        *
*  ESTUDIANTE: MANUEL DAVID DIAZ                         */


#include <stdlib.h>
#include <time.h>
#include<iostream>
#include "Cifrado.h"
using namespace std;


int main ()
   
{
    int tam;
    cout<<"Ingrese el tamaño de la trama: "<< endl;
    std::cin >> tam;
  
    int trama2[tam];
 
    srand(time(NULL));
    
    for(int c = 0; c < tam; c++)
    {
       trama2[c] = 1 + rand() % (499 - 0); 
       
        }
    cout<<"La trama inicial es: "<< endl;  
    for (int i=0; i<tam; i++)
    cout << trama2[i] << ' ';
    cout<<endl;
      
 
  
  int r;// NUMERO DE RONDAS
  cout<<"Ingrese el numero de rondas:"<<endl;
  std::cin >> r;
  
  int *x;
  
   x = cipherData (trama2, r, tam);
  
  cout<<"la trama final es: "<<endl;
   for(int i=0; i<tam; i++)
  {
   cout<< *(x+i) <<' ';
     }

    return 0;
}