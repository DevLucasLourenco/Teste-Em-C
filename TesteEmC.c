#include <stdio.h>

#define PI 3.14

int main()
{   
    const float G = 9.80;

    int idade;
    float salario = 1500.50;
    double porcentagem_desconto = 2.5;    
    char genero = 'M';
    float altura = 1.63;

    float valor1=0, valor2=0;

    int x = 5;
    int y = 10;


    printf('\n Idade: %d', idade);
    printf('\n salario: %f', salario);
    printf('\n Desconto (%): %f', porcentagem_desconto);
    printf('\n Gênero: %c', genero);
    printf('\n Altura: %.3f', altura);
    

    printf(' Digite o primeiro valor');
    scanf('%f', &valor1);
    
    printf(' Digite o segundo valor');
    scanf('%f', &valor2);
    
    printf('\n Valor guardado em x: &d',x);
    printf('\n Valor guardado em y: &d',y);

    printf('\n PI = %f',PI);
    printf('\n G = %f',G);




    return 0;
}
