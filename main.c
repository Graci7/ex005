#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[2][2];
    int linha, coluna;

    for( linha=0; linha<2; linha++){
            for(coluna=0; coluna <2; coluna++ ){
        printf( " Informe um valor inteiro para linha %d e coluna %d \n", linha, coluna);
        scanf("%d" , &mat[linha][coluna]);
        }
    }

    for( linha=0; linha<2; linha ++){
            for (coluna=0; coluna < 2; coluna ++){
                printf (" | %d |", mat[linha][coluna]);

            }
            printf("\n");
    }
    return 0;
}
