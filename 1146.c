#include <stdio.h>
 
int main() {
 
   int x, i;
   
   
   do{
       
       scanf("%d", &x);
       
       if(x==0){
           break;
       }
           for(i=1;i<=x;i++){
           if(i==x){
           printf("%d\n", i);
       }
       else{
            printf("%d ", i);
       }
           }
       i= 1;
       }while(x!=0);
       
   
    return 0;
}
