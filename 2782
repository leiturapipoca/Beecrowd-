#include <stdio.h>

int main()
{
    int n,i = 0, cont;
    //qntd de casos a serem analisados
    scanf("%d", &n);
    if(n==2){
        printf("1\n");
        return 0;
    }
    
    int esc[n];
    for(i=0;i<n;i++){
        //algarismos que formaram a escadinha
        scanf("%d", &esc[i]);
    }
    // se o numero tem mais de 2 valores,
    //existe pelo menos 1 escadinha
    cont = 1;
    //diferenca inicial
    int diff = esc[1] - esc[0];
    for(i=2;i<n;i++){
        //se não condizer com a diferença, uma nova escada foi formada
        if((esc[i] - esc[i - 1])!= diff){
            cont++;
            diff = esc[i] - esc[i - 1];
        }
        
    }
    printf("%d\n", cont);
    

    return 0;
}
