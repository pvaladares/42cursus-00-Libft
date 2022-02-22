# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pv <pv@student.42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/02 10:51:42 by pvaladar          #+#    #+#              #
#    Updated: 2022/02/21 23:56:56 by pv               ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Based on intra video, C Piscine - C 09, C 11
# https://elearning.intra.42.fr/notions/c-piscine-c-09-c-11/subnotions/makefile-example/videos/makefile-example


# use cc, and your Makefile must not relink.
CC		= cc

# submit a Makefile which will compile your source files to the required output
# with the flags -Wall, -Wextra and -Werror
CFLAGS	= -Wall -Wextra -Werror
NAME	= libft.a
INCS	= libft.h
LIB1	= ar rc
LIB2	= ranlib

# ls -l *.c | awk -F ' ' '{print $9}'
SRCS	= ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_lstnew_bonus.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c \

OBJS	= ${SRCS:.c=.o}

# Your Makefile must at least contain the rules 
# $(NAME), all, clean, fclean and re.
# Redirects to the next rule
all:		$(NAME)

# Compile the sources (*.c) to object files (*.o)
# Then generate a library file, and make an index of the libraries
${NAME}:	${OBJS}
			${LIB1} ${NAME} ${OBJS}
			${LIB2} ${NAME}

# Clean only object files (*.o)
clean:
			rm -f $(OBJS) ${INCS}

# Clean object files (*.o) and the binary file
fclean: 	clean
			rm -f $(NAME)

# Clean object files (*.o) and the binary file; 
# Then create the binary file again, and generate the library and index it
re:			fclean all

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}
# -c                      Only run preprocess, compile, and assemble steps
# -o <file>               Write output to <file>
# -I <dir>                Add directory to include search path

# =============================================================================
#									BONUS PART
# =============================================================================
# To turn in bonuses to your project, you must include a rule bonus to your Makefile,
# which will add all the various headers, librairies or functions that are forbidden on
# the main part of the project. Bonuses must be in a different file _bonus.{c/h} if
# the subject does not specify anything else.

# ls -l *_bonus.c | awk -F ' ' '{print $9}'
SRCS_BONUS	= ft_lstnew.c

OBJS_BONUS	= $(SRCS_BONUS:.c=.o)

bonus:		$(NAME) $(OBJS_BONUS))
			$(LIB1) $(NAME) $(OBJS_BONUS)
			$(LIB2) $(NAME)
