int main()
{
    float base, expoente;
    printf("Qual � a base:");
    scanf("%f", &base);
    printf("Qual � o expoente:");
    scanf("%f", &expoente);
    float resultado = pow(base, expoente);
    printf("O resultado �: %.2f", resultado);
    return 0;
}
