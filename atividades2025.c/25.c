#include <stdio.h>

int main() {
    int codigo, qtd = 0;
    float preco, novoPreco, somaOriginal = 0, somaNovo = 0;

    while (1) {
        printf("Código do produto (negativo encerra): ");
        scanf("%d", &codigo);
        if (codigo < 0) break;

        printf("Preço de custo: ");
        scanf("%f", &preco);

        if (preco < 500000)
            novoPreco = preco * 1.10;
        else
            novoPreco = preco * 1.15;

        printf("Produto %d | Novo Preço: R$%.2f\n", codigo, novoPreco);

        somaOriginal += preco;
        somaNovo += novoPreco;
        qtd++;
    }

    if (qtd > 0) {
        printf("Média dos preços antigos: R$%.2f\n", somaOriginal / qtd);
        printf("Média dos preços novos:   R$%.2f\n", somaNovo / qtd);
    } else {
        printf("Nenhum produto informado.\n");
    }

    return 0;
}
