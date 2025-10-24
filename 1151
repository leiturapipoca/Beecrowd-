#include <stdio.h>

int soma(int num,int seq[]){
   int i = 0;
   int j=2;
   
   for(j;j<num;j++){
   
       seq[j] = + seq[j - 1] + seq[j - 2];
   
    
   }
    
}

int main()
{
    int seq[50];
    for(int i=0;i<50;i++){
        seq[i]=0;
    }
    seq[0]= 0;
    seq[1] = 1;
    int fib;
    scanf("%d",&fib);
if(fib==0){
    printf("0");
}
else if(fib==1){
    printf("0 1");
}

else{
    soma(fib,seq);
    for(int i=0;i<fib;i++){
        if(i== fib - 1){
            printf("%d\n",seq[i]);
        }
        else{
            printf("%d ",seq[i]);
        }
    }
    
}
    return 0;
}
