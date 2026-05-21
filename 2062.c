#include <string.h>
#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    getchar();
    char espaco[2] = " ";
    char cola[10000] = "\0";
    char obi[4] = "OBI";
    char uri[4] = "URI";
    for(i=0;i<n;i++){
        char digi[22];
        scanf("%s",digi);
        getchar();
        int size = strlen(digi);
        if(size==3){
            if(digi[0]=='O' && digi[1]=='B'){
                strcat(cola,obi);
                if(i!= (n - 1)){
                strncat(cola,espaco,1);
                }
            }
            else if(digi[0]=='U' && digi[1]=='R'){
                strcat(cola,uri);
                if(i !=( n - 1)){
                strncat(cola,espaco,1);
                }
            }
            else{
                strcat(cola,digi);
                if(i!=(n - 1)){
                    strncat(cola,espaco,1);
                }
            }
        }
        else{
            strcat(cola,digi);
            if(i!=(n - 1)){
                
                    strncat(cola,espaco,1);
                
            }
        }
    }
printf("%s\n",cola);
    return 0;
}
