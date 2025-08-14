#include <stdio.h>
#include <stdlib.h>
int glob=1;
int compara(const void *a,const void *b){
    int ai = *(int*)a;
    int bi = *(int*)b;
    return ai - bi;
}
int main(){

    while(1){
        
        int n,m;
        scanf("%d %d",&n,&m);
        if(n==0 && m==0)
        break;
        int vet1[n];
        int vet2[m];

        for(int i=0;i<n;i++){
            scanf("%d",&vet1[i]);
        }
            

        for(int i=0;i<m;i++){
            scanf("%d",&vet2[i]);
        }
            

        qsort(vet1,n,sizeof(int),compara);
        printf("CASE# %d:\n", glob);
        glob++;
        for(int i=0;i<m;i++){
            int flag = 0;
            for(int j=0;j<n;j++){
                if(vet2[i]==vet1[j]){
                    printf("%d found at %d\n",vet2[i],j + 1);
                    flag++;
                    break;
                }
            }
            if(flag==0)
            printf("%d not found\n",vet2[i]);
        }
    }


    return 0;
}
