#include <string.h>
#include <stdio.h>

int main()
{
    int n,cont=0;
    scanf("%d",&n);
    
    while(cont<n){
        int size;
        char str[10001];
        scanf("%s", str);
        size = strlen(str);
        if(size!=8){
            printf("FAILURE\n");
        }
        
        
        else{
             int z = 1;
            for (int i = 0; i < 3; i++) {
                if (str[i] < 'A' || str[i] > 'Z') {
                    z = 0;
                    break;
                }
            }
            
            
            if (str[3] != '-') {
                z = 0;
            }
            
            
            for (int i = 4; i < 8; i++) {
                if (str[i] < '0' || str[i] > '9') {
                    z = 0;
                    break;
                }
            }
            if(z){
            if(str[7] == '1' || str[7]=='2'){
                printf("MONDAY\n");
                
            }
            else if(str[7]== '4' || str[7]=='3'){
                printf("TUESDAY\n");
            }
            else if(str[7]== '5' || str[7]=='6'){
                printf("WEDNESDAY\n");
            }
            else if(str[7]== '7' || str[7]=='8'){
                printf("THURSDAY\n");
            }
            else{
                printf("FRIDAY\n");
            }
            } else {
                printf("FAILURE\n");
            }
        
        }
        
        
        
        cont++;
        
        
    }
    return 0;
}
