/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int idade, anos;
    printf("digite sua idade: ");
    scanf("%d" ,&idade);
    anos=idade-18;
    if(idade>=18){
        printf("voce pode tirar a cnh a %d ano(s)" ,anos);
    }
    else {
        anos=anos*(-1);
        printf("voce podera tirar cnh daqui a %d anos " ,anos);
    }
    
    
    
    
    return 0;
}
