fract_test.exe : fract_test.o fract.o
	g++ -g fract_test.o fract.o -o fract_test.exe

fract_test.o : fract_test.cpp fract.h
	g++ -g -c -Wall -Wextra -pedantic fract_test.cpp

fract.o : fract.cpp fract.h
	g++ -g -c -Wall -Wextra -pedantic fract.cpp

clean :
	rm *.exe
	rm *.o