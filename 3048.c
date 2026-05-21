#include <stdio.h>
 
int main() {
 
 int n;
 scanf("%d",&n);
 int vet[10000];
 int mark=1;
 for(int i=0;i<n;i++){
     scanf("%d",&vet[i]);
 }
 int atual = vet[0];
 for(int i=0;i<n;i++){
     if(atual!=vet[i]){
         mark++;
         atual = vet[i];
     }
 }
 printf("%d\n",mark);
    return 0;
}
