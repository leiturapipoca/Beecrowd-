#include <stdio.h>
 
int main() {
 
    double N1,N2,N3,N4,MEDIA,EXAM,MED2;
    
    scanf("%lf %lf %lf %lf %lf", &N1,&N2,&N3,&N4,&EXAM);
    
    MEDIA=((N1*2)+(N2*3)+(N3*4)+(N4*1))/10.0;
    MED2=(EXAM+MEDIA)/2.0;
    
    if(MEDIA>=7.0){
        printf("Media: %.1lf\n", MEDIA);
        printf("Aluno aprovado.\n");
        
}
    else if(MEDIA<5.0){
        printf("Media: %.1lf\n", MEDIA);
        printf("Aluno reprovado.\n");
        
}
    else if(MEDIA>=5.0 && MEDIA<=6.9 && MED2>=5.0){ 
    
         printf("Media: %.1lf\n", MEDIA);
         printf("Aluno em exame.\n");
         printf("Nota do exame: %.1lf\n", EXAM);
         printf("Aluno aprovado.\n");
         printf("Media final: %.1lf\n", MED2);
}
   else {
   printf("Media: %.1lf\n", MEDIA);
   printf("Aluno em exame.\n");
   printf("Nota do exame: %.1lf\n", EXAM);
   printf("Aluno reprovado.\n");
   printf("Media final: %.1lf\n", MED2);    
}
    return 0;
}
