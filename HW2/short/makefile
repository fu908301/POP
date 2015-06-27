ll:stack queue
cc=gcc 
CFLAGS=-g -Wall -ansi
stack_obj=mm.o list_short.o stack_short.o main_stack_short.o
queue_obj=mm.o list_short.o queue_short.o main_queue_short.o
stack:$(stack_obj)
	$(cc)-o$@ $(stack_obj)
queue:$(queue_obj)
	$(cc)-o$@ $(queue_obj)
%.c:%.o
	$(cc)$(CFLAGS)-c-o$@ $<
clean:
	rm *.o
