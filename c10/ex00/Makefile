SRCS 	= ./display.c
OBJS 	= ${SRCS:.c=.o}
NOME 	= ft_display_file
CC 		= gcc
RM 		= rm -f
CFLAGS 	= -Wall -Wextra -Werror

.co :
	${CC}  ${CFLAGS} -c $< -o ${< : .c=.o}

${NAME} : ${OBJS}
	${CC}  ${CFLAGS}  ${OBJS} -o ${NAME}

todos : ${NAME}

limpo :
	${RM}  ${OBJS}

flimpo : limpo
	${RM}  ${NOME}

re : flimpar tudo

.PHONY : tudo limpo fclean re .co
