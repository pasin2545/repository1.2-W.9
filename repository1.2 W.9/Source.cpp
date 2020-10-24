#include <stdio.h>

int main()
{
    int ma1[3][3], ma2[3][3], rema[3][3];
    int sum;

    printf("matrix 1\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf_s("%d", &ma1[i][j]);
        }
    }

    printf("matrix 2\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf_s("%d", &ma2[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = 0;
            for (int k = 0; k < 3; k++)
            {
                sum += ma1[i][k] * ma2[k][j];
            }

            rema[i][j] = sum;
        }
    }

    printf("\nProduct of matrix = \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", rema[i][j]);
        }
        printf("\n");
    }

    return 0;
}