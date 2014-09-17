/*
** encoder.h for header for encoder in /home/loisel_k/taff/C/C-Prog-Elem/rush
** 
** Made by Kevin LOISELEUR
** Login   <loisel_k@epitech.net>
** 
** Started on  Sat Dec 14 01:33:55 2013 Kevin LOISELEUR
** Last update Sun Dec 15 18:36:10 2013 song_k
*/

#ifndef ENCODER_H_
# define ENCODER_H_

#define NB_CHAR		37

typedef struct		s_char
{
  char			c;
  char			*trad;
}			t_char;

typedef struct		s_morse
{
  char			*dict;
  char			**trsl;
}			t_morse;

int			my_strlen(char *str);
void			my_putstr(char *str);
void			my_put_error(char *str);

void			encoder(void);
void			check_buf(char *buf, t_morse *lib);
void			disp_translate(char *buf, t_morse *lib);

#endif /* ENCODER_H_ */
