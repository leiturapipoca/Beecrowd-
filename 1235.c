#include <string.h>
#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d", &n);
   
    for(i=0;i<n;i++){
        int j;
        char str[101];
        getchar();
        
        scanf("%[^\n]s", str);
        int size = strlen(str);
        char strr[size + 1];
        j = size/2.0 - 1;
        int z=0;
        
        for(j;j>=0;j--){
            
            strr[z] = str[j];
            z++;
            }
        
          j = size - 1;
          
          for(j;j>=size/2.0;j--){
              
              strr[z] = str[j];
              z++;
          }
        int k=0;
         for(k=0;k<size;k++){
             printf("%c",strr[k]);
         }
         printf("\n");
    }

    return 0;
}
