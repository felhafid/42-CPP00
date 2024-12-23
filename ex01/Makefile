NAME = allo

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Contact.cpp main.cpp PhoneBook.cpp

OBJ = $(SRC:.cpp=.o)

HEADERS = PhoneBook.hpp Contact.hpp

all : $(NAME)

$(NAME) : $(OBJ) $(HEADERS)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o : %.c
	$(CPP) $(CPPFLAGS) -c $(SRC)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean