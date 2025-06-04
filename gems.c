#include <stdio.h>

int main() {
    int r, b, p, q;
    scanf("%d %d %d %d", &r, &b, &p, &q);
    
    int val1 = r * p;
    int val2 = b * q;
    
    if (val1 > val2)
        printf("%d\n", val1);
    else
        printf("%d\n", val2);
    
    return 0;
}
