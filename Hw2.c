#include <stdio.h>

int main () {

    int a = 10;
    printf ("int: %d\n", a);

    double b = 10.5;
    printf ("sum of a and b: %0.1lf\n", a + b);

    //adding char and int/double returns ?
    char c = '5';
    printf ("num char: %c\n", c);

    char d = 's';
    printf ("letter char: %c\n", d);

    unsigned int e = 7;
    printf ("unsigned int: %d\n", e);

    // returns 3
    long f = 3.1415;
    printf ("long: %ld\n", f);

    unsigned long g;
    printf ("unsigned long: %ld\n", g);

    printf ("%s %d %s %0.1lf %s %0.1lf", "If we add", a, "and", b, "we get", a + b);
    

}