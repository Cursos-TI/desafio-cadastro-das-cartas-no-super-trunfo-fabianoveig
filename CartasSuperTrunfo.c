#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// 17/01/2025 - Fabiano Veiga - Desafio Novato
float calcularDensidadePopulacional(){

}

float calcularPibPerCapita(){

}

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado;
    char codigo[2];
    char nome[50];
    int populacao;
    float area;
    float densidade;
    float pib;
    float pibPerCapita;
    int pontosTuristicos;

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
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Estado: %s \n",estado);
    printf("Código da Carta: %s%s \n",estado,codigo);
    printf("Nome da Cidade: %s \n",nome);
    printf("População: %d \n",populacao);
    printf("Área: %f km² \n",area);
    printf("PIB: R$ %f \n", pib);
    printf("Quantidade de Pontos Turisticos: %d \n", pontosTuristicos);

    return 0;
}
