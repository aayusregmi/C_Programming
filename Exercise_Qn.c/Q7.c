#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *sfp, *dfp;
    char source[50];
    char destination[50];
    char c;
    printf("Enter the name of the source file:");
    scanf("%s", &source);
    getchar();
    sfp = fopen(source , "r");
    if (sfp == NULL)
    {
        printf("File doesnot exist!!");
        exit(1);
    }
    printf("Enter the name of destination file:");
    scanf("%s", &destination);
    getchar();
    dfp = fopen(destination, "w");
    while ((c = fgetc(sfp)) != EOF)
    {
        fputc(c, dfp);
    }
    fclose(sfp);
    fclose(dfp);

    return 0;
}