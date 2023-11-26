#include <stdio.h>

float calcularPagamento(float valorTotal, char formaPagamento) {
    if (formaPagamento == 'A' || formaPagamento == 'a') {
        // Pagamento � vista com 5% de desconto em 2 parcelas
        float desconto = valorTotal * 0.05;  // 5% de desconto
        float valorParcela = (valorTotal - desconto) / 2;
        return valorParcela;
    } else if (formaPagamento == 'C' || formaPagamento == 'c') {
        // Pagamento com cart�o de cr�dito com 5% de acr�scimo
        float acrescimo = valorTotal * 0.05;  // 5% de acr�scimo
        float valorFinal = valorTotal + acrescimo;
        return valorFinal;
    } else {
        printf("Forma de pagamento inv�lida.\n");
        return 0.0;
    }
}

int main() {
    float valorTotal;
    char formaPagamento;

    printf("Digite o valor total da venda: ");
    scanf("%f", &valorTotal);
    printf("Digite a forma de pagamento (A - � vista, C - Cart�o de cr�dito): ");
    scanf(" %c", &formaPagamento);

    float valorPago = calcularPagamento(valorTotal, formaPagamento);
    printf("Valor a ser pago pelo cliente: %.2f\n", valorPago);

    return 0;
}
