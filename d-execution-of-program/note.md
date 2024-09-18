
# Execution of program 

# Lets to understand how a program runs at `high-level` : 

### Understanding the Basics : 
* Source code: The human-readable text that forms the program.
* Compiler/Interpreter: Translates the source code into machine-understandable code.
* Machine code: The low-level instructions directly executed by the CPU.
* CPU (Central Processing Unit): The brain of the computer that executes instructions.
* Memory: Stores the program and data.

## 1. Wrtring the code 
* Problem definition: Clearly outline the problem you want to solve.
* Algorithm development: Create a logical sequence of steps to tackle the problem.
* Code implementation: Translate the algorithm into a specific programming language (like Python, C++, Java, etc.)

## 2. Compilation (for compiled languages)
* <u>Compiler(source code to object code)</u> : <br>
The compiler translates human-readable code into machine-readable code (object code).<br>
    * The compiler translates the source code into machine code (object code).<br>
    * This process involves lexical analysis, parsing, semantic analysis, code generation, and optimization.<br>
    *<u>Linking</u>* : The linker combines object code with libraries to create an executable file.

* <u>Interpretation (for interpreted languages)</u> :
    * The interpreter directly executes the source code line by line without creating a separate machine code file.
    * This process is generally slower than compilation but offers more flexibility.

## 3. Loading 
Executable to memory: The operating system loads the executable file into the computer's memory (RAM) .

## 4. Execution 
The CPU fetches instructions from memory, decodes them, and executes them one by one.<br><br>
This involves : <br>
* Fetching the next instruction from memory.
* Decoding the instruction to understand the operation.
* Executing the instruction, which might involve manipulating data, performing calculations, or controlling hardware.
* Storing results back in memory.

## 5. Termination 
* Program completion: The program reaches its end point or encounters an error.
* Resources released: Memory and other resources are freed up.

<br>

# Lets to understand how a program runs at `low-level` : 

## 1. Instruction Fetch :

* The Control Unit (CU) retrieves the next instruction from the computer's main memory.
* If the instruction is found in the cache (L1, L2, or L3), it's fetched from there, which is much faster than accessing main memory.

## 2. Instruction Decoding :

* The CU decodes the fetched instruction to understand the operation to be performed.
* <u>Operand Fetch</u> :
    * The CU determines the operands (data) required for the operation. If these operands are in registers, they are directly accessed.
    * If the operands are in memory, the CU initiates a memory access to fetch them. Again, if available in cache, it's faster.
    * The fetched operands are loaded into registers for processing.

## 3. Execution :

* The CU sends the decoded instruction and operands to the Arithmetic Logic Unit (ALU).
* The ALU performs the specified arithmetic or logical operation on the data.

## 4. Result Storage :
* The result of the ALU operation is stored in a register.
* If the result needs to be written back to memory, the CU initiates the memory write operation.


### For Example: Addition program 
Let's say the CPU needs to add two numbers stored in memory locations A and B.

1. The CU fetches the addition instruction from memory (or cache).
2. The CU decodes the instruction and determines that it needs to add two numbers.
3. The CU fetches the contents of memory locations A and B, storing them in registers.
4. The CU sends the addition operation and the contents of the registers to the ALU.
5. The ALU performs the addition and stores the result in a register.
6. The CU can then store the result back to memory or use it for further calculations.

#

    def greet(name):
    print("Hello,", name, "!")


    name = input("Enter your name: ")
    greet(name)

Step-by-Step Breakdown :

<u>Writing the code</u> : <br>
1. Defines a function greet to print a greeting.<br>
2. Takes user input for name.<br>
3. Call the greet function with the input name.

<u>Interpretation (Python is interpreted)</u> : 
* The Python interpreter reads the code line by line.

<u>Execution</u> : 
1. The input function prompts the user for a name.
2. The entered name is stored in the name variable.
3. The greet function is called with the name as an argument.
4. The print statement inside greet displays the greeting.

# 

    Article Info : 
    Author : Prakash Behera
    Data   : 13 fri sep / 2024




