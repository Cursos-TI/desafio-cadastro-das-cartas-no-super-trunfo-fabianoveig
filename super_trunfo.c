#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// 18/02/2025 - Fabiano Veiga - Desafio Novato
// 21/02/2025 - Fabiano Veiga - Desafio Aventureiro
// 06/03/2025 - Fabiano Veiga - Desafio Mestre

float calcularDensidadePopulacional(int _populacao , int _area ) {
    // Densidade populacional : Calculada como população dividida pela área da cidade. 
    // Isso dá uma medida de quantas pessoas vivem por quilômetro quadrado. 

    float _densidadePopulacional;
    _densidadePopulacional = (float) (_populacao / _area);

    return _densidadePopulacional;
}

float calcularPibPerCapita(float _pibTotal , int _populacao) {
    // PIB per capita : Calculado como PIB total da cidade dividido pela população. 
    // Isso dá uma medida da média de produção econômica por pessoa.
 
    float _pibPerCapita;
    _pibPerCapita = _pibTotal / (float) _populacao;

    return _pibPerCapita;
}

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1, estado2;
    char codigo1[2], codigo2[2];
    char nome1[50], nome2[50];
    unsigned int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    unsigned int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    int densidadePopulacionalMaior, pibPerCapitaMaior, pontosTuristicosMaior;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("insira as informacoes seguintes para cada cidade:\n - Digite o Estado da primeira carta (letras de A a H): \n");
    scanf("%s", &estado1);

    printf("Digite o código  da primeira carta  (Numero entre '01' e '04'): \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade da primeira carta : \n");
    scanf("%s", &nome1);

    printf("Digite a população da primeira carta : \n");
    scanf("%u", &populacao1);

    printf("Digite a area em km² da primeira carta : \n");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira carta : \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos da primeira carta : \n");
    scanf("%d", &pontosTuristicos1);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
	printf("Dados da Primeira Carta Cadastrada \n");
    printf("Estado: %s \n",estado1);
    printf("Código da Carta: %s%s \n",estado1,codigo1);
    printf("Nome da Cidade: %s \n",nome1);
    printf("População: %u \n",populacao1);
    printf("Área: %.2f km² \n",area1);
    // Densidade populacional : Calculada como população dividida pela área da cidade.
    densidadePopulacional1 = (float) calcularDensidadePopulacional(populacao1 , area1);
    printf("Densidade Populacional: %.2f \n", densidadePopulacional1);
    printf("PIB: R$ %f \n", pib1);
    // PIB per capita : Calculado como PIB total da cidade dividido pela população.
    pibPerCapita1 = pib1 / (float) populacao1;
    printf("PIB per Capita: %.2f \n", pibPerCapita1);
    printf("Quantidade de Pontos Turisticos: %u \n", pontosTuristicos1);
	
	printf("Digite o Estado da segunda carta (letras de A a H): \n");
    scanf("%s", &estado2);

    printf("Digite o código  da segunda carta  (Numero entre '01' e '04'): \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade da segunda carta : \n");
    scanf("%s", &nome2);

    printf("Digite a população da segunda carta : \n");
    scanf("%d", &populacao2);

    printf("Digite a area em km² da segunda carta : \n");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta : \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da segunda carta : \n");
    scanf("%d", &pontosTuristicos2);
    
    // Exibição dos Dados da segunda cartas
	printf("Dados da Segunda Carta Cadastrada \n");
    printf("Estado: %s \n",estado2);
    printf("Código da Carta: %s%s \n",estado2,codigo2);
    printf("Nome da Cidade: %s \n",nome2);
    printf("População: %u \n",populacao2);
    printf("Área: %f km² \n",area2);
    // Densidade populacional : Calculada como população dividida pela área da cidade.
    densidadePopulacional2 = (float) calcularDensidadePopulacional(populacao2 , area2);
    printf("Densidade Populacional: %.2f \n", densidadePopulacional2);
    printf("PIB: R$ %f \n", pib2);
    // PIB per capita : Calculado como PIB total da cidade dividido pela população.
    pibPerCapita2 = pib2 / (float) populacao2;
    printf("PIB per Capita: %.2f \n", pibPerCapita2);
    printf("Quantidade de Pontos Turisticos: %u \n", pontosTuristicos2);

    // Comparação se Densidade Populacional da Carta1 é MAIOR que da Carta2
    densidadePopulacionalMaior = densidadePopulacional1 > densidadePopulacional2;
    printf("A Densidade Populacional do Estado %s eh MAIOR que a do Estado %s : %d \n",estado1,estado2,densidadePopulacionalMaior );
    printf("Densidade Populacional do Estado %s : %.2f \n",estado1, densidadePopulacional1 );
    printf("Densidade Populacional do Estado %s : %.2f \n",estado2, densidadePopulacional2 );

    // Comparação se PIB per capita da Carta1 é MAIOR que da Carta2
    pibPerCapitaMaior = pibPerCapita1 > pibPerCapita2;
    printf("O Pib per Capita do Estado %s eh MAIOR que a do Estado %s : %d \n",estado1,estado2,pibPerCapitaMaior );
    printf("Pib per Capita do Estado %s : %.2f \n",estado1, pibPerCapita1 );
    printf("Pib per Capita do Estado %s : %.2f \n",estado2, pibPerCapita2 );

    // Comparação se a quantidade de Pontos Turisticos da Carta1 é MAIOR que da Carta2
    pontosTuristicosMaior = pontosTuristicos1 > pontosTuristicos2;
    printf("A Quantidade de Pontos Turisticos do Estado %s eh MAIOR que a do Estado %s : %d \n",estado1,estado2,pontosTuristicosMaior );
    printf("Qtd de Pontos Turisticos do Estado %s : %u \n",estado1, pontosTuristicos1 );
    printf("Qtd de Pontos Turisticos do Estado %s : %u \n",estado2, pontosTuristicos2 );

    return 0;
}