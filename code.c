/*
Crie um algoritmo que leia 5 n�meros inteiros e, em seguida,
mostre na tela:

A quantidade de n�meros pares e �mpares;
A quantidade de n�meros positivos e negativos;
A quantidade de n�meros inseridos.
O maior e o menor n�mero;
A m�dia de n�meros pares;
A m�dia de n�meros �mpares;
A m�dia de todos os n�meros inseridos;
Mostrar os n�meros lidos na ordem inversa.
*/



#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{

    setlocale(LC_ALL, "portuguese");

    int pares = 0, impares = 0, num[5], i, count = 5, somap, negativos = 0, positivos = 0;
    float media = 0;
    float mediat = 0;
    float mediap = 0;
    float mediai = 0;
    int somat = 0;
    int soma = 0;
    int somai = 0;
    int maior= 0;
    int menor = 0;
    int o;

    for (i = 0; i < count; i++)
    {
        printf("Digite os numeros: ");
        scanf("%d", &num[i]);

         if (num[i] % 2 == 0)
        {
            pares++;
        } else
        {
             impares++;
  
        }

        somat += num[i];
        somai += num[i];
        soma += num[i];
        somap += num[i];
        media = somap / 5;
        mediat = somat / num[i];
        mediap = soma / num[i];
        mediai = somai / num[i];

        if (num[i] < menor)
        {
            menor = num[i];
        }
        if (num[i] > maior)
        {

            maior = num[i];
        }

        if (num[i] < 0)
        {
            negativos++;
        }
        else
        {
            positivos++;
        }

      
       
    }
    printf("\nOs numeros s�o: \n");
    for (i = 0; i < 5; i++)
    {
        printf("\n%i\n\n ", num[i]);
    }

    printf("\nOs numeros na ordem normal: \n");
    for (i = 0; i < 5; i++)
    {
        printf("\n%i\n\n ", num[i]);
    }

    printf("\nNumeros na ordem inversa: \n");

    for (o = 4; o >= 0; o--)
    {
        printf("\n%i\n", num[o]);
    }

    printf("\nQuantidade de numeros pares : %i\n", pares);
    printf("\nQuantidade de numeros impares: %i\n", impares);
    printf("\nQuantidade de numeros negativos: %i\n", negativos);
    printf("\nQuantidade de numeros positivos: %i\n", positivos);
    printf("\nA media dos numeros s�o: %f\n\n", media);
    printf("\nMaior valor: %i\n\n", maior);
    printf("\nMenor valor: %i\n\n", menor);
    printf("\nA media dos numeros pares s�o: %f\n\n", mediap);
    printf("\nA media dos numeros impares s�o: %f\n\n", mediai);
    printf("\nA media de todos os numeros inseridos �: %f\n\n", mediat);

    return 0;
}