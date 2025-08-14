#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct Aptos{
    int pessoas;
    int litros;
}Aptos;

typedef struct Aux{
    int div;
    int indice;
}Aux;

int arruma (const void*a,const void*b){
    Aux *ai = (const Aux*)a;
    Aux *bi = (const Aux*)b;
    return ai->div - bi->div;
}

int main(){

    int cidade = 1;
    while(1){
        int n;
        if (scanf("%d",&n) != 1) break;
        if(n==0) break;

        if (cidade > 1) printf("\n");           
        printf("Cidade# %d:\n", cidade++);

        Aptos *Apartamentos = malloc(n * sizeof(Aptos));
        Aux *aux = malloc(n * sizeof(Aux));
        

        long long soma_l = 0;
        long long soma_p = 0;
        for(int i=0;i<n;i++){
            scanf("%d %d", &Apartamentos[i].pessoas, &Apartamentos[i].litros);
            soma_l += Apartamentos[i].litros;
            soma_p += Apartamentos[i].pessoas;
            aux[i].div = Apartamentos[i].litros / Apartamentos[i].pessoas; 
            aux[i].indice = i;
        }

        qsort(aux,n,sizeof(Aux),arruma);

        int i = 0;
        int firstPrinted = 0;
        while (i < n) {
            int consumo = aux[i].div;
            int total_pessoas = 0;
            while (i < n && aux[i].div == consumo) {
                total_pessoas += Apartamentos[aux[i].indice].pessoas;
                i++;
            }
            if (!firstPrinted) {
                printf("%d-%d", total_pessoas, consumo);
                firstPrinted = 1;
            } else {
                printf(" %d-%d", total_pessoas, consumo);
            }
        }
        printf("\n");

        
        long long media_centavos = (soma_l * 100LL) / soma_p;
        printf("Consumo medio: %lld.%02lld m3.\n", media_centavos / 100LL, media_centavos % 100LL);

        free(Apartamentos);
        free(aux);
    }

    return 0;
}
