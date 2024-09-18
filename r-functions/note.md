
# Index

> * Intro to function
> * Benefit of function 
> * Types of functions 
> * Declaration of function
> * Function Invoke 
> * Function Prototype 
> * Parameters Vs Arguments 
> * Scope 
> * Pass by value Vs Pass by reference 
> * Callback Functions
> * Default parameter values 
> * Return value 
> * Difference between function Vs method 

# Intro To Function 

A function is a resuable block of code designed to perform a specific task or set of tasks. Functions help organize code, make it more modular, and allow us to reuse the same code in different parts of programs.

Suppose we need to create a program to create a circle and color it, we can create two functions to solve this problem :

* A function to draw the circle
* A function to color the circle

Functions allow us to divide a complex problem into smaller chunks and makes our program easy to understand and reusable.

# Benefit Of Function 

`Modularity` : Functions allow you to break down a complex problem into smaller, more manageable pieces. Each function can address a specific task or subproblem.

`Reusability` : Once you've defined a function, you can use it multiple times throughout your code. This reduces redundancy and makes it easier to maintain and update code.

`Readability` : Functions make code more readable and understandable. Well-named functions provide a clear indication of what a specific part of the code is supposed to do.

`Abstraction` : Functions allow you to abstract away the implementation details of a particular task. The user of the function only needs to know what the function does, not how it achieves it.

`Testing and Debugging` : Functions make it easier to test and debug code. Since each function performs a specific task, you can isolate issues and test each function independently.

`Scoping` : Functions often have their own scope, which means variables defined inside a function are typically local to that function. This helps avoid naming conflicts with variables in other parts of the program.

# Types Of Function 

`Library Function/Built-in Functions` : Programming languages come with a set of built-in functions that perform common tasks.Library functions are also called “built-in Functions“. These functions are part of a compiler package that is already defined and consists of a special function with special and different meanings. Built-in Function gives us an edge as we can directly use them without defining them, whereas in the user-defined function we have to declare and define a function before using them. 
For Example: sqrt(), setw(), strcat(), etc.

`User-Defined Functions` : These are functions created by the programmer to perform specific tasks. User-defined functions enhance code modularity and reusability.

`Recursive Functions` : A recursive function is one that calls itself during its execution. This can be a powerful technique for solving problems that can be broken down into smaller, similar subproblems.

`Anonymous Functions (Lambda Functions)` : These are functions without a name. They are often used for short, one-time tasks. In languages like Python, you can create anonymous functions using the lambda keyword.

`Higher-Order Functions` : These are functions that can take other functions as arguments or return functions as results. They enable a more functional programming style.

`Pure Functions` : Pure functions have two main characteristics: they always produce the same output for the same input, and they have no side effects. This makes them predictable and easier to reason about.

# Function Declaration
The declaration means,creation of function. When you create a function with a name, it’s called a function declaration (aka function definition or function statement).

Syntax : 

    type function_name(para1,prar2,...N){
        // statements;
        return ;
    }


Here, 

<u> The reutrn_type </u> : The data type of the value returned by the function or void if does not return a value. It is Mandatory in syntax.
<br>
<u>Function_name</u> : (user-defiend/explicit identifer). the name of the function should be refers its functionality with respecting identifer rules. 
<br>
<u>Parameter list</u> :
- Function can take input for operations, that is known as parameters.
- It's optional, comma-separated list defiend and preceded by their data type wihtin the enclosed parenthesis duing the function creation.
- If there are no parameters, we must use empty parentheses (). It is Optional in syntax.
- Parameters must have `type`, in this way multiple funciton can have same name with different parameters.
- Based on the parameters specified in the function definition, function they called accordingly.

<u> Function Body </u> : It is enclosed between braces. This is place where we can specify one or more than one statements to perform operations. 

# Function Invoke/Call

* To call a function, we have to write the function's name followd by pair of parenthesis and a semoclon; . 
* Functions are executed in the sequence they are called. Not in the sequence they are defined. If we just define a function, then it is of no use until we actually call it. To call a function, simply write the functionName followed by the parentheses and a semicolon; .
* <u>*notes*</u> : Functions are only executed when it is invoked, NOT when it is defined.
* Function call must be defined, after the definition of function. 
* We can't store `void return type function` in a variables, if we try we will get compilation error. 

# Function Prototype 

If we want to define a function after the function call, we need to use the function prototype.

For example,

    int add(int a, int b); --> prototype (signature of function)
    int main(){
        add(4,5);
        return 0;
    }

# Parameters & Arguments 

`Parameters` : Data/Values can be passed to the function as a parameter. Parameters act as local variables inside the function. Parameters are specified after the functio_name, inside the parentheses. We can add as many parameters as we want, just separate them with a comma.

<u>Parameters are also known as formal parameters</u>. Formal parameters are defined in the header of the function. The formal parameters are the variables defined in the header of the function that receives values/data when the function is called.

`Arguments` : Arguments are the real value, if the parameter is present in the function definition, we need to pass the corresponding data/values to the formal parameter of the function definition during the function call. The data we passed during the function_call is known arguments also known as actual parameters.

The Actual parameters are the values that are passed to the function when it is invoked.

What are the similarities between Formal and Actual parameters :--

- Both are related to functions.
- Parameters are included inside the parentheses.
- Each parameter is separated by a comma.

| Formal Parameters | Actual parameters |
|-------------------|-------------------|
|The Formal parameters are the variables defined in the header of the method that receives values when the method is called.|The actual parameters are the values that are passed to the method when it is invoked/called.|
|In formal parameters, the data types of the receiving values must be included.|In actual parameters , there is no mention of data types . Only the value is mentioned.|

# Scope

Scope determines the accessibility (visibility) of variables.

Types of scope : 
1. Global scope
2. Local scope

<u>Global Scope</u> : 
- The variables which are declared outside of any function or any block are known as global variables.
- Global variables have global scope.
- Global variables can be accessed from anywhere in a program.

<u>Local Scope</u> : 
- The variables which are declared inside the block ( {...} ) are known as local variables. 
- Local variables have local scope, the scope is limited inside the pair of curly braces, and can't be accessed outside of the curly braces.

# Pass by value Vs Pass by reference 

<u>Pass by value</u> : In the pass by value, the copy values/data of the original variable passed as an argument while calling the function. Anything that changes the copied variable inside the function does not reflect the outside of the original value of the variable.

<u> Pass by reference</u> : In the case of the pass by reference, we pass the address of the original variable as an argument while calling a particular function. Anything that changes the passed variable inside the function will reflect the outside of the original value of the variable.

| pass by | descirptions |
|----------|---------------|
| value | - A copy of the value is passed to the function<br>- Changes made inside the function are not reflected on other functions<br> - Actual and formal arguments will be created at different memory location |
| reference | - An address of value is passed to the function<br> - Changes made inside the function are reflected outside the function as well<br> - Actual and formal arguments will be created at same memory location.

<u>When to use pass by value</u> ? As in pass by value, a new copy of the original variable is created and any changes made with the new variable are completely independent of the original variable so it is useful when we want to keep a track of the initial variable and don't want to lose its value. for example : *length of an array*, or *length of string*, etc.

<u>When to use pass by reference</u> ? When we are passing arguments of large size it is better to use pass by reference as no separate copy is made in the called function so memory is not wasted, and hence the program is more efficient.

# Callback Function (function as an argument on other function)

A callback function is a function that is passed as an argument to another function.

#include <iostream>

    // Define a callback function type
    typedef void (*CallbackFunction)();

    // Function that takes a callback function as an argument
    void performAction(CallbackFunction callback) {
        std::cout << "Performing some action...\n";
        // Call the callback function
        callback();
    }

    // Example callback function
    void myCallback() {
        std::cout << "Callback function \n";
    }

    int main() {
        // Pass the callback function to performAction
        performAction(myCallback);
        return 0;
    }

# Default parameter values 

A default parameter is a value provided in a function declaration that is automatically assigned by the compiler if the calling function doesn’t provide a value for the argument. In case any value is passed, the default value is overridden. 

A <u>constructor</u> can contain default parameters as well. A default constructor can either have no parameters or parameters with default arguments.

**For example** :

    // CPP Program to demonstrate Default Arguments
    #include <iostream>
    using namespace std;
    
    // A function with default arguments,
    // it can be called with
    // 2 arguments or 3 arguments or 4 arguments.
    int sum(int x, int y, int z = 0, int w = 0) //assigning default values to z,w as 0
    {
        return (x + y + z + w);
    }
    
    // Driver Code
    int main()
    {
        // Statement 1
        cout << sum(10, 15) << endl;           // 25
    
        // Statement 2
        cout << sum(10, 15, 25) << endl;       // 50
    
        // Statement 3
        cout << sum(10, 15, 25, 30) << endl;   // 80
        return 0;
    }

**Key Points** : 

- Default parameters are overwritten when the calling function provides values for them.
- When a function is called, the arguments are copied from the calling function to the called function in the order left to right.
- Once a default value is used for an parameter in the function definition, all subsequent arguments to it must have a default value as well. It can also be stated that the default arguments are assigned from right to left. for example :

> // Invalid because z has default value, but w after it doesn't have a default value<br>
int sum(int x, int y, int z = 0, int w)

**Advantages & Disadvantage Of Default Parameters** : 

| Advantages | Dis-advantages |
|------------|----------------|
| - Default arguments are useful when we want to increase the capabilities of an existing function as we can do it just by adding another default argument to the function.<br>- It helps in reducing the size of a program.<br>- It provides a simple and effective programming approach.<br>- Default arguments improve the consistency of a program.|It increases the execution time as the compiler needs to replace the omitted arguments by their default values in the function call.|

















 