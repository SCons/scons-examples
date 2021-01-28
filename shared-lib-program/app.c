#include<stdio.h>

#ifdef _MSC_VER
__declspec(dllimport)
#endif 
int add(int a, int b);

int main() {
    printf("%i\n", add(1, 2));
    return 0;
}