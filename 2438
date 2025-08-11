#include <stdio.h>

#define MOD 8
#define MAX 1000000

int main() {
    int N,z;
    scanf("%d", &N);

    int arr[MAX];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    
    long long count[MOD];
    for (int i = 0; i < MOD; i++) {
        count[i] = 0; 
    }
    count[0] = 1; 

    long long result = 0;
    int prefixSum = 0;

    for (int i = 0; i < N; i++) {
        
        prefixSum = (prefixSum + arr[i]) % MOD;
        if (prefixSum < 0) prefixSum += MOD;

      
        result += count[prefixSum];

        z++;
        count[prefixSum]++;
    }

    printf("%lld\n", result);

    return 0;
}
