#include <stdio.h>
 
int main() {
 
    int X;
    double Y, CONSUMO;
    scanf("%d %lf", &X,&Y);
    CONSUMO=X/Y;
    printf("%.3lf km/l\n", CONSUMO);
    
 
    return 0;
}
