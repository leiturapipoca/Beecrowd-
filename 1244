#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct{
    char palavra[52];
    int tamn;
}Struct;

void bubblesort(Struct word[], int p){
    int l,k;
    Struct temp;
    for(l=0;l<p;l++){
        for(k=0;k< p - 1;k++){
            if(word[k].tamn<word[k + 1].tamn){
                temp = word[k];
                word[k] = word[k + 1];
                word[k + 1]= temp;
            }
        }
    }
}

int main()
{
   int n,i;
   scanf("%d", &n);
   
   for(i=0;i<n;i++){
       
       int h=0,v=0;
       Struct word[1000];
       char str[1000];
       char delimitadores[2] = " ";
       getchar();
       scanf("%[^\n]s",str);
       
       char * resultado = strtok(str,delimitadores);
       while(resultado!=NULL){
           
           strcpy(word[h].palavra,resultado);
           word[h].tamn = strlen(word[h].palavra);
           resultado = strtok(NULL, delimitadores);
           h++;
       }
       
       bubblesort(word,h);
       
       for(v=0;v<h;v++){
           if(v!= h - 1){
           printf("%s ", word[v].palavra);
           word[v].palavra[0] = '\0';
           }
           else{
               printf("%s\n", word[v].palavra);
               word[v].palavra[0] = '\0';
               
           }
       }
   }


    return 0;
}
