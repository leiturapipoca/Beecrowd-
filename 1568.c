#include <stdio.h>
#include <string.h>



char nomes[100000][12];  
long long int forca[100000];  
long long int prefix_sum[100000];  

int main() {
    int n;

    while (1) {
        scanf("%d", &n);
        if (n == 0) break;

        
        for (int i = 0; i < n; i++) {
            scanf("%s", nomes[i]);
            long long int soma = 0;
            for (int j = 0; nomes[i][j] != '\0'; j++) {
                soma += nomes[i][j]; 
            }
            forca[i] = soma;
        }

        
        prefix_sum[0] = forca[0];
        for (int i = 1; i < n; i++) {
            prefix_sum[i] = prefix_sum[i - 1] + forca[i];
        }

        
        int empate = -1;
        int esq = 0, dir = n - 1;

        while (esq <= dir) {
            int meio = (esq + dir) / 2;
            
           
            long long int t1 = 0, t2 = 0;
            for (int i = 0; i <= meio; i++) {
                t1 += (meio - i + 1) * forca[i];
            }
            for (int i = meio + 1; i < n; i++) {
                t2 += (i - meio) * forca[i];
            }

            if (t1 == t2) {
                empate = meio;
                break;
            } else if (t1 < t2) {
                esq = meio + 1;
            } else {
                dir = meio - 1;
            }
        }

        if (empate != -1) {
            printf("%s\n", nomes[empate]);
        } else {
            printf("Impossibilidade de empate.\n");
        }
    }

    return 0;
}

