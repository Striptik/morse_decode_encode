##
## Makefile for Rush1 in /home/song_k/rendu/CPE_2013_Rush1
## 
## Made by song_k
## Login   <song_k@epitech.net>
## 
## Started on  Fri Dec 13 20:12:22 2013 song_k
## Last update Sun Dec 15 22:26:04 2013 song_k
##

CC	=	gcc

RM	=	rm -f

CP	=	cp -f

SRCS	=	decoder.c \
		my_printfunctions.c \
		my_strdup.c \
		my_strlen.c \
		my_filltrsl.c \
		my_checkstr.c \
		my_checkmalloc.c \
		get_next_line.c \

OBJS	=	$(SRCS:.c=.o)

NAME	=	décodeur

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		$(CC) -o $(NAME) $(OBJS)
		$(CP) $(NAME) ../
clean	:
		$(RM) $(OBJS)

fclean	:	clean
		$(RM) $(NAME)
		$(RM) ../$(NAME)

re	:	fclean all

.PHONY	:	re clean fclean all
