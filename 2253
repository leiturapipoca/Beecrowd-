#include <string.h>
#include <stdio.h>

int main()
{
     char str[1000];
     getchar();
    while(scanf("%[^\n]s",str) != EOF){
    int i=0;
        int size = strlen(str);
        int z = 0;
        int M = 0;
        int m = 0;
        int n = 0;
        if(size<6 || size>32){
            printf("Senha invalida.\n");
        }
        
        else{
            
        for(i=0;i<=size;i++){
            
            if((str[i]<=47 && str[i]>=32) || (str[i]>=58 && str[i]<=64) || (str[i]>=91 && str[i]<=96) || (str[i]>=123 && str[i]<=256)){
                z++;
                
            }
            
            else {
            if(str[i]>=48 && str[i]<=57){
                M++;
            }
            
            else if(str[i]>=65 && str[i]<=90){
                m++;
            }
            else if(str[i]>=97 && str[i]<=122){
                n++;
            }
            }
        
        }
        
        if(M!=0 && m!=0 && n!=0 && z==0){
            printf("Senha valida.\n");
        }
        else{
            printf("Senha invalida.\n");
        }
        
    }
    getchar();
}
    return 0;
}
