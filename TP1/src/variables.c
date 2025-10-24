#include <stdio.h>

int main(void) {
    char                    var_char = 'e';
    unsigned char           var_char_unsigned = 200;      // évite 'é' (non portable)

    short                   var_short = 3;
    unsigned short          var_short_unsigned = 3;

    int                     var_int = 1620;
    unsigned int            var_int_unsigned = 1620U;

    long int                var_long_int = 88888888888L;           // suffixe L
    unsigned long int       var_long_int_unsigned = 8888888888888888UL;

    long long int           var_long_long_int = 999999999999999LL; // suffixe LL
    unsigned long long int  var_long_long_int_unsigned = 9999999999999ULL;

    float                   var_float = 0.1f;           // suffixe f
    double                  var_double = 0.1254;
    long double             var_long_double = 0.1365485446958456L; // suffixe L

    printf("var char size                       : %zu\n", sizeof var_char);
    printf("var char unsigned size              : %zu\n", sizeof var_char_unsigned);

    printf("var short size                      : %zu\n", sizeof var_short);
    printf("var short unsigned size             : %zu\n", sizeof var_short_unsigned);

    printf("var int size                        : %zu\n", sizeof var_int);
    printf("var int unsigned size               : %zu\n", sizeof var_int_unsigned);

    printf("var long int size                   : %zu\n", sizeof var_long_int);
    printf("var long int unsigned size          : %zu\n", sizeof var_long_int_unsigned);

    printf("var long long int size              : %zu\n", sizeof var_long_long_int);
    printf("var long long int unsigned size     : %zu\n", sizeof var_long_long_int_unsigned);

    printf("var float size                      : %zu\n", sizeof var_float);
    printf("var double size                     : %zu\n", sizeof var_double);
    printf("var long double size                : %zu\n", sizeof var_long_double);

    return 0;
}
