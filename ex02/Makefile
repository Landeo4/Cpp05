NAME	=	28B

SRCS	=	main.cpp \
			Bureaucrat.cpp \
			AForm.cpp \
			ShruberryCreationForm.cpp \
			PresidentialPardonForm.cpp \
			RobotomyRequestForm.cpp \

OBJS= $(SRCS:.cpp=.o)

CC		=	c++

CFLAGS	=	-Wall -Werror -Wextra -g3 -std=c++98

%.o: %.cpp
		${CC} ${CFLAGS} -c $< -o $@

all : ${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME} 

clean:
			rm -rf ${OBJS}

fclean:		clean
			rm -rf ${NAME}

re:			fclean all

.PHONY:	all clean fclean re