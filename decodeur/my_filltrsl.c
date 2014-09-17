/*
** my_filltrsl.c for rush in /home/song_k/rendu/CPE_2013_Rush1
** 
** Made by song_k
** Login   <song_k@epitech.net>
** 
** Started on  Fri Dec 13 22:18:01 2013 song_k
** Last update Mon Dec 16 13:13:04 2013 Kevin LOISELEUR
*/

#include <stdlib.h>
#include "my.h"

t_morse	*chk_strdupmall(t_morse *new)
{
  int	i;

  i = 0;
  while (new->trsl[i] != NULL)
    i = i + 1;
  if (i != 36)
    return (NULL);
  return (new);
}

int	my_filltrsl2(t_morse *new)
{
  new->trsl[16] = my_strdup("_._.-._");
  new->trsl[17] = my_strdup("-._.-");
  new->trsl[18] = my_strdup("-.-.-");
  new->trsl[19] = my_strdup("_");
  new->trsl[20] = my_strdup("-.-._");
  new->trsl[21] = my_strdup("-.-.-._");
  new->trsl[22] = my_strdup("-._._");
  new->trsl[23] = my_strdup("_.-.-._");
  new->trsl[24] = my_strdup("_.-._._");
  new->trsl[25] = my_strdup("_._.-.-");
  new->trsl[26] = my_strdup("-._._._._");
  new->trsl[27] = my_strdup("-.-._._._");
  new->trsl[28] = my_strdup("-.-.-._._");
  new->trsl[29] = my_strdup("-.-.-.-._");
  new->trsl[30] = my_strdup("-.-.-.-.-");
  new->trsl[31] = my_strdup("_.-.-.-.-");
  new->trsl[32] = my_strdup("_._.-.-.-");
  new->trsl[33] = my_strdup("_._._.-.-");
  new->trsl[34] = my_strdup("_._._._.-");
  new->trsl[35] = my_strdup("-._.-._.-._");
  new->trsl[36] = my_strdup("......");
  new->trsl[37] = NULL;
  if ((chk_strdupmall(new)) == NULL)
    return (-1);
  return (0);
}

int	my_filltrsl(t_morse *new)
{
  new->dict = my_strdup("abcdefghijklmnopqrstuvwxyz123456789. ");
  if (new->dict == NULL)
    return (-1);
  new->trsl = malloc(sizeof(char *) * (my_strlen(new->dict) + 1));
  if (new->trsl == NULL)
    return (-1);
  new->trsl[0] = my_strdup("-._");
  new->trsl[1] = my_strdup("_.-.-.-");
  new->trsl[2] = my_strdup("_.-._.-");
  new->trsl[3] = my_strdup("_.-.-");
  new->trsl[4] = my_strdup("-");
  new->trsl[5] = my_strdup("-.-._.-");
  new->trsl[6] = my_strdup("_._.-");
  new->trsl[7] = my_strdup("-.-.-.-");
  new->trsl[8] = my_strdup("-.-");
  new->trsl[9] = my_strdup("-._._._");
  new->trsl[10] = my_strdup("_.-._");
  new->trsl[11] = my_strdup("-._.-.-");
  new->trsl[12] = my_strdup("_._");
  new->trsl[13] = my_strdup("_.-");
  new->trsl[14] = my_strdup("_._._");
  new->trsl[15] = my_strdup("-._._.-");
  if ((my_filltrsl2(new)) == -1)
    return (-1);
  return (0);
}

void	my_freestruct(t_morse *save)
{
  int	i;

  i = 0;
  while (save->trsl[i] != NULL)
    {
      free(save->trsl[i]);
      i = i + 1;
    }
  free(save->dict);
  free(save->trsl);
}
