#include <stdio.h>

int main() {
    long long int a, b, l, c, x = 0, y = 0;

    scanf("%lld %lld", &a, &b);
    long long int m[a][b];

    for (l = 0; l < a; l++) {
        for (c = 0; c < b; c++) {
            scanf("%lld", &m[l][c]);
        }
    }

    for (l = 1; l < a - 1; l++) {
        for (c = 1; c < b - 1; c++) { 
            if (m[l][c] == 42 && 
                m[l - 1][c - 1] == 7 && m[l - 1][c] == 7 && m[l - 1][c + 1] == 7 &&
                m[l][c - 1] == 7 && m[l][c + 1] == 7 &&
                m[l + 1][c - 1] == 7 && m[l + 1][c] == 7 && m[l + 1][c + 1] == 7) {
                x = l + 1;
                y = c + 1;
                break;
            }
        }
        if (x != 0 && y != 0) break; 
    }

   
    printf("%lld %lld\n", x, y);

    return 0;
}
