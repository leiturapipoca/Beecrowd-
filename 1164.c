#include <stdio.h>
 
int main() {
 
    int i=0,n,soma,per,valor;
    scanf("%d", &n);
    
    while(i<n){
       scanf("%d", &valor);
       soma = 0;
       per = 1;
       
       for(per;per<valor;per++){
           if(valor%per==0){
               soma = soma + per;
           }
           
       }
       if(soma==valor){
           printf("%d eh perfeito\n", valor);
           
       }
      else{
          printf("%d nao eh perfeito\n", valor);
      }
        
        i++;
        
    }
 
    return 0;
}
