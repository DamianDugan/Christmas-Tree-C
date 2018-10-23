#include "sapin.h"

int     get_last_nb_etoile(int n)
{
  int nb_etoile;

  if (n <= 0)
    return (0);
  
  if (n == 1)
    {
      return (nb_etoile = 7);
    }
  
  return ((get_last_nb_etoile(n - 1) - (2 * (n / 2))) + (2 * (n + 3 - 1)));
}

int	get_nb_etoile(int paragraph, int line)
{
  return (get_last_nb_etoile(paragraph) - 2 * (paragraph + 3 - line));
}

int	get_nb_space(int nb_carac_line, int nb_etoile)
{
  return (nb_carac_line - nb_etoile);
}

void	my_putstr(char *str)
{
  int counter;

  counter = 0;
  while (str[counter] != '\0')
    {
      write(1,&str[counter],1);
      counter++;
    }
}

void	my_print_carac(char c, int n)
{
  int	counter = 0;

  while (counter < n)
    {
      write(1, &c, 1);
      counter++;
    }
}
