#include <stdio.h>

int main(void) {
    /* Caractères */
    signed char sc = -42;
    unsigned char uc = 200U;

    /* Entiers courts */
    short s = -12345;
    unsigned short us = 54321U;

    /* Entiers “classiques” */
    int i = -123456;
    unsigned int ui = 345678U;

    /* Longs (attention: taille dépend de la plateforme) */
    long li = -2000000000L;
    unsigned long uli = 3000000000UL;

    /* Très longs (toujours au moins 64 bits en pratique) */
    long long lli = -1234567890123LL;
    unsigned long long ulli = 123456789012345ULL;

    /* Virgule flottante */
    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.61803398875L;

    /* Affichages */
    printf("signed char           = %hhd\n", sc);
    printf("unsigned char         = %hhu\n", uc);

    printf("short                 = %hd\n", s);
    printf("unsigned short        = %hu\n", us);

    printf("int                   = %d\n", i);
    printf("unsigned int          = %u\n", ui);

    printf("long int              = %ld\n", li);
    printf("unsigned long int     = %lu\n", uli);

    printf("long long int         = %lld\n", lli);
    printf("unsigned long long    = %llu\n", ulli);

    printf("float                 = %.6f\n", f);
    printf("double                = %.9f\n", d);
    printf("long double           = %.12Lf\n", ld);

    return 0;
}


