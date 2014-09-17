/*
** get_next_line.c for get_next_line.c in /home/loisel_k/travail/C-Prog-Elem/get_next_line/src
** 
** Made by kevin loiseleur
** Login   <loisel_k@epitech.net>
** 
** Started on  Tue Nov 19 19:10:19 2013 kevin loiseleur
** Last update Sun Dec 15 20:14:40 2013 song_k
*/

#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

int		my_read(int fd , void *buf, int i)
{
  int		res;
  char		*tmp;

  res = read(fd, buf, i);
  if (buf == NULL || res <= 0)
    return (0);
  return (res);
}

char		*my_malloc(size_t len)
{
  char		*str;

  if ((str = malloc(sizeof(char) * len)) == NULL)
    return (0);
  return (str);
}

void		clearmem(char *str, char c, int len)
{
  int		i;

  i = 0;
  while (i < (len + 1))
    {
      str[i] = c;
      ++i;
    }
}

int		buf_after_line(char *buf, int current)
{
  int		set;

  set = 0;
  while (buf[current])
    buf[set++] = buf[current++];
  buf[set] = '\0';
  clearmem((buf + set), '\0', (SIZE_BUF - set));
  return (set);
}

char		*get_next_line(const int fd)
{
  static int	next_begin = 0;
  static char	buf[SIZE_BUF];
  char		*line;
  int		current;
  int		ret;

  current = 0;
  ret = my_read(fd, (buf + next_begin), SIZE_READ - next_begin);
  buf[SIZE_BUF] = '\0';
  line = my_malloc(SIZE_BUF);
  if (line == 0 || (ret == 0 && buf[current] == 0))
    return (NULL);
  line[SIZE_BUF] = '\0';
  while (buf[current] && buf[current] != '\n')
    line[current] =  buf[current++];
  if (buf[current] == '\n')
    current++;
  clearmem(line + current, '\0', SIZE_BUF - current);
  next_begin = buf_after_line(buf, current);
  return (line);
}
