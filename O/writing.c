#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("aayus.txt", "w");
    int num = 404;
    if (fp == NULL)
    {
        printf("File doesnot exist!!");
    }else
    {
        fprintf(fp , "%d" , num);
    }
    fclose(fp);
    return 0;
}