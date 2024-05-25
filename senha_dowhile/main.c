#include <stdio.h> // entrada e sa�da
#include <stdlib.h> //fun��o de aloca��o de mem�ria

int main()
{
    //Variaveis
    const int senha_correta = 1234;
    const int tentativa_max = 3;
    int senha_digitada;
    int tentativa = 0;

    //la�o do while para fazer autentica��o de senha
    do
    {
        // caso da senha correta
        printf("Senha (num inteiros): ");
        scanf("%i", &senha_digitada);

        if (senha_digitada == senha_correta )
        {

            printf("senha correta! Bem-vindo(a)\n");
            break;// para sair do loop da senha correta
        }
        else // caso esteja incorreta
        {
            tentativa++; //contador de tentativas
            printf("senha incorreta. Tentativas restantes %i.\n", tentativa_max - tentativa);
            /*
            tentativa come�a em 0 e tentativa_max tem limite de 3, ent�o quando for realizar
            a primeira tentativa dentro do bloco else ira diminuir 1 da tentativa maxima*/


            if (tentativa >=tentativa_max) //crit�rio de parada
            {
                printf("Numero de tentativas atingido. Acesso negado.\n");
                break;// para sair do loop da senha incorreta
            }
        }
    }
    while(1);// o codigo dentro do bloco s� sera executado at� que a condi��o while(1) seja vdd
    return 0;
}
