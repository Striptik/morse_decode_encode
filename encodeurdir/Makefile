##
## Makefile for rush in /home/song_k/rendu/CPE_2013_Rush1/rush_complete/encodeur
## 
## Made by song_k
## Login   <song_k@epitech.net>
## 
## Started on  Sun Dec 15 12:40:47 2013 song_k
## Last update Sun Dec 15 18:27:52 2013 song_k
##

NAME		= encodeur

SRC		= tools.c \
		get_next_line.c \
		encoder.c \
		my_filltrsl.c \
		my_strdup.c \

OBJ		= $(SRC:.c=.o)

CC		= cc

CP		= cp

RM		= rm -f

all	: $(OBJ)
	$(CC) -o $(NAME) $(OBJ)
	$(CP) $(NAME) ../

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)
	$(RM) ../$(NAME)

re: fclean all

.PHONY: all clean fclean re
