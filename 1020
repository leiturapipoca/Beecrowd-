#include <stdio.h>

int main()
{
   int n,dias,mes,ano;
    scanf("%d", &n);
    if(n<30){
        printf("0 ano(s)\n 0 mes(es)\n%d dia(s)\n", n);
    }
    else if(n>=30 && n<365){
        mes = n/30;
        dias = n - (mes*30);
         printf("0 ano(s)\n%d mes(es)\n%d dia(s)\n", mes,dias);
    }
    else{
        ano = n/365;
        mes = (n - (365*ano))/30;
        dias = (n - (365*ano)) - (mes*30);
        printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ano, mes,dias);
    }
    

    return 0;
}
