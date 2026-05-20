#include <stdio.h>
 
int main() {
 
    int cod,qnt;
    double total;
    scanf("%d %d", &cod,&qnt);
   
    if(cod==1){
    total=qnt*4.00;
    printf("Total: R$ %.2lf\n", total);
}
    else if(cod==2){
        total=qnt*4.50;
        printf("Total: R$ %.2lf\n", total);
}
    else if(cod==3){
        total=qnt*5.00;
        printf("Total: R$ %.2lf\n", total);
}    
    else if(cod==4){
        total=qnt*2.00;
        printf("Total: R$ %.2lf\n", total);
}
    else if(cod==5){
        total=qnt*1.50;
        printf("Total: R$ %.2lf\n", total);
    }
 
 
    return 0;
}
