/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado();

int main()
{
    srand(time(NULL));
    int numero, i;
    int contadores[6] = {0};
    
    for(i = 1; i < 1000000; i++){
        numero = dado();
        contadores[numero - 1]++;
    }
    printf("Resultado do lançamento do dado\n");
    for(i = 0; i < 6; i++){
        printf("O número %d saiu %d vezes.\n", i+1, contadores[i]);
    }
}

int dado(){
    return rand() % 6 + 1;
}

