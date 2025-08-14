#include<stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long long int arruma_array(unsigned int n1,unsigned int n2){
    int resto = 0;
    int vet1[32];
    int vet2[32];
    vet1[0]=n1%2;
    resto = n1/2;

    for(int i=1;i<=31;i++){
        vet1[i]= resto%2;
        resto = resto/2;
    }

    vet2[0]= n2%2;
    resto = n2/2;
    for(int i=1;i<=31;i++){
        vet2[i]=resto%2;
        resto = resto/2;
    }
    int new_vet[32];
    int z=0;
    unsigned long long int soma=0;
    
    for(int i=0;i<32;i++){
        if((vet1[i]==0 && vet2[i]==0) || (vet1[i]==1 && vet2[i]==1)){
            new_vet[i]=0;
        }
        else{
            new_vet[i]=1;
        }
        z++;
    }
    for(int i=0;i<32;i++){
        if(new_vet[i]==1){
            soma += pow(2,i);
        }

    }
    return soma;


}

int main(){
    unsigned int n1,n2;
    while(scanf("%u %u",&n1,&n2)!=EOF){
    int vet1[32];
    int vet2[32];
    
    printf("%llu\n",arruma_array(n1,n2));
    }
    

    return 0;
}
