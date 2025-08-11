#include <stdio.h>
#include <math.h>
#include<stdlib.h>

int main() {
 int i,j,l,c, ash, ketchum, pika, chu, valor = 0;
 while(scanf("%d %d", &i,&j)!= EOF){
 int m[i][j];
for(l=0;l<i;l++){
    for(c=0;c<j;c++){
       scanf("%d", &m[l][c]); 
    }
    
}
for(l=0;l<i;l++){
    for(c=0;c<j;c++){
       if(m[l][c] == 2){
           pika = l;
           chu = c;
       }
       else if(m[l][c] == 1){
           ash = l;
           ketchum = c;
       }
    }
    
}
  valor = abs(pika - ash) + abs(chu - ketchum);
printf("%d\n", valor);
}
    return 0;
}
