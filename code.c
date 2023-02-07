#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a, b;

    printf("Digite o valor de A\n");
    scanf("%d", &a);
    printf("Digite o valor de B\n");
    scanf("%d", &b);
    
    
    int c = a + b;
    
    if (c % 2 == 0){
        printf("C é par");
    }else{
        printf("C é impar");
    }
    

    return 0;
}