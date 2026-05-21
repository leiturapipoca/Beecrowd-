#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    int N;
    char buffer[100000]; 
    
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &N);

    for (int i = 0; i < N; i++) {
        fgets(buffer, sizeof(buffer), stdin); 

        char **items = NULL; 
        int count = 0;      

        char *token = strtok(buffer, " \n");
        while (token != NULL) {
            
    int found = 0;
        for (int j = 0; j < count; j++) {
            if (strcmp(items[j], token) == 0) {
                    found = 1;
                    break;
                }
            }
            if (!found) {
              
             items = realloc(items, (count + 1) * sizeof(char *));
             items[count] = strdup(token);
             count++;
            }
            token = strtok(NULL, " \n");
        }

       
        if (count > 0) {
            qsort(items, count, sizeof(char *), compare);
        }

        
        for (int j = 0; j < count; j++) {
            if (j > 0) {
                printf(" ");
            }
            printf("%s", items[j]);
            free(items[j]); 
        }
        printf("\n");

        free(items); 
    }

    return 0;
}
