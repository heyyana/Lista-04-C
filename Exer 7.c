/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int Menor(int n1, int n2, int n3);

int main()
{
    int n1, n2, n3;
    printf("Informe três valores: ");
    scanf("%d %d %d", & n1, & n2, & n3);
    Menor(n1, n2, n3);
}

int Menor(int n1, int n2, int n3){
    if(n1 < n2 && n2 < n3){
        printf("%d é o menor", n1);
    }
    else if(n2 < n1 && n1 < n3){
        printf("%d é o menor", n2);
    }
    else{
        printf("%d é o menor", n3);
    }
}