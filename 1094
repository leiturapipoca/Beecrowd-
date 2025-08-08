#include <stdio.h>
 
int main() {
 
    int i=0,n, qtd;
    float pc,ps,pr;
    char f;
    float total=0;
    float tc=0,tr=0,ts=0;
    
   scanf("%d", &n);
   for(i=0;i<n;i++){
       scanf("%d %c", &qtd, &f);
       if(f == 'C'){
           tc = tc + qtd;
       }
       else if(f == 'R'){
           tr = tr + qtd;
       }
       else if(f == 'S'){
           ts = ts + qtd;
       }
       
   }
   
   total = tc + tr + ts;
   pc = (tc*100)/total;
   pr = (tr*100)/total;
   ps = (ts*100)/total;
   printf("Total: %.0f cobaias\n", total);
   printf("Total de coelhos: %.0f\n", tc);
   printf("Total de ratos: %.0f\n", tr);
   printf("Total de sapos: %.0f\n", ts);
   printf("Percentual de coelhos: %.2f %%\n", pc);
   printf("Percentual de ratos: %.2f %%\n", pr);
   printf("Percentual de sapos: %.2f %%\n", ps);
    return 0;
}
