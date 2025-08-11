#include <stdio.h>
 
int main() {
 
int n,i,j;

 while(scanf("%d", &n)!= EOF){

    

int m[n][n];
for(i = 0;i<n;i++){
    for(j=0;j<n;j++){
    if(j==i){
        m[i][j] = 1;
    }
    
    else{
    m[i][j] = 3;
        }
        }
        }
for(i = 0;i<n;i++){
            m[i][n - (i + 1) ] = 2;
    }
for(i = 0;i<n;i++){
    for(j=0;j<n;j++){
    printf("%d", m[i][j]);
    }
    printf("\n");
    }
}
return 0;
}
