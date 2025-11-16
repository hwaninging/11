#include <stdio.h>
#include <stdlib.h>
//½Ç½À2
int main(int argc, char *argv[])
{
  int i = 300;
  
  int *pi = &i;
  char *pc = &i;
  
  printf("%i, %i, %i\n", i, *pi, *pc);                    
                                
  system("PAUSE");	
  return 0;
}
