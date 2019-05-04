/* TAREA 3                                               *
*  CURSO: LENGUAJES DE PROGRAMACIÓN - LPW72 GRUPO 1      *
*  DOCENTE: JUAN CAMILO CORREA CHICA                     *
*  INSTITUTO TECNOLÓGICO METROPOLITANO                   *
*  FECHA MÁXIMA DE ENTREGA: MAYO 4/2019 - 11:59AM        *
*  ESTUDIANTE: MANUEL DAVID DIAZ                         */

#include<iostream>
#include "Cifrado.h"

using namespace std;


int* cipherData (int arreglo[], int Rondas, int tam)

{
 static int resultado[20];
 int trama[tam];


int tramaaux[tam];
int g=0;
int posini, aux1, aux2, posfin;

 
 {
     for(int t=0; t<tam; t++) 
      trama[t]= arreglo[t];
    {  
      for(int y=0; y<Rondas; y++) 
        
        {
         if (g!=0)

            for(int t=0; t<tam; t++) 
               { trama[t]=tramaaux[t]; }
                    
     
     for (int a=0; a<tam; a++) 
     
     if (a==0)
 
 {
     posini= trama[tam-1]- trama[1]; 
     tramaaux[a]= posini;
 }
 
 else if(a>0 && a<tam-1) 
  {
      if(a%2==0)
      {
     aux1= trama[a-1]- trama[a+1];
     tramaaux[a]=aux1;
              }
      else
      {
         aux2= trama[a-1]+ trama[a+1];
         tramaaux[a]=aux2;
            
         }
          }
 
    else if(a==tam-1)
    
    {
    posfin= trama[a-1] -trama[0];
    tramaaux[a]=posfin;
    
    }
     g++;
     
     
     for(int x=0; x<tam; x++)
     {
     
        trama[x]=tramaaux[x];
        resultado[x]=trama[x];
      
    } 
    }
    } 
     
 }
     return resultado;
    }

