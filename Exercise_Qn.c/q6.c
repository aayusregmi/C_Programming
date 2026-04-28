#include <stdio.h>

int main()
{
    FILE *fp;
    char str[50];
    char c;
    printf("Enter the file name:");
    scanf("%49s", &str);
    getchar(); // to flush the buffer
    fp = fopen(str, "a");
    if (fp == NULL)
    {
        printf("File Cannot be open!!\n");
        return 1;
    }
    else
    {
        printf("File is open\n");
        printf("Enter the text for the append in the %s:\n" , str);
        while ((c = getchar()) != '\n')
        {
            fputc(c, fp);
        }
    }
    fclose(fp);

    return 0;
}