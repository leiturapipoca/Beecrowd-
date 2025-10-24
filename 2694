#include <string.h>
#include <stdio.h>

int main()
{

	int n,i,j;
	scanf("%d",&n);
	getchar();
	for(i=0; i<n; i++) {
		char str[15];

		scanf("%s",str);
		getchar();


		int controle = 1;
		int soma = 0;
		for(j=12; j>=0; j--) {

			if(str[j]>= 48 && str[j]<=57) {

				if(str[j - 1]>=48 && str[j - 1]<=57 && j!=0) {
					soma = soma + (str[j] - 48)*controle;
					controle = controle*10;
				}
				else {
					soma = soma + ((str[j] - 48)*controle);
					controle = 1;
				}


			}



		}


		printf("%d\n", soma);
	}


	return 0;
}
