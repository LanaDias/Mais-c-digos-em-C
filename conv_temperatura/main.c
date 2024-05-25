#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declara��o de vari�veis
    float f, c ;
    int con;

    do// la�o para que o user possa usar o c�digo varias vezes ate que precione 3 para sair
    {
        //coleta de dados
        printf("_______________________________________________\n");
        printf("Digite qual das op��es quer:\n");
        printf("1- Fahrenheit | 2- Celsius | 3- para sair| ");
        scanf("%i", &con);
        printf("_______________________________________________\n");

        //tratamento de erro
        if (con != 1 && con != 2 && con !=3)
        {
            printf("Op��o inv�lida.\n");
        }
        //caso de acordo com a op��o do user
        else
        {
            switch (con)
            {
            //Fahrenheit para Celsius
            case 1:
                printf("\nConvers�o de Fahrenheit para Celsius, digite a temperatura:");
                scanf("%f", &f);
                c = (5.0 / 9.0) * (f - 32.0);
                printf("A temperatura em Celsius �: %.2f\n", c); //exibi��o
                break;

            //Celsius para Fahrenheit
            case 2:
                printf("Convers�o de Celsius para Fahrenheit, digite a temperatura: \n");
                scanf("%f", &c);
                f = (c * 1.8) + 32;
                printf("A temperatura em Fahrenheit �: %.2f\n", f);//exibi��o
            }
        }
    }
    while (con !=3);
    printf("Programa Ecerrado :)\n");



    return 0;
}
