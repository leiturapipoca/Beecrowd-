#include <stdio.h>
 
int main() {
 
    int i=0, soma, x, y, n,temp, termos;
    scanf("%d", &n);
    while(i<n){
        scanf("%d %d", &x, &y);
        
        if(x>y){
            temp=y;
            y=x;
            x=temp;
        }
        
        if(x==y || y - x == 1){
            printf("0\n");
        
            
        }
        
     else {
         
         
         if(x%2==0 && y%2!=0){
         x++;
         y = y - 2;
         }
     else if(y%2==0 && x%2!=0){
         y--;
         x = x + 2;
     }
     else if(x%2!=0 && y%2!=0){
         y = y - 2;
         x = x + 2;
     }
     else if(x%2==0 && y%2==0){
         x++;
         y--;
     }
     
     
     termos = ((y - x)/2.0)+ 1;
     soma = (((y + x)*termos)/2.0);
     printf("%d\n", soma);
        
    }
    i++;
    }
    return 0;
}
