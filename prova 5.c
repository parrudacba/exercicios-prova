/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int idade, estudante;
    
    printf("digite sua idade: ");
    scanf("%d" ,&idade);
    printf("digite 0 se estudante ou 1 nao estudante: ");
    scanf("%d" ,&estudante);
    if(idade>=60||estudante==0){
     printf("tem transporte publico gratuito");   
    }
    else{
        printf("nao tem transporte publico gratuito");
    }
    
    
    return 0;
}
