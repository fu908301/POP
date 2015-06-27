all:stack queue
cc=gcc 
CFLAGS=-g -Wall -ansi
stack_obj=mm.o list_float.o stack_float.o main_stack_float.o
queue_obj=mm.o list_float.o queue_float.o main_queue_float.o
stack:$(stack_obj)
	$(cc)-o$@ $(stack_obj)
queue:$(queue_obj)
	$(cc)-o$@ $(queue_obj)
%.c:%.o
	$(cc)$(CFLAGS)-c-o$@ $<
clean:
	rm *.o
