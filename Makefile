SRCS = $(wildcard *.c)
DSTS = $(patsubst %.c, %, $(SRCS))

default: $(DSTS)

% : %.c
	gcc -Wall -Werror -O3 -o $@ $<

search2_notail: search2.c
	gcc -O3 -fno-optimize-sibling-calls -o $@ $<

clean:
	rm -rf $(DSTS) a.out search2_notail
