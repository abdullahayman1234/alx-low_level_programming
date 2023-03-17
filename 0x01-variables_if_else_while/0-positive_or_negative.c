#include <stdio.h>  
#include <stdlib.h>  
int main()  
{  
    int n = rand();   
    srand( time(0));  
  if(n>0){
       printf("is positive\n");
  } else if(n<0){
      printf("is negative\n");
  }else {
      printf("is zero\n");
  }
     return 0;  
}
