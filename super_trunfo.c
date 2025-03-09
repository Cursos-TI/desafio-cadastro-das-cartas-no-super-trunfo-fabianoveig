#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// 18/02/2025 - Fabiano Veiga - Desafio Novato
// 21/02/2025 - Fabiano Veiga - Desafio Aventureiro
// 06/03/2025 - Fabiano Veiga - Desafio Mestre
// 08/03/2025 - Fabiano Veiga - Desafio Novato (Módulo 2)

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
    float superPoder1, superPoder2;
    float pibPerCapita1, pibPerCapita2;
    int populacaoMaior, areaMaior, pibMaior, pontosTuristicosMaior;
    int densidadePopulacionalMaior, pibPerCapitaMaior, superPoderMaior;

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
    // Super Poder: soma de todos os atributos numéricos (população, área, PIB, número de pontos turísticos, 
    // PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")
    superPoder1 = (float) populacao1 
                + area1 
                + pib1 
                + (float) pontosTuristicos1 
                + pibPerCapita1 
                - densidadePopulacional1;
    printf("Super Poder: %.2f \n", superPoder1);
	
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
    // Super Poder: soma de todos os atributos numéricos (população, área, PIB, número de pontos turísticos, 
    // PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")
    superPoder2 = (float) populacao2 
                + area2 
                + pib2  
                + (float) pontosTuristicos2 
                + pibPerCapita2 
                - densidadePopulacional2;
    printf("Super Poder: %.2f \n", superPoder2);

    //Comparação de Cartas:
    printf("Comparação de cartas (Atributo: População): \n");
    printf("Carta 1 - %s : %u \n", nome1, populacao1);
    printf("Carta 2 - %s : %u \n", nome2, populacao2);

    if(populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) venceu! \n", nome1);
    } else {
        if (populacao1 < populacao2) {
            printf("Resultado: Carta 2 (%s) venceu! \n", nome2);
        } else {
            printf("Resultado: Carta 1 (%s) e Carta 2 (%s) possuem o mesmo valor para o atributo! \n", nome1 , nome2);
        }
    }
    
    //População
    //populacaoMaior = populacao1 > populacao2;
    //Área
    //areaMaior = area1 > area2;
    //printf("Área: Carta 1 venceu (%d) \n", areaMaior);
    //PIB
    //pibMaior = pib1 > pib2;
    //printf("PIB: Carta 1 venceu (%d) \n", pibMaior);
    //Pontos Turísticos
    //pontosTuristicosMaior = pontosTuristicos1 > pontosTuristicos2;
    //printf("Pontos Turísticos: Carta 1 venceu (%d) \n", pontosTuristicosMaior);
    //Densidade Populacional
    //densidadePopulacionalMaior = densidadePopulacional1 > densidadePopulacional2;
    //printf("Densidade Populacional: Carta 1 venceu (%d) \n", densidadePopulacionalMaior);
    //PIB per Capita
    //pibPerCapitaMaior = pibPerCapita1 > pibPerCapita2;
    //printf("PIB per Capita: Carta 1 venceu (%d) \n", pibPerCapitaMaior);
    //Super Poder
    //superPoderMaior = superPoder1 > superPoder2;
    //printf("Super Poder: Carta 1 venceu (%d) \n", superPoderMaior);
    
    return 0;
}