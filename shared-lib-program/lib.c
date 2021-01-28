#ifdef _MSC_VER
__declspec(dllimport)
#endif 
int add(int a, int b);

int add(int a, int b) {
    return a + b;
}