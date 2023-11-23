/*Construir un programa en lenguaje C donde el usuario ingrese las 
dimensiones de un arreglo bidimensional (matriz), 
el programa llene la matriz con números aleatorios entre 0 y 100. 
Luego, calcule la matriz transpuesta. 
El programa debe imprimir la matriz original y la matriz transpuesta.*/

//Datos de prueba para tamaño de matriz
//matriz 2x2, matriz 6x5, matriz 3x3, matriz 3x4, matriz 4x3

#include<stdio.h>
#include<stdlib.h>

int main()
{
    //Declaramos variables globales
    int columnas;
    int filas;
    
    //Pedimos los datos al usuario
    printf("Ingrese las filas de la matriz -> ");
    scanf("%d", &filas);
    printf("Ingrese las columnas de la matriz -> ");
    scanf("%d", &columnas);
    
    //Se deine el tamaño de las matrices
    int A[filas][columnas];
    int B [columnas][filas];

    //Se generan los numeros random
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            A[i][j]=rand()%100+1;
        }
        
    }

    //Se crea la transpuesta
    for (int i = 0; i < filas; i++) 
    {
        for (int j = 0; j < columnas; j++) 
        {
            B[j][i] = A[i][j];
        }
    }

    //Se imprime la matriz original
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //Se imprime la matriz tranpuesta
    for (int i = 0; i < columnas; i++)
    {
        for (int j = 0; j < filas; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    return 0;
}
