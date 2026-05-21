#include <stdio.h>

int freezes( long long int vet[], int i) {
	i++;

	if(vet[i - 1]==1) {
		return i - 1;
	}



	if(vet[i - 1]%2==0) {
		vet[i] = vet[i - 1]*0.5;


	}


	else {
		vet[i] = vet[i - 1]*3 + 1;

	}
	return freezes(vet,i);
}

int main() {
	while(1) {
		long long int vet[100000];

		int ice;
		scanf("%d",&ice);
		vet[0] = ice;
		if(ice==0) {
			return 0;
		}

		int cont = 0;
		int print=0;

		for(int j=0; j<=freezes(vet,cont); j++) {
			if (print<vet[j]) {
				print = vet[j];
			}
		}


		printf("%d\n", print);
	}
	return 0;
}
