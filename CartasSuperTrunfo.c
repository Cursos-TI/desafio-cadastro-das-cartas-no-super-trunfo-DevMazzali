#include <stdio.h>
#include <string.h> //possibilita o uso da função strcspn que remove o \n da string
#include <unistd.h> //possibilita o uso da função sleep para esperar

// Desafio: implementar um jogo de super trunfo com cartas de cidades
// Cada carta tem os seguintes atributos:
// - Estado (A-H)
// - Código da carta
// - Nome da cidade
// - População
// - Área em Km²
// - PIB em bilhões de reais
// - Pontos turísticos
// - Desindade populacional
// - PIB per capita
// - Super Poder (atributo extra)

// Tema 1 - Cadastro das Cartas
    // Atributos das cartas

    int main() {
        char Estado, Estado2;
        char CodigoCarta[4], CodigoCarta2[4];
        char NomeDaCidade[50], NomeDaCidade2[50];
        int populacao, populacao2, pontosTuristicos, pontosTuristicos2, opcao_menu, opcao_atributo;
        float Area, Area2, superpoder, superpoder2;
        double pib, pib2, densidade_demografica, densidade_demografica2, PIBperCapita, PIBperCapita2;

        // Menu de opções
            printf("Menu Principal\n");
            printf("1 - Jogar\n");
            printf("2 - Regras do jogo\n");
            printf("3 - Sair\n");
            scanf("%d", &opcao_menu);
            while(getchar() != '\n');

        switch (opcao_menu) {
        case 1:
            printf("Iniciando o jogo...\n");
            sleep(3);

        do {
            printf("Escolha um atributo para comparar as cartas (Sera usado para determinar o vencedor):\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Pontos turísticos\n");
            printf("5 - Densidade populacional\n");
            printf("6 - PIB per capita\n");
            scanf("%d", &opcao_atributo);
            while(getchar() != '\n');

            if (opcao_atributo < 1 || opcao_atributo > 6) {
            printf("Opção inválida, porfavor escolha um número de 1 a 6\n");
            }
        } while (opcao_atributo <1 || opcao_atributo > 6); //Enquanto a opção for menor que 1 ou maior que 6, o loop continuará
            break;

        case 2:
            printf("Regras do jogo:\n");
            printf("O jogador deve escolher uma cidade para jogar.\n");
            printf("Os atributos das cartas devem ser preenchidos de acordo com valores reais da cidade escolhida\n");
            printf("O jogador que tiver o maior superpoder no final ganha a rodada\n");
            break;

        case 3:
            printf("Saindo do jogo...");
            return 0;

        default:
            printf("Opção inválida\n");
            return 1;
            
        }
        
        // Leitura dos dados da carta 1
            printf("Insira os dados da carta 1:\n");
            printf("Digite uma letra de A a H para representar o Estado:\n");
            scanf(" %c", &Estado);
            while(getchar() != '\n');
        
            printf("Digite o Código da carta:\n");
            scanf("%4s", CodigoCarta);
            while(getchar() != '\n');
        
            printf("Digite o nome da cidade:\n");
            fgets(NomeDaCidade, 50, stdin);
            // Remover o '\n' final da string
            NomeDaCidade[strcspn(NomeDaCidade, "\n")] = '\0';
        
            printf("Digite a População:\n");
            scanf("%d", &populacao);
            while(getchar() != '\n');
        
            printf("Digite a Area em Km²:\n");
            scanf("%f", &Area);
            while(getchar() != '\n');
        
            printf("Digite o PIB:\n");
            scanf("%lf", &pib);
            while(getchar() != '\n');
        
            printf("Digite a quantidade de pontos turisticos:\n");
            scanf("%d", &pontosTuristicos);
            while(getchar() != '\n');
        
        if (populacao == 0) {
            printf("População não pode ser 0\n");
            return 1;
        }

        densidade_demografica = populacao / Area;
        PIBperCapita = pib / populacao;
        double inverso_densidade = Area / populacao;

        // Calculando superpoder.
        
        superpoder = populacao + Area + pib + pontosTuristicos + PIBperCapita + inverso_densidade;
        
        // Impressão dos dados da carta 1
        
        
            printf("Carta 1:\n");
            printf("Estado: %c\n", Estado);
            printf("Codigo da carta: %c%s\n", Estado, CodigoCarta);
            printf("Nome da cidade: %s\n", NomeDaCidade);
            printf("Populacao: %d\n", populacao);
            printf("Area: %.2f Km²\n", Area);
            printf("PIB: R$ %.2lf Bilhões\n", pib);
            printf("Pontos turisticos: %d\n", pontosTuristicos);
            printf("Densidade populacional: %.2lf\n", densidade_demografica);
            printf("PIB per capita: R$ %.2lf\n", PIBperCapita);
            printf("Superpoder: %.2f\n", superpoder);
        
        // Leitura dos dados da carta 2
        
            printf("Insira os dados da carta 2:\n");
            printf("Digite uma letra de A a H para representar o Estado:\n");
            scanf(" %c", &Estado2);
            while(getchar() != '\n');
        
            printf("Digite o Codigo da carta:\n");
            scanf("%4s", CodigoCarta2);
            while(getchar() != '\n');
        
            printf("Digite o nome da cidade:\n");
            fgets(NomeDaCidade2, 50, stdin); //Estabelence o limite de caracteres, e a entrada de dados
            NomeDaCidade2[strcspn(NomeDaCidade2, "\n")] = '\0'; /// SRRCSPN retorna o tamanho da string, sem o \n
        
            printf("Digite a Populacao:\n");
            scanf("%d", &populacao2);
            while(getchar() != '\n');
        
            printf("Digite a Area em Km²:\n");
            scanf("%f", &Area2);
            while(getchar() != '\n');
        
            printf("Digite o PIB:\n");
            scanf("%lf", &pib2);
            while(getchar() != '\n');
        
            printf("Digite a quantidade de pontos turisticos:\n");
            scanf("%d", &pontosTuristicos2);
            while(getchar() != '\n');

        if (populacao2 == 0) {
            printf("População não pode ser 0\n");
            return 1;
        }
        
        densidade_demografica2 = populacao2 / Area2;
        PIBperCapita2 = pib2 / populacao2;
        double inverso_densidade2 = Area2 / populacao2;
        
        // Calculando superpoder2.

        superpoder2 = populacao2 + Area2 + pib2 + pontosTuristicos2 + PIBperCapita2 + inverso_densidade2;
        
        // Impressão dos dados da carta 2
        
            printf("Carta 2:\n");
            printf("Estado: %c\n", Estado2);
            printf("Codigo da carta: %c%s\n", Estado2, CodigoCarta2);
            printf("Nome da cidade: %s\n", NomeDaCidade2);
            printf("Populacao: %d\n", populacao2);
            printf("Area: %.2f Km²\n", Area2);  
            printf("PIB: R$ %.2lf Bilhões\nA", pib2);
            printf("Pontos turisticos: %d\n", pontosTuristicos2);
            printf("Densidade populacional: %.2lf\n", densidade_demografica2);
            printf("PIB per capita: R$ %.2lf\n", PIBperCapita2);
            printf("Superpoder: %.2f\n", superpoder2);
            sleep (3);

            printf("Comparando as cartas...\n");
            sleep(3);

        switch(opcao_atributo) {
            case 1:
            if (populacao > populacao2) {
                printf("Carta 1 venceu!\n");
            } else if (populacao < populacao2) {
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!!\n");
            }
            break;
            case 2:
            if (Area > Area2) {
                printf("Carta 1 venceu!\n");
            } else if (Area < Area2) {
            } else {
                printf("Empate!!\n");
            }
            break;
            case 3:
            if (pib > pib2) {
                printf("Carta 1 venceu!\n");
            } else if (pib < pib2) {
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!!\n");
            }
            break;
            case 4:
            if (pontosTuristicos > pontosTuristicos2) {
                printf("Carta 1 venceu!\n");
            } else if (pontosTuristicos < pontosTuristicos2) {
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!!\n");
            }
            break;
            case 5:
            if (densidade_demografica < densidade_demografica2) {
                printf("Carta 1 venceu!\n");
            } else if (densidade_demografica2 < densidade_demografica) {
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!!\n");
            }
            break;
            case 6:
            if (PIBperCapita > PIBperCapita2) {
                printf("Carta 1 venceu!\n");
            } else if (PIBperCapita < PIBperCapita2) {
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!!\n");
            }
            break;
        }
        //ADICIONANDO PARADA PARA QUE O TERMINAL NÃO SE FECHE IMEDIATAMENTE APÓS A EXECUÇÃO DAS VARIAVEIS
            printf("Pressione qualquer tecla para sair...");
            getchar();
        
        return 0;
    }
    