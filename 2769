#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
        while(scanf("%d",&n)!=EOF){
    int e1, e2, x1, x2;
      scanf("%d %d", &e1, &e2);
        
    int a1[1001], a2[1001];
    
      for (int i = 0; i < n; i++) {
            scanf("%d", &a1[i]);
        }
        
      for (int i = 0; i < n; i++) {
            scanf("%d", &a2[i]);
        }
        
        int t1[1001], t2[1001];
        
      for (int i = 0; i < n - 1; i++) {
            
            scanf("%d", &t1[i]);
        }
        
      for (int i = 0; i < n - 1; i++) {
          
            scanf("%d", &t2[i]);
        }
        
        scanf("%d %d", &x1, &x2);
        
    int dp1[1001], dp2[1001];
        dp1[0] = e1 + a1[0];
        dp2[0] = e2 + a2[0];
        
        
        for (int i = 1; i < n; i++) {
            
            int time1 = dp1[i - 1] + a1[i];
            
            int time2 = dp2[i - 1] + t2[i - 1] + a1[i];
            
            
            if(time1 < time2){
                dp1[i] = time1;
            }
            else{
                dp1[i] = time2;
            }
            
            time1 = dp2[i - 1] + a2[i];
            time2 = dp1[i - 1] + t1[i - 1] + a2[i];
        
            if(time1<time2){
                dp2[i] = time1;
            }
            else{
                dp2[i] = time2;
            }
        }
        
        
        int result1 = dp1[n - 1] + x1;
        
        int result2 = dp2[n - 1] + x2;
        
        int result; 
        if(result1<result2){
            result = result1;
        }
        else{
            result=result2;
        }
        
        printf("%d\n", result);
    
        }
    return 0;
}
