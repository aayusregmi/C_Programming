/*Write a program to display file contents 20 lines at a time. The program pauses after displaying 20 lines until the user presses either Q to quit or Return to display the next 20 lines. As in previous programs, we read the filename from user and open it appropriately. We then process the file: */
#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[20];
    char reply[20];
    int linecount;
    char c;
    printf("Enter the name of the file\n");
    scanf("%s", filename);
    getchar(); // to remove the leftover '\n' from the scanf
    fp = fopen(filename, "r");
    reply[0] = '\0';
    linecount = 1;
    c = fgetc(fp);
    while (c != EOF && reply[0] != 'Q' && reply[0] != 'q')
    {
        printf("%c\n", c);
        if (c == '\n')
        {
            linecount++;
        }

        if (linecount == 20)
        {
            printf("Enter Q or q to quite and type return to continue\n");
            scanf("%s", reply);
            getchar();
            linecount = 1;
        }
      c = fgetc(fp);
    }
    fclose(fp);

    return 0;
}