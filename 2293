#include <stdio.h>

int main()
{
   int l,c;
   scanf("%d %d", &l,&c);
   int i,j;
   int m[l][c];
   int somal=0,somac=0;
   int soma1=0,soma2=0;
   
   for(i=0;i<l;i++){
       for(j=0;j<c;j++){
           scanf("%d", &m[i][j]);
       }
   }

  for(i=0;i<l;i++){
       for(j=0;j<c;j++){
           somal = somal + m[i][j];
       }
       if(somal>soma1){
           soma1 = somal;
       }
       somal=0;
   }
    
    
    for(j=0;j<c;j++){
       for(i=0;i<l;i++){
           somac = somac + m[i][j];
       }
       if(somac>soma2){
           soma2 = somac;
       }
       somac = 0;
   }
   if(soma2>soma1){
       printf("%d\n", soma2);
   }
   else{
       printf("%d\n", soma1);
   }
    return 0;
}
