/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int idade, sexo;


    printf("idade: ");
    scanf("%d",&idade);

    printf("digite 1 para mulher \n 2 para homem: ");
    scanf("%d",&sexo);
    if(sexo == 2 && idade >= 18){
    printf("\n Obrigatório");
}
    else
{
    printf ("\n Não é obrigatório");
}
    return 0;
}
