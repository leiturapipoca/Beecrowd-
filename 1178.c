#include <stdio.h>

int main()
{
double x,j;
int i;
double array[100];
scanf("%lf", &x);
array[0]=x;
printf("N[0] = %.4lf\n", x);
for(i=1;i<100;i++){
    array[i] = array[i - 1]/2.0;
    printf("N[%d] = %.4lf\n", i,array[i]);
}
return 0;
}
