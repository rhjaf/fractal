
NAME = main

SRC = Mandlebrot.cpp Bitmap.cpp ZoomList.cpp FractalCreator.cpp RGB.cpp

OBJ = $(SRC:.cpp=.o)

CXXFLAGS  = -Wall -g -DNDEBUG

CC = g++

$(NAME): libs
	$(CC) $(OBJ)  $(NAME).cpp -o $(NAME)

libs: 
	$(CC) $(SRC) -O -c
all : $(NAME)
clean:
	rm -f $(NAME) *.o output.bmp
full_clean:
	rm -f *
