#include <stdio.h>

int main()
{
    int comp,comprado,receber;
    scanf("%d %d %d", &comp, &comprado, &receber);
    if((comp*receber)==comprado){
        printf("S\n");
    }
    
    else if((comp*receber)<comprado){
        printf("S\n");
    }
 else if((comp*receber)>comprado) {
     printf("N\n");
 }







    return 0;
}
