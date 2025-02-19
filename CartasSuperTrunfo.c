#include <stdio.h>
#include <string.h> //possibilita o uso da função strcspn que remove o \n da string

// Desafio: implementar um jogo de super trunfo com cartas de cidades
// Cada carta tem os seguintes atributos:
// - Estado (A-H)
// - Código da carta
// - Nome da cidade
// - População
// - Área em Km²
// - PIB em bilhões de reais
// - Pontos turísticos

// Tema 1 - Cadastro das Cartas
    // Atributos das cartas

int main() {
    char Estado, Estado2;
    char CodigoCarta[4], CodigoCarta2[4];
    char NomeDaCidade[50], NomeDaCidade2[50];
    int Populacao, Populacao2;
    float Area, Area2;
    double pib, pib2;
    int pontosTuristicos, pontosTuristicos2;

    // Leitura dos dados da carta 1
    printf("Insira os dados da carta 1:\n");
    printf("Digite uma letra de A a H para representar o Estado:\n");
    scanf(" %c", &Estado);
    while(getchar() != '\n');

    printf("Digite o Codigo da carta:\n");
    scanf("%4s", CodigoCarta);
    while(getchar() != '\n');

    printf("Digite o nome da cidade:\n");
    fgets(NomeDaCidade, 50, stdin);
    // Remover o '\n' final da string
    NomeDaCidade[strcspn(NomeDaCidade, "\n")] = '\0';

    printf("Digite a Populacao:\n");
    scanf("%d", &Populacao);
    while(getchar() != '\n');

    printf("Digite a Area em Km2:\n");
    scanf("%f", &Area);
    while(getchar() != '\n');

    printf("Digite o PIB:\n");
    scanf("%lf", &pib);
    while(getchar() != '\n');
    
    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontosTuristicos);
    while(getchar() != '\n');
    
        // Impressão dos dados da carta 1

    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado);
    printf("Codigo da carta: %c%s\n", Estado, CodigoCarta);
    printf("Nome da cidade: %s\n", NomeDaCidade);
    printf("Populacao: %d\n", Populacao);
    printf("Area: %.2f Km2\n", Area);
    printf("PIB: %.2lf Bilhoes de reais\n", pib);
    printf("Pontos turisticos: %d\n", pontosTuristicos);
    
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
    scanf("%d", &Populacao2);
    while(getchar() != '\n');
    
    printf("Digite a Area em Km2:\n");
    scanf("%f", &Area2);
    while(getchar() != '\n');
    
    printf("Digite o PIB:\n");
    scanf("%lf", &pib2);
    while(getchar() != '\n');
    
    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontosTuristicos2);
    while(getchar() != '\n');
    
    // Impressão dos dados da carta 2

    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo da carta: %c%s\n", Estado2, CodigoCarta2);
    printf("Nome da cidade: %s\n", NomeDaCidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f Km2\n", Area2); 
    printf("PIB: %.2lf Bilhoes de reais\n", pib2);
    printf("Pontos turisticos: %d\n", pontosTuristicos2);

    //ADICIONANDO PARADA PARA QUE O TERMINAL NÃO SE FECHE IMEDIATAMENTE APÓS A EXECUÇÃO DAS VARIAVEIS
    printf("Pressione qualquer tecla para sair...");
    getchar();
    
    return 0;
}