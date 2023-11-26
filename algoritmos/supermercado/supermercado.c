#include <stdio.h>

float calcularPagamento(float valorTotal, char formaPagamento) {
    if (formaPagamento == 'A' || formaPagamento == 'a') {
        // Pagamento à vista com 5% de desconto em 2 parcelas
        float desconto = valorTotal * 0.05;  // 5% de desconto
        float valorParcela = (valorTotal - desconto) / 2;
        return valorParcela;
    } else if (formaPagamento == 'C' || formaPagamento == 'c') {
        // Pagamento com cartão de crédito com 5% de acréscimo
        float acrescimo = valorTotal * 0.05;  // 5% de acréscimo
        float valorFinal = valorTotal + acrescimo;
        return valorFinal;
    } else {
        printf("Forma de pagamento inválida.\n");
        return 0.0;
    }
}

int main() {
    float valorTotal;
    char formaPagamento;

    printf("Digite o valor total da venda: ");
    scanf("%f", &valorTotal);
    printf("Digite a forma de pagamento (A - À vista, C - Cartão de crédito): ");
    scanf(" %c", &formaPagamento);

    float valorPago = calcularPagamento(valorTotal, formaPagamento);
    printf("Valor a ser pago pelo cliente: %.2f\n", valorPago);

    return 0;
}
