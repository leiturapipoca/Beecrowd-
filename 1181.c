#include <stdio.h>
 
int main() {

 int linha, i,j;
 float m[12][12], valor = 0, soma = 0, media = 0;
 scanf("%d", &linha);
 char n;
 scanf(" %c ",  &n);
 
 for(i = 0; i<=11;i++){
     for(j=0;j<=11;j++){
         scanf("%f", &valor);
         m[i][j]=valor;
     }
 }
 if(n == 'S'){
     for(i=0;i<=11;i++){
         soma = m[linha][i] + soma;
     }
     printf("%.1f\n", soma);
 }
 else {
      for(i=0;i<=11;i++){
          soma = m[linha][i] + soma;
          
 }
 media = soma/12.0;
 printf("%.1f\n", media);
 
 }
    return 0;
}
