/*
** my_strlen.c for my_strlen in /home/song_k/rendu/Piscine-C-lib/my
** 
** Made by song_k
** Login   <song_k@epitech.net>
** 
** Started on  Sat Oct 12 08:38:42 2013 song_k
** Last update Fri Dec 13 21:56:40 2013 song_k
*/

#include "my.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i = i + 1;
  return (i);
}
