#include <stdio.h>
 
int main() {
 
    int i,j,n,cont=1,f;
    char k;
    float m[12][12];
    float soma=0;
    
    scanf( " %c", &k);
    
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%f", &m[i][j]);
        }
    }
 for(i=0;i<=10;i++){
    for(j=cont;j<=11;j++){
         soma = soma + m[i][j];
         f++;
     }
     cont++;
 }
 if(k=='M'){
     printf("%.1f\n", soma/f);
 }
 else{
     printf("%.1f\n", soma);
 }
    return 0;
}
