#include <stdio.h>
 
int main() {

 int linha, i,j, z = 0;
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
 
  for(i = 0;i<11;i++){
         for(j= 0 ;j<11 - i;j++){
              soma = m[i][j] + soma;
              z++;
         }
        
     }
 if(n == 'S'){
    
     printf("%.1f\n", soma);
 }
 else {
             
media = soma/z;
printf("%.1f\n", media);
 
 }
    return 0;
}
