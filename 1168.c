#include <string.h>
#include <stdio.h>

int main()
{
   int n,i,j;
scanf("%d", &n);
getchar();
for(i=0;i<n;i++){
    
    char led[100000];
    int qtd = 0;
    scanf("%s",led);
    getchar();
    int size = strlen(led);
    for(j=0;j<size;j++){
        if(led[j]=='0'){
           qtd = qtd + 6;
        }
        if(led[j]=='1'){
            qtd = qtd + 2;
        }
        if(led[j]=='2'){
            qtd = qtd + 5;
        }
        if(led[j]=='3'){
            qtd = qtd + 5;
        }
        if(led[j]=='4'){
            qtd = qtd + 4;
        }
        if(led[j]=='5'){
            qtd = qtd + 5;
        }
        if(led[j]=='6'){
            qtd = qtd + 6;
        }
        if(led[j]=='7'){
            qtd = qtd + 3;
        }
        if(led[j]=='8'){
            qtd = qtd + 7;
        }
        if(led[j]=='9'){
            qtd = qtd + 6;
        }
        
    }
    printf("%d leds\n",qtd);
    qtd= 0;
    
}
    return 0;
}
