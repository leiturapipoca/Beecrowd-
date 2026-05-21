#include <stdio.h>
#include <stdlib.h> 

long long int calc(long long int x){
    if(x > 0){
        return x;
    }else{
        return -x;
    }
}


int main() {
    int n;
    while(scanf("%d", &n) != EOF){
        long long int e = 0, d = 0;
        int m = n/2;
        int trab[n];
        
        for(int i = 0; i < n; i++){
            scanf("%d", &trab[i]);
            if(i <= m){
                e += trab[i];
            }else{
                d += trab[i];
            }
        }

        long long int dif = e - d;
        if(dif < 0){
            while(calc(dif) > calc(dif+(2*trab[m+1]))){
                dif += (2*trab[m+1]);
                m++;
            }
        }else{
            while(calc(dif) > calc(dif-(2*trab[m]))){
                dif -= (2*trab[m]);
                m--;
            }
        }
        printf("%lld\n", calc(dif));
    }

    return 0;
}
