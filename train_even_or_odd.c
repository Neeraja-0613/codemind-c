#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int x[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &x[i]);
        }
        
        int osum = 0, esum = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0)  // even index (0-based)
                osum += x[i];
            else
                esum += x[i];
        }
        
        if (osum > esum)
            printf("%d\n", osum);
        else
            printf("%d\n", esum);
    }
    return 0;
}
