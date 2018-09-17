%.o : %.c mylib.h
	gcc -c $<

libmylib.a:  anagrammes.o
	ar -rs $@ $^