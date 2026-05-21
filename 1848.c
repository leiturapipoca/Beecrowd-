#include <string.h>
#include <stdio.h>

int main()
{
    int cont=0,i=0;
    int soma = 0;
    while(cont<3){
        
        char corv [9];
        scanf(" %[^\n]s", corv);
        getchar();
        if(strcmp(corv,"caw caw")==0){
            printf("%d\n",soma);
            soma=0;
            cont++;
        }
        else{
            int sum = 0;
            if(corv[0]== '*'){
                sum = sum + 4;
            }
            if(corv[1]== '*'){
                sum = sum + 2;
            }
            if(corv[2]== '*'){
                sum = sum + 1;
            }
            soma = soma + sum;
        }
        }

    return 0;
}
