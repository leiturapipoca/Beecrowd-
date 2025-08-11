#include <stdio.h>

int main() {
    int P, R, test_case = 1;

    while (scanf("%d %d", &P, &R) && (P || R)) {
        int fila[P];
        for (int i = 0; i < P; i++) {
            scanf("%d", &fila[i]);
        }

        for (int r = 0; r < R; r++) {
            int N, J;
            scanf("%d %d", &N, &J);

            int acoes[N];
            for (int i = 0; i < N; i++) {
                scanf("%d", &acoes[i]);
            }

           
            int nova_fila[P], idx = 0;
            for (int i = 0; i < N; i++) {
                if (acoes[i] == J) {
                    nova_fila[idx++] = fila[i];
                }
            }

            
            for (int i = 0; i < idx; i++) {
                fila[i] = nova_fila[i];
            }

            P = idx; 
        }

        
        printf("Teste %d\n", test_case++);
        printf("%d\n\n", fila[0]); // O único participante restante é o vencedor
    }

    return 0;
}
