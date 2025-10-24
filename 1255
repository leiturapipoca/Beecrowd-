#include <string.h>
#include <stdio.h>



    typedef struct{
        char letra;
        int freq;
    } Letra;
    
    char min(char ch){
        if(ch >= 65 && ch <=90){
            ch = ch + 32;
        }
        return ch;
}
int main(){
    
    int n;
    scanf("%d", &n);
    getchar();
    
    while(n>0){
        char str[10000];
        scanf("%[^\n]s",str);
        getchar();
        int i, size = strlen(str);
        Letra letras[26];
        for(i=0;i<26;i++){
            letras[i].letra = 'a' + i;
            letras[i].freq = 0;
        }
        
        for(i=0;i<size;i++){
            if((str[i]>=65 && str[i]<=90) || str[i]>=97 && str[i]<=122){
                char minuscula = min(str[i]);
                letras[minuscula - 'a'].freq++;
            }
        }
        int appear = 0;
        for(i=0;i<26;i++){
            if(letras[i].freq>appear){
                appear = letras[i].freq;
            }
        }
        for(i=0;i<26;i++){
            if(letras[i].freq==appear){
                printf("%c",letras[i].letra);
            }
        }
        printf("\n");
        
        n--;
    }
    
    
    
    
    
    
    

    return 0;
}
