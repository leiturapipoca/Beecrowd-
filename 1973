#include <stdio.h>
 
int main() {
 
unsigned long long int i,star, soma = 0, roub=0, visita = 0;
scanf("%llu",&star);
 unsigned int ovl[star], comp[star];
 for(i=0;i<star; i++){
    scanf("%llu", &ovl[i]);
    soma = soma + ovl[i];
     comp[i] = ovl[i];
}
 if(ovl[0]%2==0){
           printf("1 %llu\n", soma - 1);
           return 0;
       }

i = 0;
 while(i<star && i>=0){
      if(ovl[i]==0){
             break;
         }
             if(ovl[i]%2!=0){
             i++;
             ovl[i - 1]--;
             roub++;
             }
         else if(ovl[i]%2==0){
             i--;
             ovl[i + 1]--;
               roub++;
}
}
for(i=0;i<star;i++){
    if(comp[i]!=ovl[i]){
        visita++;
    }
}
printf("%llu %llu\n",visita, soma - roub);
return 0;
}
