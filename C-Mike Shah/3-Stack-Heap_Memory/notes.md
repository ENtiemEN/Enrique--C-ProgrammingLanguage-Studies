The memory is a process (a running program) works with is 'working memory'. Typicallly this means 'RAM' (The green sticks you put in your machine). Your machine for example may have 8,16,32 or so gigabytes of memory. Memory (Finite Resource)

**Block Scope** $\rightarrow$ Local variables are reclaimed in the block scope they are initialized

Stack $\rightarrow$ The stack is where our 'temporary' (e.g. local variables) memory is stored. The stack also stores information like where a function was called from (so we know where to return), and other things like function arguments.

The executable binary that we create 'prog', when it is running is a 'process'. A 'process' is a live running application. A process thus takes up some memory, and our operating system hands out this memory to us.

The operating system divides a process 'roughly' into these segments. Each process running has it's own stack, heap, source code (the .text section), and other components.

- push $\rightarrow$ add to the top of out stack
- pop $\rightarrow$ remove from top of the stack

'Stack memory' itself is implemented using a data structure known as a stack, that has 'push' and 'pop' operations to add and remove elements from the top of the stack. We can overflow the stack to other regions of the memory (**Stack overflow**)

C is a pass-by-value language. Arguments are 'copied' when passed into functions. The copies of our arguments are sotred on the stack. **This is why we cannot modify our arguments, unless we pass an argument by pointer**.

**Heap Memory**:
- Large storage
- Long-lived memory
- we allocate and free this memory

**STACK vs HEAP**
- Stack being automatically allocated and clearing out the memory when you leave scope.
- Heap being long-lived and you must use `free` to get rid of it.

That's also why pointers are important. We can point to chunks of memory whether they're in the heap, we can also point to things in the stack **but that's dangerous** because the variables are temporary so if we have a pointer that points to a specific box (*in the stack*) and this member gets cleared away then we don't really know what's in a box there. (!warning ¿?)

