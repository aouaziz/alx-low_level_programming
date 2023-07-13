<p align="center">  
<img src ="https://assets.imaginablefutures.com/media/images/ALX_Logo.max-200x150.png">
</p>

<h1 align="center">
	C is FUN
</h1>

# This repository contains `alx` C projects and other low level programming exercices.

>Learning C right now, been wanting to get on this. It's going to be FUN !!.

>If you need any **help**. Please do not hesitate to get in touch with me in our <a href="https://discord.gg/vTvkDgsS6J">Discord Server</a>.


----

## About
- This repository consists of all the C programming projects done with [ALX Africa](https://www.alxafrica.com/) Full stack Software Engineering course in partnership with [Holberton School](https://www.holbertonschool.com/).
- All main.c files are prewritten by the school. We build functions that produce a specific output while also taking into consideration edge cases.

----
### AS A PROGRAMMER, WHAT DO YOU DO WHEN YOU GET STUCK?
- To help you track down that bug, start reading your code aloud. 
- Pretend that a programmer friend is sitting right next to you. 
- Explain what your code is doing and how it works. As you talk through your code, you’ll find the problem. If you don’t, have your imaginary friend ask you questions during your explanation., 9-fizz_buzz.c, 100-prime_factor.c, 101-print_number.c
`Don’t worry about going mental. You’re a C programmer. You’re already mental.` 😅


As a bonus, talking through your code also helps you identify which portions need to have comments and what the comments should be.


## Content table

- [0x00](./0x00-hello_world) : Hello, World.

----

## C Program Compilation

<p align="center">
  <img src="https://i.postimg.cc/rprHShJ1/C-compilation-process.gif" />
</p>

The compilation process has four different steps:
1. The preprocessing stage
2. The compiling stage
3. The assembling stage
4. The linking stage
    
### Step 1: Preprocessing `-E`
The preprocessor reads the source code and performs various transformations to it:
- Expanding macros (replacing all of the macros with their values)
- Handling include files (replaces the #include macro with the content of the header file specified in <>)
- Removing comments
- The results in a new file called a translation unit stored in a file with `.i` extension (intermediate)
    
### Step 2: Compiling `-S`
The build phase provides us with assembly code that is unique to the target architecture.

In this step the compiler takes action by taking a preprocessed file which checks for syntax or structure errors (in case of errors the compilation process stops and displays the corresponding errors). After compiling it, it generates an intermediate code in assembly language `file.s`.

### Step 3: Assembing `-c`
In the third stage of compilation, an assembler is used to convert assembly language into machine code. The assembler takes the code and generates an object file `file.o`, which contains machine code that is not yet executable because it needs to be mapped to a specific memory address. The linker combines all the object files, resolves references between modules, and corrects the addresses, creating an executable file.

### Step 4: Linking
The linker is an important tool in compilation that performs two tasks: resolution and relocation of symbols. It arranges the pieces of object code so that functions in one piece can successfully call functions in others. The linker also adds parts that contain the instructions for the library functions used by the program. The result of this stage is the executable file. usually `a.out` if `-o` is not specified.

---

## Resource

- C [Books and PDF's](./references) to check out and use as a reference.
- [Pointers and Arrays](./PointerArrays) : Code snippets and notes on Pointers and Arrays from Concept Page.
- [Data Structures](./DataStructures) : Code snippets and notes on data structures.
- [Dynamic Memory Allocation](./dynamic_memory_alloc) : Code snippets and notes on how dynamic memory allocation works with `malloc` and `free`.
- [Heap vs Stack](./heap_stack) : Code snippets and notes on what is a heap, a stack and how they work.
- [Simple Shell Concepts](./simple_shell_concepts) : Code snippets and notes on the concept for the simple shell project.
