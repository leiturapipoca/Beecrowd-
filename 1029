#include <stdio.h>
#include <stdlib.h>

int glob=0;
int fib(int n){
    glob++;
    if(n==1){
        return 1;
    } else if(n==0){return 0;}  else{

    return fib(n - 1) + fib(n - 2) ;
    } 
    



}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
         glob=0;
        int m;
        int sum=0;
        scanf("%d",&m);
        printf("fib(%d) = %d calls = %d\n",m,glob - 1,fib(m));
        


    }

    return 0;
}
