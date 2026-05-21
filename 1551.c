#include <string.h>
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    while(n>0){
        char string[1001];
        scanf("%[^\n]s",string);
        getchar();
        int size=strlen(string);
        int vet[26];
        for(int i=0;i<=26;i++){
         vet[i]= 0;
        }
        for(int i=0;i<size;i++){
            if(vet[string[i] - 97]==0 && string[i]>=97 && string[i]<=122){
                vet[string[i] - 97]++;
            }
        }
        int cont=0;
        for(int i=0;i<26;i++){
            if(vet[i]!=0){
                cont++;
            }
        }
        if(cont>=26){
            printf("frase completa\n");
        }
        else if(cont<26 && cont >=13){
            printf("frase quase completa\n");
            
        }
        else if(cont<13){
            printf("frase mal elaborada\n");
        }
        n--;
        string[0]='\0';
    }

    return 0;
}
