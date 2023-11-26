main()
{
    printf("\nMulheres entre 18 e 35 anos: %d", contaIndividuos(0, 18, 35));
}

/*
Função que calcula a quantidade de indivíduos de um determinado sexo (1-masculino e 0-feminino)
dentro de uma faixa de valores (idadeMinima .. idadeMaxima)
*/
int contaIndividuos(int sexoDesejado, int idadeMinima, int idadeMaxima)
{
    int sexo, idade;
    int contador = 0;
    char continua = 'S';
    while (continua == 'S' || continua == 's')
    {
        printf("\n\nInforme o sexo 1-Masculino 0-Feminino: ");
        scanf("%d", &sexo);

        printf("\nInforme a idade: ");
        scanf("%d", &idade);

        if (sexo == sexoDesejado && idade >= idadeMinima && idade <= idadeMaxima)
        {
            contador++;
        }

        printf("\nDeseja continuar? S ou s para continuar: ");
        continua = getche();
    }
    return contador;
}
