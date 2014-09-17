/*
** my.h for rush in /home/song_k/rendu/CPE_2013_Rush1
** 
** Made by song_k
** Login   <song_k@epitech.net>
** 
** Started on  Fri Dec 13 21:23:12 2013 song_k
** Last update Sun Dec 15 20:24:35 2013 song_k
*/

#ifndef MY_H_
# define MY_H_

# define BUFF_SIZE (3)

typedef	struct	s_morse
{
  char		*dict;
  char		**trsl;
}		t_morse;

void	my_checkstr(char *str);
void	my_checkdecodestr(char *str, t_morse *save);
char	*my_checkmalloc(char *str);

void	my_printstop(void);
void	my_putchar(char c);
void	my_putstr(char *str);
void	my_puterror(char *str);

char	*my_strdup(char *str);
int	my_strlen(char *str);

char	*get_next_line(const int fd);

int	my_trslaff(char *stock, int *i, t_morse *save, int pos);
void	my_trsl(char *stock, t_morse *save);

#endif /* !MY_H_ */
