// counting the number of line and character in the file
#include <stdio.h>

int main()
{
    FILE *fp;
    int cl;
    int cc; // cl = no.of line and cc = no.of character
    cl = 1; // we declare the counting line as the initial cause there is the first line always.
    cc = 0;
    char c;
    fp = fopen("sample.txt", "r");
    if (fp == NULL)
    {
        printf("The file doesnot exist!!");
        return 1;
    }

    c = fgetc(fp);
    while (!feof(fp))
    {
        cc++;
        if (c == '\n') // earlier i compare '\n' and fp (one character and another is pointer variable) its wrong to do this.
        {
            cl++;
        }
        c = fgetc(fp);
    }

    fclose(fp);
    printf("The number of character in file is %d\n", cc);
    printf("The number of line in file is %d\n", cl);

    return 0;
}