#include <stdio.h>
#include <math.h>

int main() {
    int C, N;
    scanf("%d", &C); 

    for (int caso = 1; caso <= C; caso++) {
        scanf("%d", &N); 

       
        float xb, yb;
        scanf("%f %f", &xb, &yb);

        int bola_mais_proxima = 1;
        float menor_distancia = -1;

        
        for (int i = 1; i <= N; i++) {
            float x, y;
            scanf("%f %f", &x, &y);

            
            float distancia = sqrt((x - xb) * (x - xb) + (y - yb) * (y - yb));

            
            if (menor_distancia == -1 || distancia < menor_distancia) {
                menor_distancia = distancia;
                bola_mais_proxima = i;
            }
        }

        
        printf("%d\n", bola_mais_proxima);
    }

    return 0;
}
