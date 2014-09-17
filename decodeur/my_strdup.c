/*
** my_strdup.c for lib in /home/song_k/rendu/my_lib
** 
** Made by song_k
** Login   <song_k@epitech.net>
** 
** Started on  Wed Nov 20 11:37:41 2013 song_k
** Last update Sun Dec 15 16:25:18 2013 song_k
*/

#include <stdlib.h>
#include "my.h"

char	*my_strdup(char *str)
{
  char	*dup;
  int	i;
  int	l;

  i = 0;
  l = my_strlen(str);
  dup = malloc(l + 1);
  if ((my_checkmalloc(dup)) == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      dup[i] = str[i];
      i = i + 1;
    }
  dup[i] = '\0';
  return (dup);
}
