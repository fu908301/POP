all:stack queue
cc=gcc 
CFLAGS=-g -Wall -ansi
stack_obj=mm.o list.o list_ptr.o stack.o stack_ptr.o main_stack.o
queue_obj=mm.o list.o list_ptr.o queue.o queue_ptr.o main_queue.o
stack:$(stack_obj)
	$(cc)-o$@ $(stack_obj)
queue:$(queue_obj)
	$(cc)-o$@ $(queue_obj)
dep: $(stack_obj:.o=.c) $(queue_obj:.o=.c)
	$(cc) -MM $^ > depend
%.c:%.o
	$(cc)$(CFLAGS)-c-o$@ $<
clean:
	rm *.o
