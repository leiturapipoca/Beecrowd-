#include <stdio.h>
#include <string.h>
int main()
{
    
    char str1[100];
    char str2[100];
    char str3[100];
    scanf("%s", str1);
    scanf("%s", str2);
    scanf("%s", str3);
    
    
    if(str1[0]== 'v' && str2[0]== 'a'){
        if(str3[0]== 'c'){
            printf("aguia\n");
        }
        else{
            printf("pomba\n");
        }
    }
    else if(str1[0]== 'v' && str2[0]== 'm'){
        if(str3[0]== 'o'){
            printf("homem\n");
        }
        else{
            printf("vaca\n");
        }
    }
    
    else if(str2[0]== 'i'){
        if(str3[2]== 'm'){
            printf("pulga\n");
        }
        else{
            printf("lagarta\n");
        }
        
    }
    
    else{
        if(str3[0]== 'h'){
            printf("sanguessuga\n");
        }
        else{
            printf("minhoca\n");
        }
    }
    return 0;
}
