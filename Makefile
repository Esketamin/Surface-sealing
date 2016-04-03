CC	=	g++
CFLAGS	=	-std=c++11 -fopenmp
LDFLAGS	=	-lm -fopenmp

OBJ	= main.o Node.o Way.o Relation.o

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< 

prog: $(OBJ)
	$(CC) $(LDFLAGS) -o prog.out $(OBJ)
	rm *.o

doc:
	doxygen Doxyfile

clean:
	rm *.out
