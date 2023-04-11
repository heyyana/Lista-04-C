/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int ParImpar(int num);

int main()
{
    int num;
    printf("Informe um número: ");
    scanf("%d", & num);
    ParImpar(num);
    
}

int ParImpar(int num){
    if(num % 2 == 0){
        printf("O número é Par", num);
    }
    else{
        printf("O número é Impar", num);
    }
}
