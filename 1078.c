#include <stdio.h>
 
int main() {
 
   int n,i = 1;
   int valor;
   scanf("%d", &n);
   while(i<11){
     valor = i*n;
     printf("%d x %d = %d\n", i, n,valor);
     i++;
   }
 
    return 0;
}
