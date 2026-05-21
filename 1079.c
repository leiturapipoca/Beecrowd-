#include <stdio.h>
 
int main() {
 
    int n,i=0;
    float a,b,c,med;
    scanf("%d", &n);
    
    for(i==0;i<n;i++){
     scanf("%f %f %f", &a,&b,&c);
     med = (a*2 + b*3 + c*5)/10.0;
     printf("%.1f\n", med);
     
     }
 
    return 0;
}
