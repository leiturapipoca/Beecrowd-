#include <stdio.h>
#include <string.h>
int main() {
 int n,i,j;
  char dancinha[51];
  dancinha[0] = '\0';
 while(scanf("%[^\n]s",dancinha)!=EOF){
     
     getchar();
     int fix = 0; 
     
     
    
     
     
     int size= strlen(dancinha);
     for(i=0;i<size;i++){
         if(dancinha[i]>=65 && dancinha[i]<=90 && fix == 0 ){
             fix ++;
         }
         else if(dancinha[i]>=65 && dancinha[i]<=90 && fix == 1){
             dancinha[i] = dancinha[i] + 32;
             fix --;
         }
         else if(dancinha[i]>=97 && dancinha[i]<=122 && fix == 0){
             dancinha[i] = dancinha[i] - 32;
             fix++;
         }
         else if(dancinha[i]>=97 && dancinha[i]<=122 && fix == 1){
             fix --;
         }
     }
     printf("%s\n",dancinha);
 }
   
 
    return 0;
}
