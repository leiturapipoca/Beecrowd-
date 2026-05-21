#include <string.h>
#include <stdio.h>

int main()
{
    int n,c=0;
    scanf("%d", &n);
    while(c<n){
       int k,i=0;
       scanf("%d", &k);
       char lingua[100000];
       char sla[21];
       for(i=0;i<k;i++){
       char str[21];
       scanf("%s", str);
       lingua[i] = str[0];
       strcpy(sla,str);
        }
        
      char l = lingua[0];
      int cont=0;
      
        for(i=0;i<k;i++){
            
            if(lingua[i]!= l ){
                cont++;
            }
        }
       if(cont!=0){
           printf("ingles\n");
       }
       else{
           printf("%s\n",sla);
       }
       
       
        c++;
    }

    return 0;
}
