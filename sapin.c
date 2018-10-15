#include <unistd.h>

int	my_putchar(char c)
{
  write(1, &c, 1);
}

void	printStar()
{
  my_putchar('*');
}

void	sandwich(int f, int n, int toth)
{
  int i, j, k = 2 * toth -2;
  
  for(i = 0; i < f - 1; i++)
    k--;
  for(i = f - 1; i < n - i; i++)
    {
      for(j = 0; j < k ; j++)
	{
	  my_putchar(' ');
	}
      k--;
      for(j = 0; k <= i; j++)
	{
	  printStar();
	}
      my_putchar('\n');
    }
}

void	sapin(int size)
{
  int start = 1, stop = 0, diff = 3;
  while(stop < size + 1)
    {
      stop = start + diff;
      sandwich(start, stop, size);
      diff++;
      start = stop - 2;
    }
}


int	main()

{
  int size;
  int i;
  i = 0;
  size = 3;
  while ( i < size)
    {
      sapin(size);
      i++;
    }
}
