#include <stdio.h>
 
int main() {
 
    int n;
    int positivo,i;
    positivo=0;
    for(i==0;i<6;i++){
        scanf("%f", &n);
        if(n>0){
            positivo++;
        }
    }
    printf("%d valores positivos\n", positivo);
  
    return 0;
}
