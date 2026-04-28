#include <stdio.h>

int main(){
  FILE  *fptr;
  fptr = fopen("2file.txt" , "w");
  if (fptr == NULL)
  {
    printf("File doesnot exist!!");
  }else{
    fputc('A' , fptr);
  }
  fclose(fptr);
  




    return 0;
}