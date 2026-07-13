#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 4; i++)
    {
        int num = 1;
        for(j = 1; j <= i; j++)
        {
            printf("%d", num);
            num += 2;   // Next odd number
        }
        printf("\n");
    }

    return 0;
}
