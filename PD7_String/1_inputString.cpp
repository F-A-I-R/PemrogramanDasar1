#include <stdio.h>

int main(){
    
    char karakter[5];
    printf("Masukkan karakter :");
    scanf("%s", karakter);
    printf("%s \n",karakter);
    
    
    char kar[1];
    printf("Masukkan karakter :");
    gets(kar);
    printf("%s \n",kar);
    

    char kar[10];
    printf("Masukkan karakter : ");
    fgets(kar, sizeof kar, stdin);
    printf("%s \n", kar);
    
}