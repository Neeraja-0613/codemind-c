#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int res = ((a + 1) * 4) + (b * 3);

    if (res % 8 == 0)
        printf("%d\n", res / 8);
    else
        printf("%d\n", (res / 8) + 1);

    return 0;
}
