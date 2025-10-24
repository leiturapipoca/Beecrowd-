#include <stdio.h>



int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    
    int matriz[500][500];

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int ultima_coluna_pivo = -1; 

    for (int i = 0; i < N; i++) {
        int col_pivo = -1;

        
        for (int j = 0; j < M; j++) {
            if (matriz[i][j] != 0) {
                col_pivo = j;
                break;
            }
        }

        
        if (col_pivo != -1) {
            if (col_pivo <= ultima_coluna_pivo) {
                printf("N\n");
                return 0;
            }
            ultima_coluna_pivo = col_pivo;

            
            for (int k = i + 1; k < N; k++) {
                if (matriz[k][col_pivo] != 0) {
                    printf("N\n");
                    return 0;
                }
            }
        } else {
           
            for (int k = i + 1; k < N; k++) {
                for (int j = 0; j < M; j++) {
                    if (matriz[k][j] != 0) {
                        printf("N\n");
                        return 0;
                    }
                }
            }
            break; 
        }
    }

    printf("S\n");
    return 0;
}
