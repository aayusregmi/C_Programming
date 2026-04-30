#include <stdio.h>
//it is used to detect the end of file
int main(){
    FILE  *fp; char c;
    fp = fopen("randomly.txt" , "r");
    if (fp == NULL)
    {
        printf("The file doesnot exist!!");
    }
    else{
        while (!feof(fp))
        {
            c = getc(fp);
            printf("%c" , c);
        }
        fclose(fp);
        
    }
    
    return 0;
}