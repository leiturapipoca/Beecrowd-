#include <stdio.h>
 
int main() {
 
    int cv, ce, cs;
    int fv, fe,fs;
    int pvc, pc, pvf, pf;
    /**
     pvc= pontos por vitoria
     pef= pontos por empate
     */
    
    scanf("%d %d %d %d %d %d", &cv, &ce, &cs, &fv, &fe, &fs);
    pvc = cv * 3;
    pvf=fv * 3;
    pc= pvc + ce;
    pf= pvf + fe;
    
    if(pc > pf){
        printf("C\n");
    }
    else if(pf>pc){
        printf("F\n");
    }
    else{
     pf += fs;
     pc += cs;
     
     if(pc>pf){
         printf("C\n");
     }
    else if(pf>pc){
        printf("F\n");
    }
    else{
        printf("=\n");
    }
    }   
    
    return 0;
}
