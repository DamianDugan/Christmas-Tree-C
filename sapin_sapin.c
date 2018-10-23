#include "sapin.h"

void	sapin(int size)
{
  int	counter_para = 1;
  int	counter_line;
  int	nb_line;
  int	nb_carac_line = get_last_nb_etoile(size);
  int	nb_etoile;
  int	nb_pipe = (size % 2 == 0) ? (size + 1) : size;

  /* gestion erreur argument input */
  if (size == 0)
    return;

  if (size <= 0)
    {
      my_putstr("Argument needs to be a positive number.\n");
      return;
    }
  
  /* print du corps */
  while (counter_para <= size)
    {
      counter_line = 1;
      nb_line = counter_para + 3;
      
      while (counter_line <= nb_line)
	{
	  nb_etoile = get_nb_etoile(counter_para, counter_line);
	  my_print_carac(' ', get_nb_space(nb_carac_line, nb_etoile) / 2);
	  my_print_carac('*', get_nb_etoile(counter_para, counter_line));
	  my_print_carac(' ', get_nb_space(nb_carac_line, nb_etoile) / 2);
	  my_putstr("\n");
	  counter_line++;
	}
      counter_para++;
    }

  /* print du tronc */
  counter_line = 0;
  while (counter_line < size)
    {
      my_print_carac(' ', get_nb_space(nb_carac_line, nb_pipe) / 2);
      my_print_carac('|', nb_pipe);
      my_print_carac(' ', get_nb_space(nb_carac_line, nb_pipe) / 2);
      my_putstr("\n");
      counter_line++;
    }
}
