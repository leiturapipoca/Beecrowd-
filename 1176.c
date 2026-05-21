#include <stdio.h>

int main()
{
    unsigned int i,j;
   unsigned long long fib[60];
    fib[0]=0;
    fib[1]=1;
    
    for(i=2;i<=60;i++){
        fib[i]= fib[i - 2] + fib[i-1];
    }
unsigned int n,z,k;
scanf("%d", &n);
for(z=0;z<n;z++){
    scanf("%d",&k);
    printf("Fib(%d) = %llu\n", k, fib[k]);
}

    return 0;
}
