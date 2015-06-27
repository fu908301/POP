all:stack queue
cc=gcc 
CFLAGS=-g -Wall -ansi
stack_obj=mm.o list_int.o stack_int.o main_stack_int.o
queue_obj=mm.o list_int.o queue_int.o main_queue_int.o
stack:$(stack_obj)
	$(cc)-o$@ $(stack_obj)
queue:$(queue_obj)
	$(cc)-o$@ $(queue_obj)
%.c:%.o
	$(cc)$(CFLAGS)-c-o$@ $<
clean:
	rm *.o
