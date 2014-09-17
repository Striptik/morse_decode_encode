/*
** rush.c for rush in /home/loisel_k/taff/C/C-Prog-Elem/rush
** 
** Made by Kevin LOISELEUR
** Login   <loisel_k@epitech.net>
** 
** Started on  Fri Dec 13 20:41:25 2013 Kevin LOISELEUR
** Last update Sun Dec 15 18:42:35 2013 song_k
*/

#include <stdlib.h>
#include <unistd.h>
#include "include/encoder.h"

int			my_strlen(char *str)
{
  int			i;

  i = 0;
  while (str[i] != '\0')
    i = i + 1;
  return (i);
}

void			my_put_error(char *str)
{
  int			i;
  int			chk;

  i = 0;
  while (str != NULL && str[i] != '\0')
    {
      chk = write(2, &str[i], 1);
      if (chk == -1)
	exit(EXIT_FAILURE);
      i = i + 1;
    }
}

void			my_putstr(char *str)
{
  int			i;
  int			chk;

  i = 0;
  while (str != NULL && str[i] != '\0')
    {
      chk = write(1, &str[i], 1);
      if (chk == -1)
	exit(EXIT_FAILURE);
      i = i + 1;
    }
}
