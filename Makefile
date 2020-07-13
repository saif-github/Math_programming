  # the compiler: gcc for C program, define as g++ for C++
  CC = gcc

  # compiler flags:
  #  -g    adds debugging information to the executable file
  #  -Wall turns on most, but not all, compiler warnings
  CFLAGS  = -g -Wall

  # the build target executable:

	#TARGET = Algebra/find_x_n_y
	#TARGET = Algebra/pow
	#TARGET = Algebra/exponential_function
	#TARGET = Algebra/cos_x
	TARGET = Algebra/multiply_polynomial

  all: $(TARGET).c
	$(CC) $(CFLAGS) -o exe $(TARGET).c

  clean:
	$(RM) exe
