#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float med1, med2, med3;

    printf("Insira a primeira medida: ");
    scanf("%f", &med1);

    printf("Insira a segunda medida: ");
    scanf("%f", &med2);

    printf("Insira a terceira medida: ");
    scanf("%f", &med3);

    if (med1 == med2 && med2 == med3) {
        printf("\n… um tri‚ngulo equil·tero\n");
    } else if (med1 == med2 || med2 == med3 || med3 == med1) {
        printf("\n… um tri‚ngulo isÛsceles\n");
    } else if (med1 != med2 && med2 != med3 && med3 != med1) {
        printf("\n… um tri‚ngulo escaleno\n");
    } else {
        printf("\nEssas medidas n„o podem formar um tri‚ngulo\n");
    }

    system("pause");
    return 0;
}
