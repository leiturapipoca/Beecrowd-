#include<stdlib.h>
#include <stdio.h>




int comp(const void *a, const void *b) {
    int va = *(int *)a;
    int vb = *(int *)b;
    if (va < vb) {
        return -1;
    } else if (va == vb) {
        return 0;
    } else {
        return 1;
    }
}


int main()
{
    int n,m, i;
    while(1){
    
    scanf("%d %d", &n, &m);
    if(n==0 && m==0){
        break;
    }
    
    int pres[m];
    
    for(i=0;i<m;i++){
    
    scanf("%d", &pres[i]);
}
    qsort(pres, m, sizeof(int), comp);
   int cont = 0;
    for(i=0;i<m;i++){
        if(pres[i] == pres[i - 1]){
            cont++;
            while(i + 1< m && pres[i] == pres[i + 1]) {
            i++;
                
            }
            
        }
    }
    printf("%d\n", cont);
    cont=0;
    
}
    
    
    
    return 0;
}
