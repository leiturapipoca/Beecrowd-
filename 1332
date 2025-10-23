#include <string.h>
#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d", &n);
    getchar();
    char um[4] = "one";
    char dois[4] = "two";
    char tres[6] = "three";
    for(i=0;i<n;i++){
        int one = 0;
        
        char lil_bro[30] = "\0";
        scanf("%s", lil_bro);
        int size = strlen(lil_bro);
        if(size>3){
        printf("3\n");
        }
        else{
           for(j=0;j<size;j++){
               if(lil_bro[j]==um[j]){
                   one++;
               }
           }
           if(one>=2){
               printf("1\n");
           }
           else{
               printf("2\n");
           }
        }
    }

    return 0;
}
