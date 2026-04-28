#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("2file.txt" , "r");
    char c;
    c = fgetc(fp);
    printf("The first character is %c" , c);



    return 0;
}