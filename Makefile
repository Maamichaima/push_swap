SRC = 	closest_smaller.c rules.c split.c push_swap.c push_main.c\
		operation_list_1.c rules_1.c operation_push.c push_back.c get_args.c\
	 	sort_sup_three.c operation_list.c  ft_free.c check_args.c operation_num.c
SRC_BONUS = get_next_line.c get_next_line_utils.c checker.c checker_utils.c\
			check_args.c Error.c operation_num.c get_args.c operation_list.c\
			operation_list_1.c rules.c rules_1.c split.c ft_free.c
OBJ = ${SRC:.c=.o}
OBJ_BONUS = ${SRC_BONUS:.c=.o} 
NAME = push_swap
BONUS = checker
CFLAGS = -Wall -Wextra -Werror
all : ${NAME}
bonus : ${BONUS}
${NAME}: ${OBJ}
	cc -o ${NAME} ${OBJ}
${BONUS}: ${OBJ_BONUS}
	cc -o ${BONUS} ${OBJ_BONUS}
clean :
	${RM} ${OBJ} ${OBJ_BONUS}
fclean : clean
	${RM} ${NAME} ${BONUS}
re: fclean all
