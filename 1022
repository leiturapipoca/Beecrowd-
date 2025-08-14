#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int  MDC (int num,int den){
    if (num < 0) num = -num;
    if (den < 0) den = -den;
    while(den!=0){
        int resto = num%den;
        num = den;
        den = resto;
    }
    return num;
}

int main(){
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        int n1;
        int d1;
        char op;
        int n2;
        int d2;

        scanf("%d / %d %c %d / %d",&n1,&d1, &op,&n2,&d2);

        if( op=='+'){
            int mdc = MDC(n1*d2 + n2*d1,d1*d2);
            
            printf("%d/%d = %d/%d\n",n1*d2 + n2*d1, d1*d2,(n1*d2 + n2*d1)/mdc,d1*d2/mdc);
        } 
        
        else if(op=='-'){
            int mdc = MDC(n1*d2 - n2*d1,d1*d2);
            
            printf("%d/%d = %d/%d\n",n1*d2 - n2*d1,d2*d1,(n1*d2 - n2*d1)/mdc, d1*d2/mdc);
        } 

        else if(op=='*'){
            int mdc = MDC(n1*n2,d1*d2);
            printf("%d/%d = %d/%d\n",n1*n2 ,d1*d2,n1*n2/mdc,d1*d2/mdc);

        }
        else{
            int mdc = MDC(n1*d2,n2*d1);
            printf("%d/%d = %d/%d\n",n1*d2, n2*d1,n1*d2/mdc,n2*d1/mdc);

        }





    }

    return 0;
    
}
