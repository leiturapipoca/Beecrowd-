#include <stdio.h>

int main() {
 
  int n;
 int pi[15],par[5],impar[5];
 int pa=0;
 int im=0;
 
for(int i = 0; i<15;i++){
    scanf("%d", &n);
    pi[i]=n;
}
for(int i = 0; i<15;i++){
    
    if(pi[i]%2 == 0 && pa<5 ){
        par[pa] = pi[i];
        pa++;
    }
    if(pi[i]%2 !=0 && im<5){
        impar[im] = pi[i];
        im++;
    }
    if(pa==5){
        for(int j=0;j<5;j++){
            printf("par[%d] = %d\n", j, par[j]);
        }
        pa= 0;
    }
    if(im==5){
        for(int j=0;j<5;j++){
             printf("impar[%d] = %d\n", j, impar[j]);
        }
        im = 0;
    }
    
    
    }
  
     for(int j=0;j<im;j++){
        printf("impar[%d] = %d\n", j, impar[j]);
    }
    
    for(int j=0;j<pa;j++){
         printf("par[%d] = %d\n", j, par[j]);
    }
    
    
    
    
    


    return 0;
}
