#include <stdio.h>

int main() {
    int i = 10;
    float f = 25.5;
    char c = 'A';

    // Pointers initialized at declaration
    int *p_i = &i;
    float *p_f = &f;
    char *p_c = &c;

    printf("Type: int\n");
    printf("  Variable value: %d\n  Pointer value: %d\n\n", i, *p_i);

    printf("Type: float\n");
    printf("  Variable value: %f\n  Pointer value: %f\n\n", f, *p_f);

    printf("Type: char\n");
    printf("  Variable value: %c\n  Pointer value: %c\n\n", c, *p_c);

    return 0;
}
