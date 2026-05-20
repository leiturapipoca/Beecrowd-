#include <stdio.h>


int MDC(int a, int b){
    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}

int main() {
    
    int n;
    scanf("%d", &n); 

    for (int i = 0; i < n; i++) {
        int F1, F2;
        scanf("%d %d", &F1, &F2); 

    int mdc = MDC(F1, F2);

        
    printf("%d\n", mdc);
    }

    return 0;
}
