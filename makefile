all:
	gcc -o parse parse.c
run: all
	./parse
clean:
	rm parse
