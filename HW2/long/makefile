ll:stack queue
cc=gcc 
CFLAGS=-g -Wall -ansi
stack_obj=mm.o list_long.o stack_long.o main_stack_long.o
queue_obj=mm.o list_long.o queue_long.o main_queue_long.o
stack:$(stack_obj)
	$(cc)-o$@ $(stack_obj)
queue:$(queue_obj)
	$(cc)-o$@ $(queue_obj)
%.c:%.o
	$(cc)$(CFLAGS)-c-o$@ $<
clean:
	rm *.o
