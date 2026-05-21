#include <stdio.h>
#include <string.h>
 
int main() {
 int i,j,n,k,comp = 0,cont=0,pal=0;
 char strcola[10001] = "";
 char teste[] = "&";
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
      char str[101];
      
      scanf("%s",str);
     
      strncat(str,teste,1);
      strcat(strcola,str);
      
  }
  
  getchar();
  scanf("%d",&k);
 for(i=0;i<k;i++){
     char compare[1001];
     strcpy(compare,strcola);
         char * resultado = strtok(compare,teste);
        int z = 0;
         char strinput[101];
         scanf("%s",strinput);
         int tamanho = strlen(strinput);
     while(resultado !=NULL){
          if(strncmp(strinput,resultado,tamanho)==0){
             
             cont++;
             int size = strlen(resultado);
             if(size>comp){
                 comp = size;
             }
         }
         resultado = strtok(NULL,teste);
          z++;
     }
     
   if(cont!=0){
              printf("%d %d\n",cont,comp);
          }
          else{
              printf("-1\n");
          }
          cont = 0;
          comp = 0;
 }
 
    return 0;
}
