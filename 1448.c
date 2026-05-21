#include <string.h>
#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    getchar();
    
    for(i=0;i<n;i++){
        char juiz[101];
        char g1[101];
        char g2[101];
        scanf("%[^\n]s",juiz);
        getchar();
        
        scanf("%[^\n]s",g1);
        getchar();
        
        scanf("%[^\n]s",g2);
        getchar();
        
        int size = strlen(juiz);
        
        
        int pt1 = 0;
        int pt2 = 0;
        int erro1 = 0;
        int erro2 = 0;
        
        for(j=0;j<size;j++){
            if(juiz[j]==g1[j]){
                pt1++;
            }
            
            if(juiz[j]==g2[j]){
                pt2++;
            }
            if(juiz[j]==g1[j] && juiz[j]!= g2[j] && erro2==0 && erro1==0){
                erro2++;
            }
            if(juiz[j]==g2[j] && juiz[j]!= g1[j] && erro2==0 && erro1==0){
                erro1++;
            }
        } 
        
        
        if(pt1>pt2){
            printf("Instancia %d\n",i + 1);
            printf("time 1\n");
        }
        else if(pt2>pt1){
            printf("Instancia %d\n",i + 1);
            printf("time 2\n");
        }
        
        else if(pt1==pt2){
            if(erro1==erro2){
                printf("Instancia %d\n",i + 1);
                printf("empate\n");
            }
            else if(erro1>erro2){
                printf("Instancia %d\n",i + 1);
                printf("time 2\n");
            }
            else{
                printf("Instancia %d\n",i + 1);
                printf("time 1\n");
            }
        }
        printf("\n");
        }

    return 0;
}
