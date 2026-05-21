#include <stdio.h>
 
int main() {
 
    int c=1,n, ax, ay, bx, by, cy, cx, dx, dy, rx, ry;
    scanf("%d", &n);
    
    while(c<=n){
        scanf("%d %d %d %d %d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy, &rx, &ry);
        int ans = (rx >= ax && rx >= dx && rx <= cx && rx <= bx && ry >= ay && ry >= by && ry <= dy && ry <= cy);
        
        printf("%d\n", ans);  
        c++;
    }
   
    return 0;
} 
