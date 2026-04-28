#include <stdio.h>

int main()
{
    FILE *fp;
    char c;
    fp = fopen("test.txt", "r");
    if (fp == NULL)
    {
        printf("File isnot created!!!");
    }
    else
    {
        while (1)
        {
            c = fgetc(fp);
            printf("%c", c);
            if (c == EOF)
            {
                break;
            }
        }
    }
    fclose(fp);

    return 0;
}