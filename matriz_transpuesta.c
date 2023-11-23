/*Construir un programa en lenguaje C donde el usuario ingrese las 
dimensiones de un arreglo bidimensional (matriz), 
el programa llene la matriz con números aleatorios entre 0 y 100. 
Luego, calcule la matriz transpuesta. 
El programa debe imprimir la matriz original y la matriz transpuesta.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int columnas;
    int filas;
    
    printf("Ingrese las filas de la matriz -> ");
    scanf("%d", &filas);
    printf("Ingrese las columnas de la matriz -> ");
    scanf("%d", &columnas);
    

    int matrix[filas][columnas];
    int matrixb[filas][columnas];

    for (int i = 0; i < filas; i++)
    {
        for ( int j = 0; j < columnas; j++)
        {
            matrix[i][j]=rand()%100;
        }
    }

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matrixb[j][i]=matrix[i][j];
        }
        
    }
    printf("Matriz original:\n");
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  printf("Matriz transpuesta:\n");
  for (int i = 0; i < columnas; i++) {
    for (int j = 0; j < filas; j++) {
      printf("%d ", matrixb[i][j]);
    }
    printf("\n");
  }
    
    
    return 0;
}
