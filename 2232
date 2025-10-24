#include <stdio.h>
#include <math.h>
 double pascal(int num, double sum){
     
     
     if(num==0){
         return sum;
     }
     
     else{
         
         sum = sum + pow(2,num);
         num--;
          
     }
     
     return pascal(num,sum);
 }
 
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
 int input;
 scanf("%d",&input);
 double soma = 0;
 
 
 printf("%.0lf\n",pascal(input,soma)/2.0);
  
    }
    return 0;
}
