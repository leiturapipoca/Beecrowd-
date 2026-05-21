#include <string.h>
#include <stdio.h>

int main()
{
	int n,i,j,z;
	scanf("%d",&n);
	getchar();
	for(i=0; i<n; i++) {
		char str[10000] = "\0";
		int jump;
		scanf("%s",str);
		getchar();
		scanf("%d",&jump);
		getchar();
        int size = strlen(str);
        char novo[51] = "\0";
        for(j=0;j<size;j++){
            
            str[j] = str[j] - jump;
            if(str[j]<'A'){
                str[j] = str[j] + 26;
            }
        }
printf("%s\n",str);

}

	return 0;
}
