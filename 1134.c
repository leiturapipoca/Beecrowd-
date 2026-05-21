#include <stdio.h>
 
int main() {
 
    int a,alc=0,gaso=0,die=0;
    
    do{
        scanf("%d",&a);
        
        
        if(a==1){
            alc++;
        }
        else if(a==2){
            gaso++;
        }
        else if(a==3){
        die++;
        } 
        else if(a==4){
            
        }
    
    
}while(a!=4);
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alc);
    printf("Gasolina: %d\n", gaso);
    printf("Diesel: %d\n", die);
    return 0;
}
