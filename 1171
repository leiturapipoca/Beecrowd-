#include <stdio.h>
#include <stdlib.h>


int ordem(const void *a, const void *b){
    int inta = *(int *)a;
    int intb = *(int *)b;
    return inta - intb;
}



int main()
{
    int i,j,n, cont=1;
    scanf("%d", &n);
    int array[n];
    cont = 1;
    for(i=0;i<n;i++){
        scanf("%d", &array[i]);
    }
qsort(array,n,sizeof(int),ordem);

for(i=0;i<n;i++){
    if(array[i]==array[i + 1]){
        cont++;
    }
    if(array[i]!=array[i + 1]){
        printf("%d aparece %d vez(es)\n", array[i],cont);
        cont=1;
    }
    
}
    return 0;
}
