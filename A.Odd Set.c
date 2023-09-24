// Codeforces A.Odd Set
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int odd_count = 0;
        int even_count = 0;

        for (int i = 0; i < 2 * n; i++)
        {
            int num;
            scanf("%d", &num);

            if (num % 2 == 0)
            {
                even_count++;
            }
            else
            {
                odd_count++;
            }
        }

        if (even_count == odd_count)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}
