# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 14:00:04 by rabril-h          #+#    #+#              #
#    Updated: 2023/11/03 22:52:18 by rabril-h         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Scalar


RM = rm -f
CC = c++
CFLAGS = -Werror -Wextra -Wall -std=c++98 -g -fsanitize=address


FILES = main ./classes/ScalarConverter

SRC = $(addsuffix .cpp, $(FILES))

vpath %.cpp 


OBJ = $(SRC:.cpp=.o)
DEP = $(addsuffix .d, $(basename $(OBJ)))


%.o: %.cpp 
	@${CC} $(CFLAGS) -MMD -c $< -o $@

all:
	@$(MAKE) $(NAME) --no-print-directory

$(NAME):: $(OBJ) Makefile
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(OBJ) $(DEP) --no-print-directory
	@echo "Objects cleaned"

fclean: clean
	@$(RM) $(NAME) --no-print-directory
	@echo "All compilation files removed"

re:	fclean all

.PHONY: all clean fclean re

-include $(DEP)