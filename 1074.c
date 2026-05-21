#include <stdio.h>
 
int main() {
 
    int n,i = 0;
    int num;
    scanf("%d", &n);
    
    while(i<n){
        scanf("%d", &num);
        
        if(num==0){
            printf("NULL\n");
            }
        else{
            if((num%2==0 && num%(-2)==0) && num<0 ){
                printf("EVEN NEGATIVE\n");
            }
            else if((num%2==0 && num%(-2)==0) && num>0 ){
                printf("EVEN POSITIVE\n");
            }
            else if((num%2!=0 && num%(-2)!=0) && num>0 ){
                printf("ODD POSITIVE\n");
            }
            else{
                printf("ODD NEGATIVE\n");
            }
        
            }
        i++;
    }
 
    return 0;
}
