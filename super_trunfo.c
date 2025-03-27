#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// 18/02/2025 - Fabiano Veiga - Desafio Novato (Tema 1)
// 21/02/2025 - Fabiano Veiga - Desafio Aventureiro (Tema 1)
// 06/03/2025 - Fabiano Veiga - Desafio Mestre (Tema 1)
// 08/03/2025 - Fabiano Veiga - Desafio Novato (Tema 2)
// 17/03/2025 - Fabiano Veiga - Desafio Aventureiro (Tema 2)
// 25/03/2025 - Fabiano Veiga - Desafio Mestre (Tema 2)

//Variáveis de dados das cartas
char pais1[50], pais2[50];
unsigned int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
unsigned int pontosTuristicos1, pontosTuristicos2;
float densidadePopulacional1, densidadePopulacional2;
float soma1, soma2;

//Variáveis de dados dos atributos
int primeiroAtributo, segundoAtributo;

int escolherAtributos(void){
    printf("Voce deve escolher dois atributos diferentes para a comparação entre duas cartas! \n");
    printf("Escolha o primeiro atributo que será comparado: \n");
    printf("1. População.\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");	
    scanf("%d", &primeiroAtributo);

    printf("Escolha o segundo atributo que será comparado: \n");
    printf("1. População.\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");	
    scanf("%d", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo) {
        printf("Os atributos não podem ser iguais! \n");
        return 1;
    }

    return 0;
}

float calcularDensidadePopulacional(int _populacao , int _area ) {
    // Densidade populacional : Calculada como população dividida pela área da cidade. 
    // Isso dá uma medida de quantas pessoas vivem por quilômetro quadrado. 

    float _densidadePopulacional;
    _densidadePopulacional = (float) (_populacao / _area);

    return _densidadePopulacional * -1;
}

int cadastrarAtributoPrimeiroPais(int _atributo) {

    switch (_atributo) {
        case 1:
            printf("Entre com a população do País:  \n");
            scanf("%u", &populacao1);
            soma1 = soma1 + (float) populacao1;
            break;
        case 2:
            printf("Entre com  a area em km² do País:  \n");
            scanf("%f", &area1);
            soma1 = soma1 + area1;
            break;
        case 3:
            printf("Entre com  o PIB do País:  \n");
            scanf("%f", &pib1);
            soma1 = soma1 + pib1;
            break;
        case 4:
            printf("Entre com  a quantidade de pontos turisticos do País:  \n");
            scanf("%d", &pontosTuristicos1);
            soma1 = soma1 + (float) pontosTuristicos1;
            break;
        case 5:
            printf("Entre com a população do País:  \n");
            scanf("%u", &populacao1);
            printf("Entre com  a area em km² do País:  \n");
            scanf("%f", &area1);
            densidadePopulacional1 = calcularDensidadePopulacional(populacao1 , area1);
            soma1 = soma1 + densidadePopulacional1;
            break;
        default:
            printf("Primeiro Atributo: Opção inválida! \n");
            return 1;
    }
    
    return 0;
}

int cadastrarAtributoSegundoPais(int _atributo) {

    switch (_atributo) {
        case 1:
            printf("Entre com a população do País:  \n");
            scanf("%u", &populacao2);
            soma2 = soma2 + (float) populacao2;
            break;
        case 2:
            printf("Entre com  a area em km² do País:  \n");
            scanf("%f", &area2);
            soma2 = soma2 + area2;
            break;
        case 3:
            printf("Entre com  o PIB do País:  \n");
            scanf("%f", &pib2);
            soma2 = soma2 + pib2;
            break;
        case 4:
            printf("Entre com  a quantidade de pontos turisticos do País:  \n");
            scanf("%d", &pontosTuristicos2);
            soma2 = soma2 + (float) pontosTuristicos2;
            break;
        case 5:
            printf("Entre com a população do País:  \n");
            scanf("%u", &populacao2);
            printf("Entre com  a area em km² do País:  \n");
            scanf("%f", &area2);
            densidadePopulacional2 = calcularDensidadePopulacional(populacao2 , area2);
            soma2 = soma2 + densidadePopulacional2;
            break;
        default:
            printf("Primeiro Atributo: Opção inválida! \n");
            return 1;
    }
    
    return 0;
}

void compararAtributo(int _atributo){
    
    float valorAtributo1, valorAtributo2;

    switch (_atributo) {
		case 1:
			//Comparação por População:
			printf("Atributo: População): \n");
			valorAtributo1 = (float) populacao1;
			valorAtributo2 = (float) populacao2;
			break;
		case 2:
			//Comparação por Área:
			printf("Atributo: Área): \n");
			valorAtributo1 = area1;
			valorAtributo2 = area2;
			break;
		case 3:
			//Comparação por PIB:
			printf("Atributo: PIB): \n");
			valorAtributo1 = pib1;
			valorAtributo2 = pib2;
			break;
		case 4:
			//Comparação por Número de pontos turísticos:
			printf("Atributo: Número de pontos turísticos): \n");
			valorAtributo1 = (float) pontosTuristicos1;
			valorAtributo2 = (float) pontosTuristicos2;
			break;
		case 5:
			//Comparação por Densidade demográfica:
			printf("Atributo: Densidade demográfica): \n");
			valorAtributo1 = densidadePopulacional1;
			valorAtributo2 = densidadePopulacional2;
			break;
	}

    printf("País %s : %u \n", pais1, valorAtributo1);
	printf("País %s : %u \n", pais2, valorAtributo2);
	
	if(valorAtributo1 > valorAtributo2){
		printf("Resultado: País %s venceu! \n", pais1);
	} else {
		if (valorAtributo1 < valorAtributo2) {
			printf("Resultado: País %s venceu! \n", pais2);
		} else {
			printf("Resultado: Empate! \n");
		}
	}
}

int main() {
    // Exibe menu para escolha de Dois Atributos
    if(escolherAtributos()==1) return 1;

    // Exibe tela para cadastrar os dados do primeiro país;    
    printf("Entre com o nome do primeiro País: \n");
    scanf("%s", &pais1);
    soma1 = 0;
	if(cadastrarAtributoPrimeiroPais(primeiroAtributo) == 1) return 1;
    if(cadastrarAtributoPrimeiroPais(segundoAtributo) == 1) return 1;

    // Exibe tela para cadastrar os dados do segundo país;
    printf("Entre com o nome do segundo País: \n");
    scanf("%s", &pais2);
    soma2 = 0;
	if(cadastrarAtributoSegundoPais(primeiroAtributo) == 1) return 1;
    if(cadastrarAtributoSegundoPais(segundoAtributo) == 1) return 1;

    // Exibe tela com resultado Final
    compararAtributo(primeiroAtributo);
    compararAtributo(segundoAtributo);

    printf("Total de Pontos do pais %s : %.2f \n", pais1, soma1);
    printf("Total de Pontos do pais %s : %.2f \n", pais2, soma2);

    if(soma1 > soma1){
		printf("Resultado Final: País %s venceu! \n", pais1);
	} else {
		if (soma1 < soma1) {
			printf("Resultado Final: País %s venceu! \n", pais2);
		} else {
			printf("Resultado Final: Empate! \n");
		}
	}
	
    return 0;
}