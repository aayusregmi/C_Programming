#include <stdio.h>
#include<conio.h>

int main(){
    FILE *fp;
    char str[10];
    char c;
    printf("Enter the file name:\n");
    scanf("%s" , str);
    getchar();
    fp = fopen(str , "w");
    if (fp == NULL)
    {
        printf("File doesnot exist!!\n");
    }
    else{
        printf("File exist!!\n");
        while((c = getchar()) != '\n')
        {
            fputc(c , fp);
        }
    }
    fclose(fp);
    return 0;
}