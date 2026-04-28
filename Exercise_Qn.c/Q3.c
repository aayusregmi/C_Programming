#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("test.txt", "a");
    if (fp == NULL)
    {
        printf("File isnot created!!");
        exit(1);
    }
    else
    {
        fputs("@TU", fp);
    }
    fclose(fp);

    return 0;
}