/*
** encodeur.c for rush in /home/song_k/rendu/CPE_2013_Rush1
** 
** Made by song_k
** Login   <song_k@epitech.net>
** 
** Started on  Fri Dec 13 20:15:08 2013 song_k
** Last update Sun Dec 15 20:55:50 2013 song_k
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

int	my_trslaff(char *stock, int *i, t_morse *save, int pos)
{
  int	ct;
  int	s;

  ct = 0;
  s = *i;
  while (stock[*i] == save->trsl[pos][ct] && stock[*i] != '\0')
    {
      *i = *i + 1;
      ct = ct + 1;
    }
  if ((save->trsl[pos][ct] == '\0' && stock[*i] == '\0') ||
      (save->trsl[pos][ct] == '\0' && stock[*i + 1] == '.' &&
      stock[*i + 2] == '.'))
    {
      my_putchar(save->dict[pos]);
      if (stock[*i] == '\0')
	my_putchar('\n');
      return (0);
    }
  *i = s;
  return (-1);
}

void	my_trsl(char *stock, t_morse *save)
{
  int	i;
  int	ct;
  int	chk;

  i = 0;
  ct = 0;
  while (stock[i] != '\0' && save->trsl[ct] != NULL)
    {
      chk = -1;
      if (stock[i] == save->trsl[ct][0])
	chk = my_trslaff(stock, &i, save, ct);
      if (chk == -1)
	ct = ct + 1;
      else if (chk == 0 && stock[i] != '\0')
	{
	  if (stock[i] == '.' && stock[i + 1] == '.' && stock[i + 2] == '.')
	    {
	      i = i + 3;
	      ct = 0;
	    }
	  else
	    my_printstop();
	}
    }
}

int		main()
{
  t_morse	save;
  char		*stock;
  int		chk;

  chk = my_filltrsl(&save);
  if (chk == -1)
    return (-1);
  while ((stock = get_next_line(0)) != NULL)
    {
      my_checkdecodestr(stock, &save);
      my_trsl(stock, &save);
      if (chk == -1)
	return (-1);
      free(stock);
    }
  my_freestruct(&save);
  return (0);
}
