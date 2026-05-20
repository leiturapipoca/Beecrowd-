#include <string.h>
#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++){
        char str[10030];
        scanf("%[^\n]s",str);
        getchar();
        int size = strlen(str);
        char cod1[10030];
        char cod2[10030];
        char cod3[10030];
        int inverte = 0;
    for(j=0;j<size;j++){
        if((str[j]>=65 && str[j]<=90) || (str[j]>=97 && str[j]<=122)){
            cod1[j] = str[j] + 3;
            
        }
        else
        {
            
            cod1[j] = str[j];
        }
    }
    
    for(j=size - 1;j>=0;j--){
        
        cod2[inverte] = cod1[j];
        inverte++;
        
    }
    
    strncpy(cod3,cod2,size);
    for(j=size/2.0;j<size;j++){
        cod3[j]=cod2[j] - 1;
    }
        
        printf("%s\n",cod3);
        
        for(j=0;j<size;j++){
            cod3[j] = '\0';
        }
    }

    return 0;
}
