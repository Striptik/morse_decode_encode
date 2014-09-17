/*
** my_checkstr.c for rush in /home/song_k/rendu/CPE_2013_Rush1
** 
** Made by song_k
** Login   <song_k@epitech.net>
** 
** Started on  Fri Dec 13 22:16:17 2013 song_k
** Last update Mon Dec 16 13:17:44 2013 Kevin LOISELEUR
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

void	my_checkcodestr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] < 'a' || str[i] > 'z' )&&
          (str[i] < '0' || str[i] > '9') &&
          str[i] != '.' && str[i] != '\0' && str[i] == ' ')
        my_printstop();
      i = i + 1;
    }
}

void	my_printbadletter(int s, char *str)
{
  char	c;

  while ((str[s] != '.' && str[s + 1] != '.' && str[s + 2] != '.') &&
	 str[s] != '\0')
    {
      c = str[s];
      write(2, &c, 1);
      s = s + 1;
    }
  my_puterror("\nThis code isn't managed or doesn't exist\n");
  exit(EXIT_FAILURE);
}

int	my_checkdecodelibloop(char *str, int *i, t_morse *lib, int *pos)
{
  int	ct;
  int	s;

  ct = 0;
  s = *i;
  while (str[*i] == lib->trsl[*pos][ct] && str[*i] != '\0')
    {
      *i = *i + 1;
      ct = ct + 1;
    }
  if ((lib->trsl[*pos][ct] == '\0' && str[*i] == '\0') ||
      (lib->trsl[*pos][ct] == '\0' && str[*i + 1] == '.' &&
       str[*i + 2] == '.'))
    return (0);
  *i = s;
  *pos = *pos + 1;
  if (*pos == 36)
    my_printbadletter(s, str);
  return (-1);
}

void	my_checkdecodelib(char *str, t_morse *lib, int count)
{
  int	i;
  int	ct;
  int	chk;

  i = 0;
  ct = 0;
  chk = -1;
  while (str[i] != '\0' && lib->trsl[ct] != NULL)
    {
      chk = my_checkdecodelibloop(str, &i, lib, &ct);
      if (chk == 0 && str[i] != '\0')
	{
	  if (str[i] == '.' && str[i + 1] == '.' && str[i + 2] == '.')
	    {
	      i = i + 3;
	      ct = 0;
	    }
	  else
	    my_printstop();
	}
    }
}

void	my_checkdecodestr(char *str, t_morse *lib)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] != '_' && str[i] != '-' && str[i] != '.')
	my_printstop();
      i = i + 1;
    }
   my_checkdecodelib(str, lib, i);
}
