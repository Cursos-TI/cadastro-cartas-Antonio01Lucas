#include <iostream>

/*Criação de código fonte para jogo super trunfo onde será declarado as variáveis de duas cartas, perguntando ao usuário
quais são os dados da Carta 01 e imprimindo os dados na sequência assim como da Carta 02*/ 

int main (){
    char estado1 [20], estado2[20];
    char codigoCarta1 [3], codigoCarta2 [3];
    char cidade1 [20], cidade2 [20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    /*Declarado as variáveis da carta 1 e 2 de maneira clara e objetiva, onde 1 é para a primeira carta e 2 para a segunda carta.
    Respeitando cada variável com a sua carcterística */

    printf("Digite o Estado da primeira carta: \n");
    scanf("%s", &estado1);

    printf("Digite o código da primeira carta: \n");
    scanf("%s", &codigoCarta1);

    printf("Digite o nome da Cidade da primeira carta: \n");
    scanf("%s", &cidade1);

    printf("Digite o número da população da primeira carta \n");
    scanf("%d", &populacao1);

    printf("Digite a Área da primeira carta: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira carta: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de Pontos Turísticos da primeira carta: \n");
    scanf("%d", &pontosTuristicos1);

    //Foi desenvolvido a parte de solicitação de dados, inserção e armazenamento da carta 01

    printf("\n" "O Estado da primeira carta é: %s \n", estado1);
    printf("O código da primeira carta é: %s \n", codigoCarta1);
    printf("A cidade da primeira carta é: %s \n", cidade1);
    printf("A população da primeira carta é: %d \n", populacao1);
    printf("A área da primeira carta é: %f \n", area1);
    printf("O PIB da primeira carta é: %f \n", pib1);
    printf("A quantidade de pontos turísticos da primeira carta é: %d \n\n", pontosTuristicos1);

    //Criado a impressão dos dados computados da carta 01

    printf("Digite o Estado da segunda carta: \n");
    scanf("%s", &estado2);

    printf("Digite o código da segunda carta: \n");
    scanf("%s", &codigoCarta2);

    printf("Digite o nome da Cidade da segunda carta: \n");
    scanf("%s", &cidade2);

    printf("Digite o número da população da segunda carta \n");
    scanf("%d", &populacao2);

    printf("Digite a Área da segunda carta: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de Pontos Turísticos da segunda carta: \n");
    scanf("%d", &pontosTuristicos2);

    //Foi desenvolvido a parte de solicitação de dados, inserção e armazenamento da carta 02

    printf("\n""O Estado da segunda carta é: %s \n", estado2);
    printf("O código da segunda carta é: %s \n", codigoCarta2);
    printf("A cidade da segunda carta é: %s \n", cidade2);
    printf("A população da segunda carta é: %d \n", populacao2);
    printf("A área da segunda carta é: %f \n", area2);
    printf("O PIB da segunda carta é: %f \n", pib2);
    printf("A quantidade de pontos turísticos da segunda carta é: %d \n\n", pontosTuristicos2);

    //Criado a impressão dos dados computados da carta 02

    return 0;
}

