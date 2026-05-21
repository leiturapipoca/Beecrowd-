#include <stdio.h>
#include <math.h>
double raiz(int num,double val){
    if(num==0){
        return val;
    }
    
    
    num--;
    return (1/(2 + raiz(num,val)));
    
    
    
}




int main()
{
   int n;
   scanf("%d",&n);
   double zero = 0;
   double quad = sqrt(2);
   double result = raiz(n,zero);
printf("%.10lf\n", 1 + result);
    return 0;
}
