works:
	@echo "This works"
	gcc -o fmv-test fmv-test.c main.c

also_works:
	@echo "This also works"
	gcc -c fmv-test.c
	gcc -c main.c
	gcc -o fmv-test fmv-test.o main.o

borken:
	@echo "This doesn't work"
	gcc -c fmv-test.c
	gcc -c main.c
	ar cr fmv-test.a fmv-test.o main.o
	gcc -o fmv-test-borken fmv-test.a

