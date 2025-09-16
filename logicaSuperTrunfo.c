#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    /* Test de otimização

    // primeira carta
    char nomeCarta1[20] = "PrimeiraCarta";
    char estado1; // Uma letra para cada estado
    char codigo1[3]; // Um codigo de 3 digitos para a carta
    char nomeDaCidade1[50]; // Nome da cidade
    int populacao1; // Populacao da cidade
    float area1; // Area da cidade
    float PIB1; // PIB da cidade
    int pontosTuristicos1; // Pontos turisticos da cidade

    //podemos melhorar e tirar esse monte de codigo inuteis

    // ------------------------------------------------------------------------------- //

    // segunda carta
    char nomeCarta2[20] = "SegundaCarta";
    char estado2; // Uma letra para cada estado
    char codigo2[3]; // Um codigo de 2 digitos para a carta indo de 01 a 04
    char nomeDaCidade2[50]; // Nome da cidade
    int populacao2; // Populacao da cidade
    float area2; // Area da cidade
    float PIB2; // PIB da cidade
    int pontosTuristicos2; // Pontos turisticos da cidade

    // ------------------------------------------------------------------------------- //
    */

    //funcionou perfeitamente, mas um pouco mais bagunçado
    char nomeCarta1[20] = "PrimeiraCarta", // Nome da primeira carta
    nomeCarta2[20] = "SegundaCarta", // Nome da segunda carta
    estado1, // Uma letra para cada estado primeira carta 
    estado2, // Uma letra para cada estado segunda carta
    codigo1[3], // Um codigo de 2 digitos para a primeira carta indo de 01 a 04
    codigo2[3], // Um codigo de 2 digitos para a segunda carta indo de 01 a 04
    nomeDaCidade1[50], // Nome da primeira cidade
    nomeDaCidade2[50]; // Nome da segunda cidade

    unsigned long int populacao1, // Populacao da primeira cidade
    populacao2; // Populacao da segunda cidade

    int pontosTuristicos1, // Pontos turisticos da primeira cidade
    pontosTuristicos2,
    pontos1 = 0, // Pontos turisticos da primeira cidade
    pontos2 = 0; // Pontos turisticos da segunda cidade

    float area1, // Area da primeira cidade
    area2, // Area da segunda cidade
    PIB1, //PIB da primeira cidade
    PIB2; //PIB da segunda cidade

    // ------------------------------------------------------------------------------- //

    // Primeira carta
    printf("Digite uma letra para o estado entre A até H: \n");
    scanf(" %c", &estado1);

    // Código da carta
    printf("Digite o código da carta (2 dígitos) entre 01 a 04: \n");
    scanf(" %s", &codigo1);

    // Nome da Cidade
    printf("Digite o nome da cidade: \n");
    scanf(" %s", &nomeDaCidade1);

    // População
    printf("Digite a quantidade populacional da cidade: \n");
    scanf(" %lu", &populacao1);

    // Área
    printf("Digite a área da cidade em km²: \n");
    scanf(" %f", &area1);

    // PIB
    printf("Digite o PIB da cidade em R$: \n");
    scanf(" %f", &PIB1);

    // Pontos Turísticos
    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf(" %d", &pontosTuristicos1);

    // ------------------------------------------------------------------------------- //

    // Segunda carta
    printf("Digite uma letra para o estado entre A até H: \n");
    scanf(" %c", &estado2);

    // Código da carta
    printf("Digite o código da carta (2 dígitos) entre 01 a 04: \n");
    scanf(" %s", &codigo2);

    // Nome da Cidade
    printf("Digite o nome da cidade: \n");
    scanf(" %s", &nomeDaCidade2);

    // População
    printf("Digite a quantidade populacional da cidade: \n");
    scanf(" %lu", &populacao2);

    // Área
    printf("Digite a área da cidade em km²: \n");
    scanf(" %f", &area2);

    // PIB
    printf("Digite o PIB da cidade em R$: \n");
    scanf(" %f", &PIB2);

    // Pontos Turísticos
    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf(" %d", &pontosTuristicos2);

    // ------------------------------------------------------------------------------- //

    // Calculos das cartas
    // Colocados abaixo do codigo para que receba os valores acima!!

    float DensidadePopulacional1 = populacao1 / area1, // Densidade populacional da primeira cidade
    DensidadePopulacional2 = populacao2 / area2; // Densidade populacional da segunda cidade

    float PIBPerCapita1 = PIB1 / populacao1, // PIB per capita da primeira cidade
    PIBPerCapita2 = PIB2 / populacao2; // PIB per capita da segunda cidade

    // Calculo do SUPER PORDER!

    float superpoder1 = populacao1 + area1 + PIB1 + pontosTuristicos1 + ( 1 / DensidadePopulacional1) + PIBPerCapita1, // super poder da primeira cidade
    superpoder2 = populacao2 + area2 + PIB2 + pontosTuristicos2 + ( 1 / DensidadePopulacional2) + PIBPerCapita2; // super poder da segunda cidade
    
    // Comparação das cartas
    int resultadoSuperpoder = (superpoder1 > superpoder2) ? 1 : 2, // Resultado FINAL
    resultadoPopulacao = (populacao1 > populacao2)  ? 1 : 2, // Resultado da População
    resultadoArea = (area1 > area2)  ? 1 : 2, // Resultado da Área
    resultadoPIB = (PIB1 > PIB2)  ? 1 : 2, // Resultado do PIB
    resultadoDensidadePopulacional = (DensidadePopulacional1 > DensidadePopulacional2) ? 1 : 2, // Resultado da Densidade Populacional
    resultadoPIBPerCapita = (PIBPerCapita1 > PIBPerCapita2) ? 1 : 2, // Resultado do PIB per Capita
    resultadoPontosTuristicos = (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2; // Resultado dos Pontos Turísticos

    // ------------------------------------------------------------------------------- //
    // Impressão da primeira carta
    printf("\n\n==================== RESULTADOS ====================\n");
    
    printf("\n\n%s\n", nomeCarta1);
    printf("Estado: %c\n", estado1);
    printf("Codigo: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %lu, Resultado: %d\n", populacao1, resultadoPopulacao);
    printf("Área: %.2f km², Resultado: %d\n", area1, resultadoArea);
    printf("PIB: %.2f bilhões de reais, Resultado: %d\n", PIB1, resultadoPIB);
    printf("Número de Pontos Turísticos: %d, Resultado: %d\n", pontosTuristicos1, resultadoPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km², Resultado: %d\n", DensidadePopulacional1, resultadoDensidadePopulacional);
    printf("PIB per Capita: %.2f reais, Resultado: %d\n", PIBPerCapita1, resultadoPIBPerCapita);
    printf("Superpoder: %.2f, Resultado: %d\n", superpoder1, resultadoSuperpoder);

    // ------------------------------------------------------------------------------- //

    // Impressão da primeira carta
    printf("\n\n%s\n", nomeCarta2);
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %lu, Resultado: %d\n", populacao2, resultadoPopulacao);
    printf("Área: %.2f km², Resultado: %d\n", area2, resultadoArea);
    printf("PIB: %.2f bilhões de reais, Resultado: %d\n", PIB2, resultadoPIB);
    printf("Número de Pontos Turísticos: %d, Resultado: %d\n", pontosTuristicos2, resultadoPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km², Resultado: %d\n", DensidadePopulacional2, resultadoDensidadePopulacional);
    printf("PIB per Capita: %.2f reais, Resultado: %d\n", PIBPerCapita2, resultadoPIBPerCapita);
    printf("Superpoder: %.2f, Resultado: %d\n", superpoder2, resultadoSuperpoder);

    // ------------------------------------------------------------------------------- //

    // Resultado final
    /* 
    
    printf("\n\n\n1 = Primeira carta vencedora\n0 = Segunda carta vencedora\n");
    printf("Carta Vencedora: %d", resultadoSuperpoder); 
    
    Comparação das cartas modelo antigo
    */

    printf("\n==================== RESULTADO FINAL ====================\n");

    // Comparações das cartas 
    if (superpoder1 > superpoder2) {
        printf("\n\nA Primeira Carta foi a Vencedora\n");
    } else {
        printf("\n\nA Segunda Carta foi a Vencedora\n");
    }

    // ------------------------------------------------------------------------------- //

    return 0;
}
