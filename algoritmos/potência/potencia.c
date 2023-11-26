int main()
{
    float base, expoente;
    printf("Qual é a base:");
    scanf("%f", &base);
    printf("Qual é o expoente:");
    scanf("%f", &expoente);
    float resultado = pow(base, expoente);
    printf("O resultado é: %.2f", resultado);
    return 0;
}
