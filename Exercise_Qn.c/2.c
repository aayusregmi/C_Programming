#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *fp;
    fp = fopen("string.txt" , "r");
    char str[50];
    if (fp == NULL)
    {
        printf("File doesnot exist!!");
        exit(0);
    }
    else
    {
        printf("File exist!!\t");
    }
    fgets(str , sizeof(str) , fp);
        printf("%s" , str);
    
    return 0;
}