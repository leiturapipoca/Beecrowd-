#include <string.h>
#include <stdlib.h>
#include <stdio.h>
typedef struct {
	char nome[102];
	 int poder;
	 int abates;
	 int mortes;
	 
} pontos;
int main()
{
	int n,i,j;
	scanf("%d",&n);
	getchar();
	pontos points[n];
	
	 for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d", points[i].nome, &points[i].poder, &points[i].abates, &points[i].mortes);
        getchar();
    }
	pontos vencedor = points[0];
	
		for(i=1; i< n; i++) {
			if(points[i].poder > vencedor.poder) {
				vencedor = points[i];

			}
			else {

				if(points[i].poder == vencedor.poder) {

					if(points[i].abates > vencedor.abates) {
						vencedor = points[i];
					}

					else {


						if(points[i].abates == vencedor.abates) {

							if(points[i].mortes < vencedor.mortes) {
								vencedor = points[i];
							}
							else {
								if(points[i].mortes == vencedor.mortes) {
									if (strcmp(points[i].nome, vencedor.nome) < 0) {
                        vencedor = points[i];
                    }
								}
							}
						}
					}
				}
			}
		}
	
	printf("%s\n",vencedor.nome);

	return 0;
}
