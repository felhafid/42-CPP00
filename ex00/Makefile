NAME = megaphone

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : megaphone.o
	$(CPP) $(CPPFLAGS) megaphone.o -o megaphone

%.o : %.cpp 
	$(CPP) $(CPPFLAGS) -c megaphone.cpp

clean :
	rm -rf megaphone.o

fclean : clean
	rm -rf megaphone

re : fclean all

.PHONY : clean