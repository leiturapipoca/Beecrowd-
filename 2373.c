#include <stdio.h>

int main()
{
    int band,l,c,i,quebrados=0;
    scanf("%d", &band);
    for(i=1;i<=band;i++){
        scanf("%d %d", &l, &c);
        if(c==l || c>l){
        }
        if(l>c){
           quebrados = quebrados + c;
       }
        
        
    }
    printf("%d\n", quebrados);
    
    
    
    
    return 0;
}
