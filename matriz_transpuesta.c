/*Construir un programa en lenguaje C donde el usuario ingrese las 
dimensiones de un arreglo bidimensional (matriz), 
el programa llene la matriz con números aleatorios entre 0 y 100. 
Luego, calcule la matriz transpuesta. 
El programa debe imprimir la matriz original y la matriz transpuesta.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int columas;
    int filas;
    printf("Ingrese las columnas de la matriz -> ");
    scanf("%d", &columas);
    printf("Ingrese las filas de la matriz -> ");
    scanf("%d", &filas);

    int matrix[filas][columas];

    for (int i = 0; i < filas; i++)
    {
        for ( int j = 0; j < columas; j++)
        {
            matrix[i][j]=rand()%100;
        }
    }

    
    
    return 0;
}
