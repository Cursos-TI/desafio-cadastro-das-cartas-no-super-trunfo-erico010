#include<stdio.h>

    int main(){

        //codigo referente a cartas 1 e 2

        char letras,letras2;
        char codigo[10],codigo2[10];
        char cidade[10],cidade2[50];
        int populacao,populacao2;
        float area,area2;
        float pib,pib2;
        int turistico,turistico2;

        //entradas de dados da carta 1

        printf("Desafio cadastro das cartas no super trunfo\n");

        printf("Faça o cadastro das carta 1 abaixo\n");

        printf("Digite uma letra de 'A' a 'H' (representando um dos 8 estados):\n");
        scanf(" %c",&letras);

        printf("A letra do estado seguida de um numero '01' a '04'(ex: A01,B02,...):\n");
        scanf("%s",&codigo);

        printf("Digita o nome da cidade:\n");
        scanf("%s",&cidade);

        printf("Digita o nomero de habitantes da cidade:\n");
        scanf("%d",&populacao);

        printf("Digita a área em quilômetros quadrados:\n");
        scanf("%f",&area);

        printf("Digita o protudo interno bruto(PIB):\n");
        scanf("%f",&pib);

        printf("Digita o numero da quatidade de pontos turisticos na cidade:\n");
        scanf("%d",&turistico);

        //entrada de dados da carta 2

        printf("Agora faça o cadastro da carta 2 abaixo\n");


        printf("Digite uma letra de 'A' a 'H' (representando um dos 8 estados):\n");
        scanf(" %c",&letras2);

        printf("A letra do estado seguida de um numero '01' a '04'(ex: A01,B02,...):\n");
        scanf(" %s",&codigo2);

        printf("Digita o nome da cidade:\n");
        scanf("%s",&cidade2);

        printf("Digita o nomero de habitantes da cidade:\n");
        scanf("%d",&populacao2);

        printf("Digita a área em quilômetros quadrados:\n");
        scanf("%f",&area2);

        printf("Digita o protudo interno bruto(PIB):\n");
        scanf("%f",&pib2);

        printf("Digita o numero da quatidade de pontos turisticos na cidade:\n");
        scanf("%d",&turistico2);



        //carta 1

        printf("Carta 1:\n");
        printf("Estado: %c \nCodigo: %s\nNome da cidade: %s\n",letras ,codigo ,cidade);
        printf("População: %d\nÁrea: %f Km²\nPIB: %f bilhões de reais\n",populacao ,area ,pib);
        printf("Numeros de pontos turisticos: %d\n",turistico);

        //carta 2

        printf("Carta 2:\n");
        printf("Estado: %c \nCodigo: %s\nNome da cidade: %s\n",letras2 ,codigo2 ,cidade2);
        printf("População: %d\nÁrea: %f Km²\nPIB: %f bilhões de reais\n",populacao2 ,area2 ,pib2);
        printf("Numeros de pontos turisticos: %d",turistico2);

        return 0;

    }