#include <stdio.h>

int main(void){
  
    int i;
  
    double d;
  
    char c;
  
    float f;
  

  
    printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(i));
  
    printf("Size of a double: %lu byte(s)\n", (unsigned long)sizeof(d));
  
    printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
  
    printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
  
  return 0;
  
}
