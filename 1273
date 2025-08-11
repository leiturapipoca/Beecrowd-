#include<string.h>
#include <stdio.h>

int main()
{
    
        int z=0;
    while(1){
    int n,i;
    scanf("%d", &n);
    if(n==0){
        break;
    }
    
    if(z!=0){
        printf("\n");
    }
    
    
    int size = 0;
     char coc[10000] ="";
     char delimitadores = '&';
    
for(i=0;i<n;i++){
    char str[51];
    scanf("%s",str);
    int size1;
    size1 = strlen(str);
    if(size1>size){
        size = size1;
    }
    strcat(coc,str);
    if(i < n - 1){
    strncat(coc,&delimitadores,1);
    }
}
char * resultado = strtok(coc,&delimitadores);
while(resultado!=NULL ){
    printf("%*s\n",size,resultado);
    resultado = strtok(NULL,&delimitadores);
    }
    z++;
}


    
    return 0;
}
