/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int PosNeg(int num);

int main()
{
    int num;
    printf("Informe um número: ");
    scanf("%d", & num);
    PosNeg(num);
}

int PosNeg(int num){
    if(num < 0){
        printf("O número é negativo", num);
    }
    else{
        printf("O número é positivo", num);
    }
}