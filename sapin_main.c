#include "sapin.h"
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{

    
  if(argc <= 1)
    {
      printf("You cannot have 0 parameters\n");
      return (1);
    }
  int size = atoi(argv[1]);

  sapin(size);
  
  return (0);
}
