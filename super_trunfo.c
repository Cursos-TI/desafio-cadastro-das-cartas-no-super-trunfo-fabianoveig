#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// 18/02/2025 - Fabiano Veiga - Desafio Novato
// 21/02/2025 - Fabiano Veiga - Desafio Aventureiro

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
    char estado;
    char codigo[2];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("insira as informacoes seguintes para cada cidade:\n - Digite o Estado da primeira carta (letras de A a H): \n");
    scanf("%s", &estado);

    printf("Digite o código  da primeira carta  (Numero entre '01' e '04'): \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade da primeira carta : \n");
    scanf("%s", &nome);

    printf("Digite a população da primeira carta : \n");
    scanf("%d", &populacao);

    printf("Digite a area em km² da primeira carta : \n");
    scanf("%f", &area);

    printf("Digite o PIB da primeira carta : \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos da primeira carta : \n");
    scanf("%d", &pontosTuristicos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
	printf("Dados da Primeira Carta Cadastrada \n",estado);
    printf("Estado: %s \n",estado);
    printf("Código da Carta: %s%s \n",estado,codigo);
    printf("Nome da Cidade: %s \n",nome);
    printf("População: %d \n",populacao);
    printf("Área: %f km² \n",area);
    // Densidade populacional : Calculada como população dividida pela área da cidade.
    densidadePopulacional = (float) calcularDensidadePopulacional(populacao , area);
    printf("Densidade Populacional: %.2f \n", densidadePopulacional);
    printf("PIB: R$ %f \n", pib);
    // PIB per capita : Calculado como PIB total da cidade dividido pela população.
    pibPerCapita = pib / (float) populacao;
    printf("PIB per Capita: %.2f \n", pibPerCapita);
    printf("Quantidade de Pontos Turisticos: %d \n", pontosTuristicos);
	
	printf("Digite o Estado da segunda carta (letras de A a H): \n");
    scanf("%s", &estado);

    printf("Digite o código  da segunda carta  (Numero entre '01' e '04'): \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade da segunda carta : \n");
    scanf("%s", &nome);

    printf("Digite a população da segunda carta : \n");
    scanf("%d", &populacao);

    printf("Digite a area em km² da segunda carta : \n");
    scanf("%f", &area);

    printf("Digite o PIB da segunda carta : \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos da segunda carta : \n");
    scanf("%d", &pontosTuristicos);
    
    // Exibição dos Dados da segunda cartas
	printf("Dados da Segunda Carta Cadastrada \n",estado);
    printf("Estado: %s \n",estado);
    printf("Código da Carta: %s%s \n",estado,codigo);
    printf("Nome da Cidade: %s \n",nome);
    printf("População: %d \n",populacao);
    printf("Área: %f km² \n",area);
    // Densidade populacional : Calculada como população dividida pela área da cidade.
    densidadePopulacional = (float) calcularDensidadePopulacional(populacao , area);
    printf("Densidade Populacional: %.2f \n", densidadePopulacional);
    printf("PIB: R$ %f \n", pib);
    // PIB per capita : Calculado como PIB total da cidade dividido pela população.
    pibPerCapita = pib / (float) populacao;
    printf("PIB per Capita: %.2f \n", pibPerCapita);
    printf("Quantidade de Pontos Turisticos: %d \n", pontosTuristicos);

    return 0;
}