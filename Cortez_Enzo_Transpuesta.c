#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int m, n;
    srand(time(0));

    printf("Ingrese el numero de filas: ");
    scanf("%d", &m);

    printf("Ingrese el numero de columnas: ");
    scanf("%d", &n);

    int matriz[m][n];
    int trans[n][m];

    // Inicialización de la matriz
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matriz[i][j] = rand() % 100 + 1;
        }
    }

    // Transposición de la matriz
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            trans[j][i] = matriz[i][j];
        }
    }

    // Impresión de la matriz original
    printf("Matriz original:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Impresión de la matriz transpuesta
    printf("\nMatriz transpuesta:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
