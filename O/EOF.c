#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("longfile.txt" , "r");
    char c;
    if (fptr == NULL)
    {
        printf("The file doesnot exist!!");
    }
    
    while(1)
    {
    c = fgetc(fptr);
    printf("%c" , c);
    if (c == EOF)
    {
        break;
    }
    
    }
    return 0;
}