#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    float media = 0, nota;
    int cont = 0;
    char continua = 'S';
    while (continua == 'S' || continua =='s')
    {
        printf("\nInforme a Nota: ");
        scanf("%f", &nota);
        media = media + nota;
        cont = cont + 1;
        printf("\nDeseja Continuar? S[Sim] ou N[Não]: ");
        continua = getche();
    }
    media = media / cont;
    printf("\nA media das notas da turma: %f", media);
}
