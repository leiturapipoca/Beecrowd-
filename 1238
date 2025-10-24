#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n, i;
    scanf("%d", &n); 
    getchar(); 

    for (i = 0; i < n; i++) {
        char str1[51], str2[51]; 
        scanf("%s %s", str1, str2); 
        getchar(); 

        int size1 = strlen(str1);
        int size2 = strlen(str2);
        int tam = (size1 > size2) ? size1 : size2; 
        char resp[101] = "\0"; 

        
        for (int j = 0; j < tam; j++) {
            if (j < size1) {
                resp[strlen(resp)] = str1[j]; 
            }
            if (j < size2) {
                resp[strlen(resp)] = str2[j]; 
            }
        }

        printf("%s\n", resp); 
    }

    return 0;
}
