#include <stdio.h>
#include <string.h>
#include <stdlib.h>



typedef struct{
    char carne[21];
    int valid;
} Churras;

void bubblesort(Churras churrasco[], int s){
    int z;
    int k;
    for(z = 0; z < s; z++){
        
        for(k = 0; k < s-1; k++){
            
            if(churrasco[k].valid > churrasco[k+1].valid){
                Churras aux = churrasco[k];
                churrasco[k] = churrasco[k + 1];
                churrasco[k + 1] = aux;
            }
        }
    }
    
}






int main() {
    int n;
 while(scanf("%d",&n)!=EOF){
     Churras churrasco[1000];
     getchar();
     int i,j;
     for(i=0;i<n;i++){
     scanf("%s %d",churrasco[i].carne,&churrasco[i].valid);
     
     
     
     
     
     
     }
     bubblesort(churrasco,n);
     for(i=0;i<n;i++){
         if(i<n - 1){
         printf("%s ",churrasco[i].carne);
         }
         else{
             printf("%s",churrasco[i].carne);
         }
     }
     printf("\n");
     
 }
 
 
    return 0;
}
