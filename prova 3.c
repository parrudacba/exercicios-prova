/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    float raio, area;
    
    printf("digite o raio do circulo: ");
    scanf("%f" ,&raio);
    area=3.14*(raio*raio);
    printf("area: %.3f", area);
    
    return 0;
}
