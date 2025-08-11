#include <stdio.h>
#include <string.h> 
int main() {
 
    int n,i,j;
    scanf("%d",&n);
    
   for(i=0;i<n;i++){
        char str[51];
        getchar();
        scanf("%[^\n]s", str);
        
    int size = strlen(str);
     for(j=0;j<size;j++){
        if(j==0 && str[j]!= ' '){
           printf("%c", str[0]); 
        }
       else if(str[j - 1] == ' ' && str[j]!= ' ' ){
            printf("%c", str[j]);
        }
     }
     
    printf("\n");
     
   }
        
    return 0;
}
