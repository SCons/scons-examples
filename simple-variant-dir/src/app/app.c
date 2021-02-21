#include<stdio.h>

#include "liba.h"

// magic to convert preprocessor macro to quoted string literal
#define QUOTE(name) #name
#define STR(macro) QUOTE(macro)

int main() {
    printf("%i\n", add(1, 2));
    printf("My Favorite Ice Cream Flavor is: %s\n",STR(FLAVOR));
    return 0;
}