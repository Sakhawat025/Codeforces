#include <stdio.h>
#include <string.h>

int main() {
    char borze[201];
    scanf("%s", borze);

    int len = strlen(borze);
    int i = 0;
    while (i < len) {
        if (borze[i] == '.') {
            printf("0");
            i++;
        } else if (borze[i] == '-' && borze[i + 1] == '.') {
            printf("1");
            i += 2;
        } else if (borze[i] == '-' && borze[i + 1] == '-') {
            printf("2");
            i += 2;
        }
    }

    printf("\n");
    return 0;
}
