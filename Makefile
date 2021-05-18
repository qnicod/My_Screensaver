##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## A Makefile, read by make command, execute all commands and rules in the Makefile
##

SRC =		main.c	\
		src/settings.c	\
		src/set_pixels.c	\
		src/my_screensaver.c	\
		src/switch_anim_id.c	\
		src/anim_id.c	\
		src/set_draw_circle.c	\

NAME =	 my_screensaver

CFLAGS = -I./include -Wall -Wextra -L./lib -lmy

CFLAGS2	= -lcsfml-graphics -lcsfml-window -lcsfml-system

all:
	$(MAKE) -C lib/my
	gcc -o $(NAME) $(SRC) $(CFLAGS) $(CFLAGS2) -g

clean:
	rm -f $(NAME)


fclean: clean
	rm -f $(NAME)
	rm -f ./lib/my/*.o
	rm -f lib/my/libmy.a
	rm -f lib/libmy.a
	rm -f src/*~


re:	fclean all
