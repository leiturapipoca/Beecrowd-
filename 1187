#include <stdio.h>
 
int main() {
 
   int linha, i,j, z = 0;
 double m[12][12], valor = 0, soma = 0, media = 0;
 scanf("%d", &linha);
 char n;
 scanf(" %c ",  &n);
 
 for(i = 0; i<=11;i++){
     for(j=0;j<=11;j++){
         scanf("%lf", &valor);
         m[i][j]=valor;
     }
 }
 
 for(i=0;i<=4;i++){
     for(j = 1 + i; j<= 10 - i;j++){
         soma = m[i][j] + soma;
         z++;
     }
 }
 media = soma/z;
 if(n == 'S'){
     printf("%.1lf\n", soma);
 }
 else{
     printf("%.1lf\n", media);
 }
    return 0;
}
