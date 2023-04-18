# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchaguer <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 15:04:17 by hchaguer          #+#    #+#              #
#    Updated: 2023/02/22 15:04:19 by hchaguer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


name = push_swap

srcs = push_swap.c\
	   ./src/checks.c\
	   ./src/sorts.c\
	   ./src/rotate.c\
	   ./src/swap.c\
	   ./src/push.c\
	   ./src/display_sort.c\
	   ./src/utils.c\
	   ./src/linkedlist_fct.c\
	   ./src/linkedlist_fct1.c\
	   ./src/indexiation.c

cc = cc

CFLAGS = -Wall -Wextra -Werror

obj = $(srcs:.c=.o)

.SILENT:
all: $(name)

$(name): $(obj)
	make -C ./libft
	make -C ./ft_printf
	$(cc) $(CFLAGS) $(obj) libft/libft.a ft_printf/libftprintf.a -o $(name)

clean: 
	rm -rf $(obj)
	make clean -C ./libft
	make clean -C ./ft_printf

fclean: clean
	rm -rf $(name)
	make fclean -C ./libft
	make fclean -C ./ft_printf

re: fclean all

.PHONY: all clean fclean