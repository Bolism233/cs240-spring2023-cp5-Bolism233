all: prcheck

prcheck: pr_check.o
	g++ pr_check.o -o prcheck

pr_check.o: pr_check.cpp pr_check.h
	g++ -c pr_check.cpp

clean:
	rm -f *.o prcheck