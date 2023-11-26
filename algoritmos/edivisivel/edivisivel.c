void apresentacao(void);
int eDivisivel( int a, int b);

main()
{
    int n1,n2;
    apresentacao();
    printf("\nInforme um numero: ");
    scanf("%d", &n1);
    printf("\nInforme um numero: ");
    scanf("%d", &n2);

    if ( eDivisivel(n1,n2))
    {
        printf("%d e divisivel por %d", n1, n2);
    }
    else
    {
        printf("%d NAO e divisivel por %d", n1, n2);
    }
}

void apresentacao(void)
{
    system("cls");
    printf("\n*************************************");
    printf("\nPROGRAMA QUE EXPLICA O USO DE FUNCOES");
    printf("\nAutor: Fulano de Tal");
    printf("\n*************************************");
}


int eDivisivel(int a, int b)
{
    return (a % b) == 0;
}

