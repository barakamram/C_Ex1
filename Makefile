CC = gcc
AR = ar
MAIN = main.o
TARGETS = basicMath.o power.o
FLAGS = -Wall -g


all: libmyMath.so libmyMath.a maind mains

mains: $(MAIN) libmyMath.a 
	$(CC) $(FLAGS) -o mains $(MAIN) libmyMath.a

maind: $(MAIN) libmyMath.so 
	$(CC) $(FLAGS) -o maind $(MAIN) ./libmyMath.so

libmyMath.so: $(TARGETS) 
	$(CC) -shared -o libmyMath.so $(TARGETS)

libmyMath.a: $(TARGETS) 
	$(AR) -rcs libmyMath.a $(TARGETS) 


basicMath.o: basicMath.c myMath.h 
	$(CC) $(FLAGS) -c basicMath.c

power.o: power.c myMath.h 
	$(CC) $(FLAGS) -c power.c

main o: main.c myMath.h 
	$(CC) $(FLAGS) -c main.c


.PHONY: clean all

clean: 
	rm -f *.o *.a *.so mains maind




