#include <locale.h>


float calculaMedia (float argA,float argB );
main()
{
    setlocale(LC_ALL, "Portuguese");
    float a, b, m;
    printf ("\nDigite o primeiro numero: " ) ;
    scanf ("%f", &a ) ;
    printf ("\nDigite o segundo numero: " ) ;
    scanf ("%f", &b ) ;
    m = calculaMedia (a, b) ;
    printf("\nMedia entre %.2f e %.2f é %.2f\n",a,b,m);

}
float calculaMedia (float argA, float argB)
{
    float mediaCalculada ;
    mediaCalculada = ( argA + argB ) / 2 ;
    return mediaCalculada ;

}
