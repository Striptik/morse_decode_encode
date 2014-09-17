/*
** my_checkmalloc.c for rush in /home/song_k/rendu/CPE_2013_Rush1
** 
** Made by song_k
** Login   <song_k@epitech.net>
** 
** Started on  Fri Dec 13 22:39:50 2013 song_k
** Last update Fri Dec 13 22:40:41 2013 song_k
*/

#include <stdlib.h>
#include "my.h"

char	*my_checkmalloc(char *str)
{
  if (str == NULL)
    {
      my_putstr("Malloc Error\n");
      return (NULL);
    }
}
