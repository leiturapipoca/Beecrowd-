#include <stdio.h>

int main()
{
   int n,i,j,cont,alt;
   while(1){
   scanf("%d", &n);
   
   if(n==0){
       break;
   }
   
   for(i=0;i<n;i++) {
        int array[5];
       for(j=0;j<5;j++) {
           scanf("%d", &array[j]);
      if(array[j]<=127){
            alt = j;
            cont++;
           }
       }
    if(cont!=1){
        printf("*\n");
    }
    
    else{
        switch (alt){
            case 0:
            printf("A\n");
            break;
            case 1:
            printf("B\n");
            break;
            case 2:
            printf("C\n");
            break;
            case 3:
            printf("D\n");
            break;
            case 4:
            printf("E\n");
            break;
        }
    }
    cont=0;
   }
   }
    return 0;
}
