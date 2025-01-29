#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// 17/01/2025 - Fabiano Veiga - Desafio Novato
// 29/01/2025 - Fabiano Veiga - Desafio 

char estado;
char codigo[2];
char nome[50];
int populacao;
float area;
float pib;
int pontosTuristicos;
float densidade;
float pibPerCapita;

void entradaDados() {
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("insira as informacoes seguintes para cada cidade:\n - Digite um estado (letras de A a H): \n");
    scanf("%s", &estado);

    printf("Digite o código da carta (Numero entre '01' e '04'): \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a area em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos);
}

float calcularDensidadePopulacional(int _populacao , int _area ) {
    // Densidade populacional : Calculada como população dividida pela área da cidade. 
    // Isso dá uma medida de quantas pessoas vivem por quilômetro quadrado. 

    float _densidadePopulacional;
    _densidadePopulacional = (float) (populacao / area);

    return _densidadePopulacional;
}

float calcularPibPerCapita(float _pibTotal , int _populacao) {
    // PIB per capita : Calculado como PIB total da cidade dividido pela população. 
    // Isso dá uma medida da média de produção econômica por pessoa.
 
    float _pibPerCapita;
    _pibPerCapita = _pibTotal / (float) _populacao;

    return _pibPerCapita;
}

void exibirCarta() {
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Estado: %s \n",estado);
    printf("Código da Carta: %s%s \n",estado,codigo);
    printf("Nome da Cidade: %s \n",nome);
    printf("População: %d \n",populacao);
    printf("Área: %f km² \n",area);
    printf("Densidade Populacional: %.2f \n", densidade);
    printf("PIB: R$ %f \n", pib);
    printf("PIB per Capita: %.2f \n", pibPerCapita);
    printf("Quantidade de Pontos Turisticos: %d \n", pontosTuristicos);
}

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    entradaDados();
    densidade = calcularDensidadePopulacional(populacao, area);
    pibPerCapita = calcularPibPerCapita(pib,populacao); 
    exibirCarta();

    return 0;
}