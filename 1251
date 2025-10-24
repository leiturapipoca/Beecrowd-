#include <string.h>
#include <stdio.h>

typedef struct{
    int prior;
    char letras;
}Linhas;

void bubblesort(char string[], int p){
    int g,h;
    char temp;
    for(g=0;g<p;g++){
        for(h=0;h< p - 1;h++){
            if(string[h]>string[h + 1]){
                temp = string[h];
                string[h] = string[h + 1];
                string[h + 1]= temp;
            }
        }
    }
}

void bubblesort2(Linhas str[], int p){
    int g,h;
    Linhas temp;
    for(g=0;g<p;g++){
        for(h=0;h< p - g - 1;h++){
            if((str[h].prior>str[h + 1].prior) || (str[h].prior == str[h + 1].prior && str[h].letras < str[h + 1].letras)){
                temp = str[h];
                str[h] = str[h + 1];
                str[h + 1]= temp;
            }
        }
    }
}


int main()
{
    
    char string[10001];
    int freq=0;
    while(scanf("%s",string)!=EOF){
        if(freq!=0){
        printf("\n");
        }
        Linhas str[10000];
        int i,j;
        int size = strlen(string);
        bubblesort(string,size);
        str[0].letras = string[0];
        str[0].prior = 1;
        i=0;
        for(j=1;j<size;j++){
            if(string[j]==string[j - 1]){
                str[i].prior++;
            }
            else{
                i++;
                str[i].letras = string[j];
                str[i].prior = 1;
            }
        }
        bubblesort2(str,i + 1);
        for(j=0;j<=i;j++){
            printf("%d %d\n",str[j].letras,str[j].prior);
        }
        freq++;
    }

    return 0;
}
