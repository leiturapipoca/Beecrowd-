#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int ww, mline, CperL;

    while (scanf("%d", &ww) != EOF) {
        scanf("%d", &mline);
        scanf("%d", &CperL);
        
        int i;
        char text[ww][1000];
        int espacos = 0;
        int size = 0;
        int quebra = 0;
        int tot_linhas = 1;

        for (i = 0; i < ww; i++) {
            scanf("%s", text[i]);
            
            size = strlen(text[i]);

          
            if (quebra > 0) {
                quebra++; 
            }

            quebra += size; 
            
            if (quebra > CperL) {  
                tot_linhas++;
                quebra = size; 
            }
        }

        
        int pag_tot = tot_linhas / mline;
        if (tot_linhas % mline != 0) {
            pag_tot++;
        }

        printf("%d\n", pag_tot);
    }

    return 0;
}
