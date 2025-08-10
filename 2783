#include <stdio.h>
#include <stdlib.h>

int org( const void *a, const void *b){
    int va = *(int *)a;
    int vb = *(int *)b;
    if(va<vb){
        return -1;
    }
    if(va>vb){
        return 1;
    }
    return 0;
    
}


int main()
{
    //n = espaços no album
    //c = espaços reservados para figurinhas carimbadas
    //m = figurinhas obtidas
    int n,c,m,i = 0,normal, valor = 0;
    
    scanf("%d %d %d", &n, &c, &m);
    int carim[c];
    int obt[m];
   
    
     for(i = 0; i<c;i++){
         
         scanf("%d", &carim[i]);
     }
    qsort(carim,c,sizeof(int),org);
    for(i = 0; i<m;i++){
        
         scanf("%d", &obt[i]);
        
    }
     qsort(obt,m,sizeof(int),org);
     int j = 0;
     i = 0;
     
     while(i<m && j<c){
         if(obt[i]==carim[j]){
             j++;
             valor++;
         }
         else if(obt[i]<carim[j]) {
             i++;
         }
         else{
             j++;
         }
     }
     int carimbadas;
     carimbadas = c - valor;
     printf("%d\n", carimbadas);
    return 0;
}
