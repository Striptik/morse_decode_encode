##
## Makefile for rush in /home/song_k/rendu/CPE_2013_Rush1
## 
## Made by song_k
## Login   <song_k@epitech.net>
## 
## Started on  Sun Dec 15 19:19:49 2013 song_k
## Last update Sun Dec 15 22:24:08 2013 song_k
##

ENCDIR		=	encodeurdir

DECDIR		=	decodeur

all		:	$(ENCDIR) $(DECDIR)

$(ENCDIR)	:
			make -C $(ENCDIR)/

$(DECDIR)	:
			make -C $(DECDIR)/

clean		:
			make -C $(ENCDIR)/ clean
			make -C $(DECDIR)/ clean

fclean		:
			make -C $(ENCDIR)/ fclean
			make -C $(DECDIR)/ fclean

re		:
			make -C $(ENCDIR)/ re
			make -C $(DECDIR)/ re

.PHONY		:	all clean fclean re
