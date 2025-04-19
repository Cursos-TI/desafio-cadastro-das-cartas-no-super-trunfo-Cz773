#include <stdio.h>

    int main(){
        printf("Desafio Super-Trunfo!\n");
        char estado1[20];        
        char codigodacarta1[20];        
        char nomedacidade1[27];        
        unsigned long int populacao1;        
        float area1;        
        float pib1;        
        int numerodepontoturistico1;
        float densidadepopulacional1;
        float pibpercapita1;
        long double superpoder1;


        printf("Carta 01 \n");

        printf("Digite o Estado: \n");
        scanf("%s", estado1);

        printf("Digite o Código da Carta: \n");
        scanf("%s", codigodacarta1);

        printf("Digite o Nome da Cidade: \n");
        scanf("%s", nomedacidade1);

        printf("Digite o Número de Habitantes: \n");
        scanf("%lu", &populacao1);

        printf("Digite a Área da Cidade: \n");
        scanf("%f", &area1);

        if(area1 == 0) {
            printf("Área não pode ser zero para cálculo da densidade!\n");
            return 1;
        }

        printf("Digite o PIB da Cidade: \n");
        scanf("%f", &pib1);

        printf("Digite o Número de Pontos Turísticos \n");
        scanf("%d", &numerodepontoturistico1);

        densidadepopulacional1 = (float) populacao1 / area1;
        if (populacao1 == 0) {
            printf("População não pode ser zero para cálculo do PIB per capita!\n");
            return 1;
        }
        pibpercapita1 = pib1 / populacao1;
        superpoder1 = (long double)populacao1 + (long double)pib1 + 
             (long double)densidadepopulacional1 + (long double)pibpercapita1 + 
             (long double)area1 + (long double)numerodepontoturistico1;

        printf("Estado é: %s\n", estado1);
        printf ("Código da Carta é: %s\n", codigodacarta1);
        printf("Digite o Nome da Cidade: %s\n", nomedacidade1);
        printf("Número de Habitantes é: %lu\n", populacao1);
        printf("Área da Cidade é: %.2f\n", area1);
        printf("PIB da Cidade é: %.2f\n", pib1);
        printf("Número de Pontos Turísticos é: %d\n", numerodepontoturistico1);
        printf ("Número da Densidade Populacional é: %.2f\n", densidadepopulacional1);
        printf("Número do PIB per Capita é: %.2f\n", pibpercapita1);
        printf("O Super Poder tem o valor: %.2Lf\n", superpoder1);


        char estado2[50];        
        char codigodacarta2[30];        
        char nomedacidade2[20];        
        unsigned long int populacao2;        
        float area2;        
        float pib2;        
        int numerodepontoturistico2;
        float densidadepopulacional2;
        float pibpercapita2;
        long double superpoder2;

        printf("Carta 02 \n");

        printf("Digite o Estado: \n");
        scanf("%s", estado2);
        
        printf("Digite o Código da Carta: \n");
        scanf("%s", codigodacarta2);
        
        printf("o Nome da Cidade: \n");
        scanf("%s", nomedacidade2);

        printf("Digite o Número de Habitantes: \n");
        scanf("%lu", &populacao2);

        printf("Digite a Área da Cidade: \n");
        scanf("%f", &area2);

        if(area2 == 0) {
            printf("Área não pode ser zero para cálculo da densidade!\n");
            return 1;
        }

        printf("Digite o PIB da Cidade: \n");
        scanf("%f", &pib2);

        printf("Digite o Número de Pontos Turísticos: \n");
        scanf("%d", &numerodepontoturistico2);

        densidadepopulacional2 = (float) populacao2 / area2;
        if (populacao2 == 0) {
            printf("População não pode ser zero para cálculo do PIB per capita!\n");
            return 1;
        }
        pibpercapita2 = pib2 / populacao2;
        superpoder2 = (long double)populacao2 + (long double)pib2 + 
             (long double)densidadepopulacional2 + (long double)pibpercapita2 + 
             (long double)area2 + (long double)numerodepontoturistico2;


        printf("O Estado é: %s\n", estado2);
        printf ("Código da Carta é: %s\n", codigodacarta2);
        printf("Nome da Cidade é: %s\n", nomedacidade2); 
        printf("Número de Habitantes é: %lu\n", populacao2);
        printf("Área da Cidade é: %.2f\n", area2);
        printf("PIB da Cidade é: %.2f\n", pib2);
        printf("Número de Pontos Turísticos é: %d\n", numerodepontoturistico2);
        printf ("Número da Densidade Populacional é: %.2f\n", densidadepopulacional2);
        printf("Número do PIB per Capita é: %.2f\n", pibpercapita2);
        printf("O Super Poder tem o valor: %.2Lf\n", superpoder2);

        printf("O valor de Número de Habitantes da Carta 01 é maior que o valor da Carta 02 ? %d \n", populacao1 > populacao2);
        printf("O valor da Área da Carta 01 é maior que o valor da Carta 02 ? %d \n", area1 > area2);
        printf("O valor do PIB da Carta 01 é maior que o valor da Carta 02 ? %d \n", pib1 > pib2);
        printf("O valor dos Pontos Turísticos da Carta 01 é maior que o valor da Carta 02 ? %d\n", numerodepontoturistico1 > numerodepontoturistico2);
        printf("O valor do Densidade Populacional da Carta 01 é maior que o valor da Carta 02 ? %d\n", densidadepopulacional1 < densidadepopulacional2);
        printf("O valor do PIB per Capita da Carta 01 é maior que o valor da Carta 02 ? %d \n", pibpercapita1 > pibpercapita2);
        printf("O valor do Super Poder da Carta 01 é maior que o valor da Carta 02 ? %d \n", superpoder1 > superpoder2);

        char primeiroAtributo, segundoAtributo;
        int resultado1, resultado2;
    
        printf("Bem Vindo ao Menu de Comparação de Cartas!\n");
        printf("Escolha uma letra dos Atributos para Comparar!\n");
        printf("P. População\n");
        printf("A. Área\n");
        printf("I. PIB\n");
        printf("T. Número de Pontos Túristicos\n");
        printf("D. Densidade Demografica\n");

        printf("Escolha a Comparação: \n");
        scanf(" %c", &primeiroAtributo);


        switch (primeiroAtributo)
        {
        case 'P':
        case 'p':
                printf("Comparação entre o %s e %s\n", estado1, estado2);
                printf("O Número de Habitantes do %s é: %lu\n", estado1, populacao1);
                printf("O Número de Habitantes do %s é: %lu\n", estado2, populacao2);
                resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 'A':
        case 'a':
            printf("Você escolheu a opção Área\n");
            
                printf("Comparação entre o %s e %s\n", estado1, estado2);
                printf("O valor da área %s é: %f\n", estado1, area1);
                printf("O valor da área %s é: %f\n", estado2, area2);
                resultado1 = area1 > area2 ? 1 : 0;
                break;
        case 'I':
        case 'i':
            printf("Você escolheu a opção PIB\n");
                printf("Comparação entre o %s e %s", estado1, estado2);
                printf("O valor do PIB %s é: %f\n", estado1, pib1);
                printf("O valor do PIB %s é: %f\n", estado2, pib2);
                resultado1 = pib1 > pib2 ? 1 : 0;
                break;
        case 'T':
        case 't':
            printf("Você escolheu a opção Número de Pontos Túristicos\n");
                printf("Comparação entre o %s e %s\n", estado1, estado2);
                printf("O Número de Pontos Túristicos %s é: %d\n", estado1, numerodepontoturistico1);
                printf("O Número de Pontos Túristicos %s é: %d\n", estado2, numerodepontoturistico2);
                resultado1 = numerodepontoturistico1 > numerodepontoturistico2 ? 1 : 0;
                break;
        case 'D':
        case 'd':
            printf("Você escolheu a opção Densidade Demografica\n");
                printf("Comparação entre o %s e %s\n", estado1, estado2);
                printf("A Densidade Populacional %s é: %f\n", estado1, densidadepopulacional1);
                printf("A Densidade Populacional %s é: %f\n", estado2, densidadepopulacional2);
                resultado1 = densidadepopulacional1 < densidadepopulacional2 ? 1 : 0;
                break;
        default:
            printf("Opção Inválida\n");
            break;
        }

        printf("Escolha outro Atributo!\n");
        printf("P.População\n");
        printf("A. Área\n");
        printf("I. PIB\n");
        printf("T. Número de Pontos Túristicos\n");
        printf("D. Densidade Demografica\n");

        printf("Escolha a Comparação: \n");
        scanf(" %c", &segundoAtributo);


        if (primeiroAtributo == segundoAtributo)
        {
            printf("Você escolheu o mesmo atributo!\n");
        }else{
            switch (segundoAtributo)
            {
                case 'P':
                case 'p':
                        printf("Comparação entre o %s e %s\n", estado1, estado2);
                        printf("O Número de Habitantes do %s é: %lu\n", estado1, populacao1);
                        printf("O Número de Habitantes do %s é: %lu\n", estado2, populacao2);
                        resultado2 = populacao1 > populacao2 ? 1 : 0;
                    break;
                case 'A':
                case 'a':
                    printf("Você escolheu a opção Área\n");
                    
                        printf("Comparação entre o %s e %s\n", estado1, estado2);
                        printf("O valor da área %s é: %f\n", estado1, area1);
                        printf("O valor da área %s é: %f\n", estado2, area2);
                        resultado2 = area1 > area2 ? 1 : 0;
                        break;
                case 'I':
                case 'i':
                    printf("Você escolheu a opção PIB\n");
                        printf("Comparação entre o %s e %s\n", estado1, estado2);
                        printf("O valor do PIB %s é: %f\n", estado1, pib1);
                        printf("O valor do PIB %s é: %f\n", estado2, pib2);
                        resultado2 = pib1 > pib2 ? 1 : 0;
                        break;
                case 'T':
                case 't':
                    printf("Você escolheu a opção Número de Pontos Túristicos\n");
                        printf("Comparação entre o %s e %s\n", estado1, estado2);
                        printf("O Número de Pontos Túristicos %s é: %d\n", estado1, numerodepontoturistico1);
                        printf("O Número de Pontos Túristicos %s é: %d\n", estado2, numerodepontoturistico2);
                        resultado2 = numerodepontoturistico1 > numerodepontoturistico2 ? 1 : 0;
                        break;
                case 'D':
                case 'd':
                    printf("Você escolheu a opção Densidade Demografica\n");
                        printf("Comparação entre o %s e %s\n", estado1, estado2);
                        printf("A Densidade Populacional %s é: %f\n", estado1, densidadepopulacional1);
                        printf("A Densidade Populacional %s é: %f\n", estado2, densidadepopulacional2);
                        resultado2 = densidadepopulacional1 < densidadepopulacional2 ? 1 : 0;
                        break;
                default:
                    printf("Opção Inválida \n");
                    break;
                    
            }
        }
        
        if (resultado1 == 1 && resultado2 == 1) {
            printf("Parabéns Você Venceu!\n");
        } else if (resultado1 == 0 && resultado2 == 0) {
            printf("Infelizmente Você Perdeu!\n");
        } else {
            printf("Empatou!\n");
        }

       /* printf("Comparação das Cartas fator população \n");
        if (populacao1 > populacao2){
            printf("População 1 Venceu! \n");
        }else{
            printf("População 2 Venceu! \n");
        }*/

        

        /*Foi utilizado as variaveis do tipo int, float e char, que int: declara uma variável do tipo inteiro, 
        float: uma variável de ponto flutuante e char: declara uma variável de caractere.
        E as funçoes de entrada e saída de dados como Printf e scanf que printf: que é usada para exibir informações na tela, 
        e scanf: usada para ler dados fornecidos pelo usuário e armazená-los. atualização do nível aventureiro: usando os operadores aritmetricos para calcular o pib per capita
        e a densidade populacional. Atualização do nível mestre: utilizou operadores relacionais para comparação das duas cartas e 
        incerindo unsigned long int para variavel população e a inclusão da variavel Super Poder que soma todos os valores.
        O código teve agora adição de menus interativos e de melhor precisão na comparação.*/
        return 0;
    }

