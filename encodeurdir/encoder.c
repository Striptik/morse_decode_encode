/*
** rush.c for rush in /home/loisel_k/taff/C/C-Prog-Elem/rush
** 
** Made by Kevin LOISELEUR
** Login   <loisel_k@epitech.net>
** 
** Started on  Fri Dec 13 20:41:25 2013 Kevin LOISELEUR
** Last update Sun Dec 15 18:51:13 2013 song_k
*/

#include <stdlib.h>
#include "include/get_next_line.h"
#include "include/encoder.h"

void			check_buf(char *buf, t_morse *lib)
{
  int			i;
  int			j;

  i = 0;
  while (buf[i] != '\0')
    {
      j = 0;
      while (lib->dict[j] != buf[i] && lib->dict[j] != '\0')
	j = j + 1;
      if (lib->dict[j] == '\0')
	{
	  my_put_error("Bad Char !\n");
	  my_put_error("Only [a <-> z] or [1 <-> 9] or '.'\n");
	  exit(1);
	}
      i = i + 1;
    }
}

void			disp_translate(char *buf, t_morse *lib)
{
  int			i;
  int			j;
  int			chk;

  i = 0;
  chk = 0;
  while (buf[i] != '\0')
    {
      j = 0;
      while (lib->dict[j] != buf[i])
	j = j + 1;
      my_putstr(lib->trsl[j]);
      if (buf[i + 1] != '\0')
	my_putstr("...");
      else
	chk = write(1, "\n", 1);
      if (chk == -1)
	exit(EXIT_FAILURE);
      i = i + 1;
    }
}

int			main(void)
{
  char			*buf;
  t_morse		lib;
  int			chk;

  chk = my_filltrsl(&lib);
  while ((buf = get_next_line(0)) != NULL)
    {
      check_buf(buf, &lib);
      disp_translate(buf, &lib);
      free(buf);
    }
  my_freestruct(&lib);
  return (0);
}
