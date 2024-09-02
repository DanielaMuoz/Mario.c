#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h, sp, col, r;
    do
    {
        h = get_int("Insert height here: ");
    }

    while (h < 1 || h > 8);

    for (r = 0; r < h; r++)

    {
        for (sp = 0; sp < h - r - 1; sp++)
        {
            printf(" ");
        }

        for (col = 0; col <= r; col++)
        {
            printf("#");
        }
        printf("  ");

        for (col = 0; col <= r; col++)
        {
            printf("#");
        }
        printf("\n");
    }
}
