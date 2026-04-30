#include <stdio.h>
// it is used to detect the end of file
int main()
{
    FILE *fp;
    char c;
    fp = fopen("randomly.txt", "r");
    if (fp == NULL)
    {
        printf("The file doesnot exist!!");
    }

    else
    {
        c = getc(fp);
        while (!feof(fp))
        {
            printf("%c", c);
            c = getc(fp);
        }
        fclose(fp);
    }

    return 0;
}