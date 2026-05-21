#include <stdio.h>
#include <stdlib.h>


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

int main() {
    int n, i,z;
    scanf("%d", &z);
    
 

    scanf("%d", &n);

    
    int array[n];

    
    for (i = 0; i < n; i++) {
      
        scanf("%d", &array[i]);
    }

    
    qsort(array, n, sizeof(int), comp);

    
    int lido = array[0], cont = 1;

    for (i = 1; i < n; i++) {
        if(array[i]==lido){
            cont = cont;
        }
        
        
        else if (array[i] != lido) {
            cont++;
            lido = array[i];
        }
    }
            printf("%d\n", z - cont);

    return 0;
}
