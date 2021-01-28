#include<stdio.h>
__declspec(dllimport) int add(int a, int b);

int main() {
    printf("%i\n", add(1, 2));
    return 0;
}