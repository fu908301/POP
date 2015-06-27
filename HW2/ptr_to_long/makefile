all:stack queue
cc=gcc 
CFLAGS=-g -Wall -ansi
stack_obj=mm.o list_ptr_to_long.o stack_ptr_to_long.o main_stack_ptr_to_long.o
queue_obj=mm.o list_ptr_to_long.o queue_ptr_to_long.o main_queue_ptr_to_long.o
stack:$(stack_obj)
	$(cc)-o$@ $(stack_obj)
queue:$(queue_obj)
	$(cc)-o$@ $(queue_obj)
%.c:%.o
	$(cc)$(CFLAGS)-c-o$@ $<
clean:
	rm *.o
