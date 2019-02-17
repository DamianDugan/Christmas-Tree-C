#ifndef SAPIN_H

#define SAPIN_H

#include <unistd.h>
#include <stdlib.h>

void	sapin(int size);
void	my_putstr(char *str);
void	my_print_carac( char c, int n);
int	get_last_nb_etoile(int size);
int	get_nb_etoile(int paragraph, int line);
int	get_nb_space(int nb_carac_line, int nb_etoile);

#endif
