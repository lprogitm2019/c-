/* TAREA 3                                               *
*  CURSO: LENGUAJES DE PROGRAMACIÓN - LPW72 GRUPO 1      *
*  DOCENTE: JUAN CAMILO CORREA CHICA                     *
*  INSTITUTO TECNOLÓGICO METROPOLITANO                   *
*  FECHA MÁXIMA DE ENTREGA: MAYO 4/2019 - 11:59AM        */

/* Ejercicio: 
Desarrolle una aplicacion de cifrado sencillo para una trama de datos de tipo entero.
La trama de datos es simplemente un arreglo de enteros de 20 posiciones.
Las posiciones de la trama se deben inicializar con numeros enteros  menores a 500 elegidos de manera aleatoria.
Una vez incializada la trama, esta debe pasarse a una funcion que la debe cifrar siguiendo el procedimiento 
que se describe a continuacion:
1. La funcion de cifrado ademas de la trama recibe otro parametro que indica cuantas veces se debe ejecutar el 
proceso de cifrado en la trama (rondas de actualizacion).
2. El proceso de cifrado consiste simplemente en actualizar cada posicion de la trama de la siguiente manera:
	a. Cada posicion par se actualiza con el valor obtenido de la resta de los valores de las 2 posiciones
       vecinas (izquierda - derecha).
    b. Cada posicion impar se actualiza con el valor obtenido de la suma de los valores de las 2 posiciones
       vecinas (izquierda + derecha).	   
3. Es importante mencionar que las posiciones se actualizan con los ultimos valores de la trama, es decir, una posicion
   no debe actualizarse con los valores recien actualizados de sus vecinos sino con los valores previos de la ultima
   ronda de actualizacion.
   
4. Al final de las n rondas de cifrado la trama queda completamente cifrada.
5. Las posiciones de los extremos (0 y 19) se actualizan asumiendo que el vecino faltante es:
   Para el caso de la posicion 0 el vecino a izquierda sera la posicion 19.
   Para el caso de la posicion 19 el vecino a derecha sera la posicion 0.
   
6. La funcion de cifrado debe nombrarse cipherData y puede tener o no valor de retorno, eso depende de la forma en que
   el estudiante la desarrolle.
   
7. La funcion debe implementarse en una libreria aparte del archivo main.cpp y luego debe ser incluida en este ultimo para 
   que pueda ser utilizada (Es decir, la aplicacion debe contar con 2 archivos fuente y un archivo de cabecera como minimo).
   
8. Un porcentaje de la calificacion corresponde a la interpretacion del ejercicio. Usted como ingeniero debe leer bien los
   pasos descritos hasta este punto y luego plantear la solucion mas conveniente para el ejercicio.
9. En la funcion main se debe imprimir en pantalla la trama completa antes del cifrado y luego del proceso de cifrado.
  
Ejemplo:
Trama: {1,45,92,216,28,63}
Numero de rondas de actualizacion: 3
Trama cifrada que se obtiene: 
	Ronda 1: {18,93,-171,120,153,29}
	Ronda 2: {-64,-153,-27,-18,91,171}
	Ronda 3: {324,-91,-135,64,-189,27}  Esta es la trama final cifrada
*/
