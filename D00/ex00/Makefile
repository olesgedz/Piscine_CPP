# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olesgedz <olesgedz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 00:18:47 by olesgedz          #+#    #+#              #
#    Updated: 2019/04/02 00:30:02 by olesgedz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

FLAGS = -g
CC = clang++
LIBRARIES = 
INCLUDES = 

HEADERS_DIRECTORY = ./includes/
HEADERS_LIST =
HEADERS = $(addprefix $(HEADERS_DIRECTORY), $(HEADERS_LIST))

DIRECTORY =  $(shell pwd)

SRCS_DIRECTORY = ./
SRCS_LIST = megaphone.cpp

OBJS_DIRECTORY = objects/
OBJS_LIST = $(patsubst %.cpp, %.o, $(SRCS_LIST))
OBJS = $(addprefix $(OBJS_DIRECTORY), $(OBJS_LIST))
SDL_LIBS = $(addprefix $(DIRECTORY)/lib/, $(LIB_LIST))

CLEAR_LINE	:= \033[2K
BEGIN_LINE	:= \033[A
COL_END		:= \033[0m
COL_RED		:= \033[1;31m
COL_GREEN	:= \033[1;32m
COL_YELLOW	:= \033[1;33m
COL_BLUE	:= \033[1;34m
COL_VIOLET	:= \033[1;35m
COL_CYAN	:= \033[1;36m
COL_WHITE	:= \033[1;37m

TOTAL_FILES := $(shell echo $(SRCS_LIST) | wc -w | sed -e 's/ //g')
CURRENT_FILES = $(shell find $(DIRECTORY)/objects/ -type f 2> /dev/null | wc -l | sed -e 's/ //g')

.PHONY: clean fclean re

all: $(NAME)

$(NAME): $(OBJS_DIRECTORY) $(OBJS)
	@$(CC) $(FLAGS) $(LIBRARIES) $(INCLUDES) $(OBJS) $(SDL_CFLAGS) $(SDL_LDFLAGS) -o $(NAME)
	@echo "$(CLEAR_LINE)[`expr $(CURRENT_FILES) '*' 100 / $(TOTAL_FILES)`%]$(COL_BLUE)[$(NAME)] $(COL_GREEN)Finished compilation. Output file : $(COL_VIOLET)$(PWD)/$(NAME)$(COL_END)"

$(OBJS_DIRECTORY):
	@mkdir -p $(OBJS_DIRECTORY)


$(OBJS_DIRECTORY)%.o : $(SRCS_DIRECTORY)%.cpp $(HEADERS)
	@$(CC) $(FLAGS) -c $(INCLUDES) $< -o $@
	@echo "$(CLEAR_LINE)\r [`expr $(CURRENT_FILES) '*' 100 / $(TOTAL_FILES)`%] $(COL_BLUE)[$(NAME)] $(COL_GREEN)Compiling file [$(COL_VIOLET)$<$(COL_GREEN)].($(CURRENT_FILES) / $(TOTAL_FILES))$(COL_END)$(BEGIN_LINE)"

clean:
	@rm -rf $(OBJS_DIRECTORY)
	@echo "$(NAME): $(RED)$(OBJECTS_DIRECTORY) was deleted$(RESET)"
	@echo "$(NAME): $(RED)object files were deleted$(RESET)"
	@echo "$(SDL_MAKE): $(RED)object files were deleted$(RESET)"

dd:
	rm $(NAME)

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME): $(RED)$(NAME) was deleted$(RESET)"

re:
	@$(MAKE) fclean
	@$(MAKE) all