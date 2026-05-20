#include <stdio.h>

int energia(int n, int m) {
    int r = 0;
    for (int i = 2; i <= n; i++)
        r = (r + m) % i;
    return r;
}

int main(){
     int N;
    while (scanf("%d", &N) && N != 0) {
        int m = 1;
        while (1) {
            int last = (energia(N - 1, m) + 1) % N;
            if (last == 12) 
            break; 
            m++;
        }
        printf("%d\n", m);
    }
}
