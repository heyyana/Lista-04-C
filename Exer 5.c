/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int Menor(int n1, int n2);

int main()
{
    int n1, n2;
    printf("Informe dois valores: ");
    scanf("%d %d", & n1, & n2);
    Menor(n1, n2);
}

int Menor(int n1, int n2){
    if(n1 < n2){
        printf("%d é menor", n1);
    }
    else{
        printf("%d é menor", n2);
    }
}
