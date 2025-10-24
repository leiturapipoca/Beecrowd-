#include <string.h>
#include <stdio.h>

int main() {
    char str[101]; 
    int z;

    while (scanf("%s", str) != EOF) {
        scanf("%d", &z);
        getchar(); 
        int quantidade = 0;
        int o = 0;
        int size = strlen(str);

        
        for (int i = 0; i < size; i++) {
            if (str[i] == 'W') {
                quantidade++;
                o++;
            }
        }

        
        int count_r = 0;
        for (int i = 0; i < size; i++) {
            if (str[i] == 'R') {
                count_r++;
            } else {
                if (count_r > 0) {
                    quantidade += (count_r + z - 1) / z; // Arredondar para cima
                    count_r = 0;
                }
            }
        }
        
        if (count_r > 0) {
            quantidade += (count_r + z - 1) / z; // Arredondar para cima
        }

        
        if (o == size) {
            printf("%d\n", quantidade);
        } else {
            printf("%d\n", quantidade);
        }
    }

    return 0;
}
