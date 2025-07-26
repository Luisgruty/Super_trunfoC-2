#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
 int main () {
 // Estrutura para armazenar os dados de cada carta
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
} Carta;

// Função para exibir o menu e retornar a escolha do usuário
int exibirMenu() {
    int opcao;
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Digite o número da opção desejada: ");
    scanf("%d", &opcao);
    return opcao;
}

// Função para comparar dois atributos e exibir o resultado
void compararCartas(Carta c1, Carta c2, int atributo) {
    printf("\nComparando: %s vs %s\n", c1.nome, c2.nome);
    switch(atributo) {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %d\n", c1.nome, c1.populacao);
            printf("%s: %d\n", c2.nome, c2.populacao);
            if (c1.populacao > c2.populacao)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.populacao > c1.populacao)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;
        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f\n", c1.nome, c1.area);
            printf("%s: %.2f\n", c2.nome, c2.area);
            if (c1.area > c2.area)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.area > c1.area)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;
        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", c1.nome, c1.pib);
            printf("%s: %.2f\n", c2.nome, c2.pib);
            if (c1.pib > c2.pib)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.pib > c1.pib)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;
        case 4: // Pontos turísticos
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", c1.nome, c1.pontos_turisticos);
            printf("%s: %d\n", c2.nome, c2.pontos_turisticos);
            if (c1.pontos_turisticos > c2.pontos_turisticos)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.pontos_turisticos > c1.pontos_turisticos)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;
        case 5: // Densidade demográfica (regra invertida)
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f\n", c1.nome, c1.densidade_demografica);
            printf("%s: %.2f\n", c2.nome, c2.densidade_demografica);
            if (c1.densidade_demografica < c2.densidade_demografica)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.densidade_demografica < c1.densidade_demografica)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
    }
}

int main() {
    // Exemplo de cartas já cadastradas
    Carta carta1 = {"Brasil", 211000000, 8515767.0, 1839.8, 10, 24.78};
    Carta carta2 = {"Argentina", 44938712, 2780400.0, 449.7, 7, 16.17};

    int opcao = exibirMenu();
    compararCartas(carta1, carta2, opcao);

    return 0;
}



