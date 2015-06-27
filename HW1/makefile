all:stack queue
cc=gcc 
CFLAGS=-g -Wall -ansi
stack_obj=mm.o list.o stack.o main_stack.o
queue_obj=mm.o list.o queue.o main_queue.o
stack:$(stack_obj)
	$(cc)-o$@ $(stack_obj)
queue:$(queue_obj)
	$(cc)-o$@ $(queue_obj)
%.c:%.o
	$(cc)$(CFLAGS)-c-o$@ $<
clean:
	rm *.o
