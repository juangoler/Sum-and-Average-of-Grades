#include <stdio.h>

void calcularMediaNotas(int numNotas) {
    float nota, soma = 0;
    for (int i = 0; i < numNotas; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &nota);
        soma += nota;
    }
    printf("Soma: %.2f - Média: %.2f\n", soma, soma / numNotas);
}

int main() {
    int numNotas;
    printf("Quantas notas deseja inserir? ");
    scanf("%d", &numNotas);
    calcularMediaNotas(numNotas);
    return 0;
}
