##
## EPITECH PROJECT, 2023
## B-CPE-110-BDX-1-1-secured-armand.dufresne
## File description:
## Makefile
##

FCLEAN_TARGETS = ./libhashtable.a

all	:	build_lib

build_lib	:
		make -C ./src

clean:
	make -C ./src clean

fclean:	clean
	rm -rf $(FCLEAN_TARGETS)
	make -C ./src fclean

re: fclean all

.PHONY:	clean fclean re all
