#include <stdio.h>
#include <string.h>
#include <limits.h>

#define MAX 300

char cinema[MAX][MAX];
int prefix[MAX][MAX];


int getSum(int l1, int l2, int c1, int c2) {
    int total = prefix[l2][c2];
    if (l1 > 0) total -= prefix[l1 - 1][c2];
    if (c1 > 0) total -= prefix[l2][c1 - 1];
    if (l1 > 0 && c1 > 0) total += prefix[l1 - 1][c1 - 1];
    return total;
}

int main() {
    int R, C, K;
    
    while (1) {
        scanf("%d %d %d", &R, &C, &K);
        if (R == 0 && C == 0 && K == 0) 
        break;
        
        for (int i = 0; i < R; i++) {
            scanf("%s", cinema[i]);
        }
        memset(prefix, 0, sizeof(prefix));
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                prefix[i][j] = (cinema[i][j] == '.' ? 1 : 0);
                if (i > 0) prefix[i][j] += prefix[i - 1][j];
                if (j > 0) prefix[i][j] += prefix[i][j - 1];
                if (i > 0 && j > 0) prefix[i][j] -= prefix[i - 1][j - 1];
            }
        }

       
        int minArea = INT_MAX;

        for (int l1 = 0; l1 < R; l1++) {
            for (int l2 = l1; l2 < R; l2++) {
                int c1 = 0;
                for (int c2 = 0; c2 < C; c2++) {
                    while (c1 <= c2 && getSum(l1, l2, c1, c2) >= K) {
                        int area = (l2 - l1 + 1) * (c2 - c1 + 1);
                        if (area < minArea) minArea = area;
                        c1++;
                    }
                }
            }
        }
        printf("%d\n", minArea);
    }

    return 0;
}
