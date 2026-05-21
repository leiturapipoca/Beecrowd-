#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        getchar();
        char str[4];
        scanf("%s",str);
        
        
        int valor=0;
        if(str[0]==str[2]){
            valor= ((str[0] - 48))*((str[0]) - 48);
        }
        else{
            
         if(str[1]<=90){
            valor = str[2] - str[0];
        }
        else if(str[1]>=97) {
            valor = (str[0] - 48) + (str[2] - 48);
        }
        }
        printf("%d\n", valor);
    }


    return 0;
}
