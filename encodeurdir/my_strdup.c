/*
** my_strdup.c for lib in /home/song_k/rendu/CPE_2013_Rush1/encodeurdir
** 
** Made by song_k
** Login   <song_k@epitech.net>
** 
** Started on  Sun Dec 15 18:23:12 2013 song_k
** Last update Sun Dec 15 18:27:36 2013 song_k
*/

#include <stdlib.h>
#include "include/encoder.h"

char	*my_strdup(char *str)
{
  char	*new;
  int	i;

  i = 0;
  new = malloc(sizeof(char) * ((my_strlen(str) + 1)));
  if (new == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      new[i] = str[i];
      i = i + 1;
    }
  new[i] = '\0';
  return (new);
}
