/*
** my_printfunctions.c for rush in /home/song_k/rendu/CPE_2013_Rush1/decodeur
** 
** Made by song_k
** Login   <song_k@epitech.net>
** 
** Started on  Sun Dec 15 22:10:43 2013 song_k
** Last update Sun Dec 15 22:14:37 2013 song_k
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

void	my_printstop(void)
{
  my_puterror("Bad Char !\nOnly '_' or '-' or '.'\n");
  exit(EXIT_FAILURE);
}

void	my_putchar(char c)
{
  int	chk;

  chk = write(1, &c, 1);
  if (chk == -1)
    exit(EXIT_FAILURE);
}

void	my_putstr(char *str)
{
  while (*str != '\0' && str != NULL)
    {
      my_putchar(*str);
      str = str + 1;
    }
}

void	my_puterror(char *str)
{
  int	chk;

  chk = write(2, str, my_strlen(str));
  if (chk == -1)
    exit(EXIT_FAILURE);
}
