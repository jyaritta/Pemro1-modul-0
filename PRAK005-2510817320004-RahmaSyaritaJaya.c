#include <stdio.h>

int main() {
    char *R[5] = {
        "#### ",
        "#   #",
        "#### ",
        "#  # ",
        "#   #"
    };

    char *A[5] = {
        " ### ",
        "#   #",
        "#####",
        "#   #",
        "#   #"
    };

    for (int i = 0; i < 5; i++) {
        printf("%s  %s\n", R[i], A[i]);
    }

    return 0;
}
