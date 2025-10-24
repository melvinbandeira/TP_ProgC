#include <stdio.h>

int main(void) {
    char                    var_char;

    short                   var_short;
    unsigned short          var_short_unsigned;

    int                     var_int;
    unsigned int            var_int_unsigned;

    long int                var_long_int;
    unsigned long int       var_long_int_unsigned;

    long long int           var_long_long_int;
    unsigned long long int  var_long_long_int_unsigned;

    float                   var_float;
    double                  var_double;
    long double             var_long_double;

    printf("var char size                      : %zu\n", sizeof var_char);

    printf("var short size                     : %zu\n", sizeof var_short);
    printf("var short unsigned size            : %zu\n", sizeof var_short_unsigned);

    printf("var int size                       : %zu\n", sizeof var_int);
    printf("var int unsigned size              : %zu\n", sizeof var_int_unsigned);

    printf("var long int size                  : %zu\n", sizeof var_long_int);
    printf("var long int unsigned size         : %zu\n", sizeof var_long_int_unsigned);

    printf("var long long int size             : %zu\n", sizeof var_long_long_int);
    printf("var long long int unsigned size    : %zu\n", sizeof var_long_long_int_unsigned);

    printf("var float size                     : %zu\n", sizeof var_float);
    printf("var double size                    : %zu\n", sizeof var_double);
    printf("var long double size               : %zu\n", sizeof var_long_double);

    return 0;
}
