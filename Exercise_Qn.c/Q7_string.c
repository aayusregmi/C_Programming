#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *sfp, *dfp;
    char source[50];
    char destination[50];
    char buffer[100];
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
    while ((fgets (buffer , sizeof(buffer) , sfp)) != NULL)
    {
        fputs(buffer , dfp);
    }
    fclose(sfp);
    fclose(dfp);

    return 0;
}