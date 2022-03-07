# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvaladar <pvaladar@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/07 18:12:40 by pvaladar          #+#    #+#              #
#    Updated: 2022/03/07 18:43:30 by pvaladar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Based on intra video, C Piscine - C 09, C 11
# https://elearning.intra.42.fr/notions/c-piscine-c-09-c-11/subnotions/makefile-example/videos/makefile-example

# =============================================================================
#								GENERAL CONFIG & FLAGS
# =============================================================================

NAME	= libft.a

#HEADER	= libft.h
LIB1	= ar rc
LIB2	= ranlib
RM	=	/bin/rm -f

# "use cc, and your Makefile must not relink."
CC		= cc

# "submit a Makefile which will compile your source files to the required output"
# "with the flags -Wall, -Wextra and -Werror"
# "Place all your files at the root of your repository"
CFLAGS		= -Wall -Wextra -Werror -I.
# -I <dir>                Add directory to include search path
OPT_CFLAGS	= -O2


# =============================================================================
#								MANDATORY PART
# =============================================================================

# Part 1 - Libc functions (ft_isalpha, ... ft_strdup)
# Part 2 - Additional functions (ft_substr, ..., ft_putnbr_fd)
SRCS	= 	ft_isalpha.c	ft_toupper.c	\
			ft_isdigit.c	ft_tolower.c	\
			ft_isalnum.c	ft_strchr.c		\
			ft_isascii.c	ft_strrchr.c	\
			ft_isprint.c	ft_strncmp.c	\
			ft_strlen.c		ft_memchr.c		\
			ft_memset.c		ft_memcmp.c		\
			ft_bzero.c		ft_strnstr.c	\
			ft_memcpy.c		ft_atoi.c		\
			ft_memmove.c 					\
			ft_strlcpy.c 					\
			ft_strlcat.c 					\
			ft_toupper.c 					\
			ft_calloc.c 					\
			ft_strdup.c 					\
			ft_substr.c 					\
			ft_strjoin.c					\
			ft_strtrim.c					\
			ft_split.c 						\
			ft_itoa.c						\
			ft_strmapi.c 					\
			ft_striteri.c 					\
			ft_putchar_fd.c 				\
			ft_putstr_fd.c 					\
			ft_putendl_fd.c 				\
			ft_putnbr_fd.c

# Takes the variable value ${SRCS}, which is a string composed of words separated by spaces, and for each word, replace the suffix .c with .o
OBJS	= ${SRCS:.c=.o}


# =============================================================================
#									BONUS PART
# =============================================================================
# To turn in bonuses to your project, you must include a rule bonus to your Makefile,
# which will add all the various headers, librairies or functions that are forbidden on
# the main part of the project. Bonuses must be in a different file _bonus.{c/h} if
# the subject does not specify anything else.

BONUS	=	ft_lstadd_front_bonus.c	\
			ft_lstnew_bonus.c		\
			ft_lstsize_bonus.c		\
			ft_lstadd_back_bonus.c	\
			ft_lstclear_bonus.c		\
			ft_lstdelone_bonus.c	\
			ft_lstiter_bonus.c		\
			ft_lstlast_bonus.c		\
			ft_lstmap_bonus.c	

B_OBJS	=	${BONUS:.c=.o}


# =============================================================================
#									RULES
# =============================================================================

# "Your Makefile must at least contain the rules $(NAME), all, clean, fclean and re."

%.c%.o:		${CC} ${CFLAGS} ${OPT_CFLAGS} -c $< -o ${<:.c=.o}
#			${CC} ${CFLAGS} -c -o ${<:%.c=%.o} ${INCS}
# Sample:
# cc -Wall -Wextra -Werror -I. -c   -c -o ft_atoi.o ft_atoi.c
#
# $<					 The name of the first prerequisite. If the target got its recipe from an implicit rule, this will be the first prerequisite added by the implicit rule
# https://www.gnu.org/software/make/manual/make.html#Automatic-Variables
#
# -c                      Only run preprocess, compile, and assemble steps
# -o <file>               Write output to <file>

all:		$(NAME)

# Compile the sources (*.c) to object files (*.o)
# Then generate a library file
# Make an index of the libraries
${NAME}:	${OBJS}
			${LIB1} ${NAME} ${OBJS}
			${LIB2} ${NAME}

# Clean object files (*.o)
clean:
			$(RM) $(OBJS) ${B_OBJS}

# Clean object files (*.o) and the binary file
fclean: 	clean
			$(RM) $(NAME)

# Clean object files (*.o) and the binary file; 
# Then create the binary file again, and generate the library and index it
re:			fclean all

bonus:		${OBJS} ${B_OBJS}
			${LIB1} ${NAME} ${OBJS} ${B_OBJS}
			${LIB2} ${NAME}

rebonus:	fclean bonus

# .PHONY rule in order to avoid relinking: listed all the rules used
.PHONY: all clean fclean re bonus rebonus
