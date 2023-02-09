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



/* AULA 2
// programa que recolha o peso de tres boi e fale qual o mais gordo


#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int i;
    float bois[3] = {};
    int i_maior;
    // declarando e inicializando o vetor bois
  
    printf("Entre os valores do vetor\n");
  
    // loop de inserção dos valores no vetor
    for(i = 0 ; i <= 2; i++)
    {
        printf("Peso boi[%d]: ", i+1);
        scanf("%f", &bois[i]);
    }
    
    i_maior = 0;
    
    for(i = 0 ; i <= 2; i++)
    {
        if(bois[i] > bois[i_maior]){
            i_maior = i;
        }
    }
    
    // logica para encontrar valor maximo do vetor
    if(bois[0] > bois[1] && bois[0] > bois[2]){
            printf("O boi 1 é o mais pesado");
    }else if(bois[1] > bois[2]){
        printf("O boi 2 é o mais pesado");
    }else{
        printf("O boi 3 é o mais pesado");
    }
    
    
    return 0;
}
*/
