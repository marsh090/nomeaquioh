/******************************************************************************

Criar Estruturas em C

Função para calcular area de triangulo(1), quadrado(2), retangulo(3), circulo(4), trapezio(5)

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*typedef struct aluno{
    int matricula;
    char nome[30];
    float nota;
}aluno;*/

typedef struct forma{
    int tipo;
    float area;
    float perimetro;
}forma;


float aTriang (float b, float h){
    return (b*h)/2;
}
float pTriang (float la, float lb, float lc){
    return la + lb + lc;
}

float aQuad (float l){
    return l*l;
}
float pQuad (float l){
    return l*4;
}

float aRetang (float b, float h){
    return b*h;
}
float pRetang (float la, float lb){
    return la*2 + lb*2;
}

float aCirc (float r){
    return 3.14*(r*r);
}
float pCirc (float r){
    return 6.28*r;
}

float aTrapezio (float bma, float bme, float h){
    return ((bma + bme)*h)/2;
}
float pTrapezio (float la, float lb, float lc, float ld){
    return la + lb + lc + ld;
}

float calcula_forma_area(int tipo){
    float res, a, b, c;
    
    switch(tipo){
        case 1:
            printf("Lado do triangulo: ");
            scanf("%f", &a);
            printf("Altura do triangulo: ");
            scanf("%f", &b);
            res = aTriang(a, b);
            return res;
            break;
        case 2:
            printf("Lado do quadrado: ");
            scanf("%f", &a);
            res = aQuad(a);
            return res;
            break;
        case 3:
            printf("Base do retangulo: ");
            scanf("%f", &a);
            printf("Altura do retangulo: ");
            scanf("%f", &b);
            res = aRetang(a, b);
            return res;
            break;
        case 4:
            printf("Raio: ");
            scanf("%f", &a);
            res = aCirc(a);
            return res;
            break;
        case 5:
            printf("Lado Maior: ");
            scanf("%f", &a);
            printf("Lado Menor: ");
            scanf("%f", &b);
            printf("Lado Altura: ");
            scanf("%f", &c);
            res = aTrapezio(a, b, c);
            return res;
            break;
    }
}
float calcula_forma_perim(int tipo){
    float res, a, b, c, d;
    
    switch(tipo){
        case 1:
            printf("Lado1 do triangulo: ");
            scanf("%f", &a);
            printf("Lado2 do triangulo: ");
            scanf("%f", &b);
            printf("Lado2 do triangulo: ");
            scanf("%f", &c);
            res = pTriang(a, b, c);
            return res;
            break;
        case 2:
            printf("Lado do quadrado: ");
            scanf("%f", &a);
            res = pQuad(a);
            return res;
            break;
        case 3:
            printf("Base do retangulo: ");
            scanf("%f", &a);
            printf("Altura do retangulo: ");
            scanf("%f", &b);
            res = pRetang(a, b);
            return res;
            break;
        case 4:
            printf("Raio: ");
            scanf("%f", &a);
            res = pCirc(a);
            return res;
            break;
        case 5:
            printf("Lado1: ");
            scanf("%f", &a);
            printf("Lado2: ");
            scanf("%f", &b);
            printf("Lado3: ");
            scanf("%f", &c);
            printf("Lado4: ");
            scanf("%f", &d);
            res = pTrapezio(a, b, c, d);
            return res;
            break;
    }
}


int main()
{
    /*
    struct aluno x = {2, "Joao", 5};
    struct aluno y = {3, "Pedro"};
    printf("O aluno %s,  de matricula %d,  tem a nota %.2f\n", x.nome, x.matricula, x.nota);
    printf("Digite a nota do aluno %s,  de matricula %d\n", y.nome, y.matricula);
    scanf("%f", &y.nota);
    printf("A nota do aluno %s,  de matricula %d é %.2f", y.nome, y.matricula, y.nota);
    */
    
    float resultA, resultP;
    int tipo;
    
    struct forma x = {};
    
    
    
    printf("Digite o tipo da estrutura:\ntriangulo(1)\nquadrado(2)\nretangulo(3)\ncirculo(4)\ntrapezio(5)\n");
    scanf("%i", &x.tipo);
    resultA = calcula_forma_area(x.tipo);
    x.area = resultA;
    resultP = calcula_forma_perim(x.tipo);
    x.perimetro = resultP;
    printf("Area = %.2f\nPerimetro = %.2f", x.area, x.perimetro);

    
    

    return 0;
}
