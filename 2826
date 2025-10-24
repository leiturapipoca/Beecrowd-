#include <string.h>
#include <stdio.h>

int main()
{
    char string1[22];
    char string2[22];
    scanf("%s",string1);
    getchar();
    scanf("%s",string2);
    getchar();
    
    int sizem = strlen(string1);
    int size = strlen(string2);
    int eh=0;
    
    if(sizem>size){
        eh = 1;
        int temp;
        temp=sizem;
        sizem=size;
        size=temp;
    }
    
    int cont = 0;
    int i=0;
    
    while(i<sizem){
        
        
        if(string1[i]<string2[i]){
            printf("%s\n%s\n",string1,string2);
            cont++;
            break;
        }
        else if(string2[i]<string1[i]){
            printf("%s\n%s\n",string2,string1);
            cont++;
            break;
        }
        
            i++;
        }
    if(cont>0){
        return 0;
    }
    else{
        if(eh==1){
            
        printf("%s\n%s\n",string2,string1);
        }
        else{
            printf("%s\n%s\n",string1,string2);
        }
    }
    

    return 0;
}
