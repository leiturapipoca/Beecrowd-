#include <stdio.h>
 int fact(int n){
     if(n==1){
         return 1;
     }
     else{
         
         return n*fact(n - 1);
     }
 }
int main() {
 
   int n, z;
   scanf("%d",&n);
   z = fact(n);
   
 printf("%d\n",z);
 
    return 0;
}
