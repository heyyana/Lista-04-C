/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

float delta(float a, float b, float c);
float raizReal(float a, float b, float delta);
float raizImaginaria(float a, float b, float delta);

int main()
{
    float a, b, c, d;
    printf("Informe os coeficientes a, b, e c da equação: ");
    scanf("%g %g %g", & a, & b, & c);
    
    d = delta(a, b, c);
    
    if(a == 0){
        printf("O coeficiente tem q ser diferente de zero!\n");
    }
    
    if(d >= 0){
        float x = raizReal(a, b, d);
        float x1 = raizReal(a, b, d);
        printf("As raízes da equação são reais e são: %g %g", x, x1);
    }
    else{
        float parteReal = -b / (2 * a);
        float parteImaginaria = raizImaginaria(a, b, d);
        printf("As raízes da equação são complexas e são: %g + %g e %g - %g", parteReal, parteImaginaria, parteReal, parteImaginaria);
    }
}

float delta(float a, float b, float c){
    return b*b - 4 * a * c;
}

float raizReal(float a, float b, float delta){
    return (-b + sqrt(delta)) / (2  * a);
}

float raizImaginaria(float a, float b, float delta){
    return sqrt(-delta) / (2 * a);
}
