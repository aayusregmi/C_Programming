#include <stdio.h>

int main()
{
    FILE *sfp, *dfp;
    char source[50];
    char destination[50];
    char c;
    printf("Enter the file name for the source file:");
    scanf("%s", source);
    getchar();
    sfp = fopen(source, "r");
    if (sfp == NULL)
    {
        printf("File doesnot exist!!");
    }
    printf("Enter the file name for the destination file:");
    scanf("%s", destination);
    getchar();
    dfp = fopen(destination, "w");
    while ((c = fgetc(sfp)) != EOF)
    {
        if (c != 'a' && c != 'A' && c != 'e' && c != 'E' && c != 'i' && c != 'I' && c != 'o' && c != 'O' && c != 'u' && c != 'U')
        {
            fputc(c, dfp);
        }
    }
    fclose(sfp);
    fclose(dfp);

    return 0;
}