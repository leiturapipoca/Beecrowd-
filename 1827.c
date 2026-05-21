#include <stdio.h>

int main() {
    int x, i, j;

    
    while (scanf("%d", &x) != EOF) {
        int m[x][x];  

        
        for (i = 0; i < x; i++) {
            for (j = 0; j < x; j++) {
                m[i][j] = 0;
            }
        }

        
        for (i = 0; i < x; i++) {
            m[i][i] = 2;
        }

       
        for (i = 0; i < x; i++) {
            m[i][x - 1 - i] = 3;
        }
        
        int centro = x / 2;
        m[centro][centro] = 4;

        int inicio = x / 3;
        int fim = x - inicio;
        for (i = inicio; i < fim; i++) {
            for (j = inicio; j < fim; j++) {
                if (m[i][j] != 4) { 
                    m[i][j] = 1;
                }
            }
        }

        
        for (i = 0; i < x; i++) {
            for (j = 0; j < x; j++) {
                printf("%d", m[i][j]);
            }
            printf("\n");
        }

            printf("\n"); 
    }

    return 0;
}
