#include <stdio.h>

int main()
{
    int k, r;
    scanf("%d %d", &k, &r);

    int shovels = 1;
    int total_cost = k;

    while (total_cost % 10 != 0 && total_cost % 10 != r)
    {
        total_cost += k;
        shovels++;
    }

    printf("%d\n", shovels);

    return 0;
}
