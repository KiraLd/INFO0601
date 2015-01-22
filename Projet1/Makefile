# partie du makefile à modifier
EXE=EditeurProjet1
SRCS=editeur.c
CFLAGS=-g -pedantic -Wall
LDLIBS= -lncurses
# partie à ne pas toucher
OBJS=$(SRCS:.c=.o)
$(EXE): depend $(OBJS)
	$(CXX) $(OBJS) $(LDLIBS) -o $@
depend:
	makedepend -Y $(SRCS) 2> /dev/null
clean:
	rm -f $(OBJS)
# DO NOT DELETE

editeur.o: editeur.h