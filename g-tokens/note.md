
# Tokens
Tokens are the smallest individual unit in a program known as token or lexical unit, which are meaningful to the compiler / interpreter and can't furhter break-down in programs.

Here are different types of tokens in computer programs : 

        - Keywords 
        - Literals(raw_data or constant)
            → Integer Literals 
                * Decimal 
                    > signed (both   : +,-)
                    > unsigned (only :  +)
                * Octal 
                * Hexa-decimal 
                * Binary
            → Floating-point Literals 
                * float 
                * double 
                * long double 
            → Character Literals 
                * single character ('a','3','@')
                * mutiple characters/string ("apples","hy bro!")
            → Boolean Literal
                * represent logical entity (either: true(1)/false(0))
        - Identifers
        - Operators 
        - Separators 
        - Block/Compound 
        - Comment
        - Identation 

## Keywords 
The keywords are predefined and reserved words in programming languages, they have special meaning to the compiler/interpreter .  Here are list of keywords in C/C++ Langauge :  

| Keywords | Description | 
|----------|-------------|
|auto|Used to represent automatic storage class|
|break|Unconditional control statement sussed to terminate switch & looping statements|
|case|Used to represent a case ( optional ) in switch statement|
|char|Used to represent character data type|
|const|Used to define a constant|
|continue|Unconditional control statement used to pass the control to the next iteration|
|default|Used to represent a default case ( optional ) in switch statement|
|do|Used to define do block in do-while statement|
|double|Used to present double data type|
|else|Used to define false block after defiend the if statement|
|enum|Used to define enumerated data type|
|extern|Used to represent external storage class|
|float|Used to represent floating point data type|
|for|Used to define for loop statement|
|goto|Used to represent unconditional control statement|
|if|Used to define a conditional control statement|
|int|Used to represent integer data type|
|long|It is a type modifier that alters the basic data type|
|register|Used to represent register storage class|
|return|Used to terminate a function execution|
|short|It is a type modifier that alters the basic data type|
|signed|It is a type modifier that alters the basic data type|
|sizeof|It is an operator that gives size of the memory of a variable|
|static|Used to create static variables ( constant )|
|struct|Used to create structures ( user defined data type )|
|switch|Used to define switch case statement|
|typedef|Used to specify temporary name for the data types|
|union|Used to create union for grouping different types under a single-name|
|void|Used to indicate nothing :- no return type of function|
|volatile|Used to creating volatile objects|
|while|Used to define a looping statement|


## Literals
Constant is data also known as Literals data , whose values  can’t be changed throughout the program execution , Its value remains fixed throughout the program run . 

Here are different types of constant/Literals  : 

### Integer Literal 
    > Decimal ( 4 bytes ) 
        > Signed ( Both positive,negative number ) 
        > Unsigned ( only positive number ) 
    > Octal ( 4 bytes ) 
    > Hexa-decimal ( 4 bytes )
    > Binary ( 4 bytes ) 

### Real/floating-point Literal 
    > float ( 4 bytes ) 
    > double ( 8 bytes ) 
    > long double ( 16 bytes )

    Floating-point values can also be written with exponential notation/scientific notation to handle extra large or extra small numbers. for examples : 
    2.5e+7 , 2.5e-3 

    Mostly all Real/floating-point numbers are stored in the form of IEEE 754 standard. 

    float → 32 bits  :  sign bit (1) | exponent bits (8) | mantissa bits (23)
    double → 64 bits : sign bit (1)  | exponent bits (11) | mantissa bits (52) 
    long double → 128 bits : sign bit (1) | exponent (15) | mantissa bits (112) 

### Character Literal ( 4 bytes ) 
Single character enclosed within single quotes . 

    ‘A’ → 65 → binary 
Multiple character/String Literal enclosed within double quotes. Every string ends with a null character `\0` by default. for example ; 

    “Prakash\0”
    “Hello bro\0”
    “Are you okay\0”

The compiler adds a null character `\0` at the end of every string . And the null character \0 is used to finish the string . Strings are sequences of characters enclosed within double quotes . Each character in the string will take 1 byte memory to store .

### Boolean Literal ( 1 bytes ) 
Boolean literal can have one value either true / false . 

    true → 1 → binary 
    false → 0 → binary 

## Identifers 
Identifiers are just names given to an entities such as : variable_name , function_name , class_name, struct_name, pacakage_name , etc must be given unique names within the program so that they can be uniquely identified. The unique names given to these entities are known as identifiers. 

> More than one `identifer` <u>can't have the same names in a scope</u>, each identifers must be give a unique name. 

<u>Certain rules for naming identifiers</u> :<br>
* Identifiers must begins with a letter or underscore 
* An identifiers can consist of letters ( A-z ) , digits ( 0 - 9 ) , and underscore ( _ ) 
* The white-space & other special-characters can not be used as the name of an identifiers.
* Keywords cannot be used as an identifiers because they are reserved words to do specific task.
* Each identifier must be unique in its namespace or scope. 
* Identifiers are case sensitive ( myage , myAge are two different variables ) 

In programming 2 types of identifiers : 
1. Implicit identifiers ( reserved keywords ) 
2. Explicit identifiers ( defined by the programmers ) 

| Implicit Identifers| Explicit Identifers|
|--------------------|--------------------|
|auto<br>break<br>case<br>char<br>const<br>continue<br>default<br>do<br>double<br>else<br>enum<br>class<br>float<br>etc|variable_name<br>function_name<br>class_name<br>struct_name<br>unio_name<br>enum_name<br>typedef_name|


The names of variables , methods , classes , packages with more than one word can be difficult to read . There are several techniques you can use to make them more readable : 

    Camel case : Each word  starts with a capital letter , except 
    the first character of first word :-
            > String firstName = ‘John’
    Pascal case : Each word starts with a capital letter :-
            > String FirstName = ‘John’ ;
    Snake case : Each word is separated by an underscore character :-
            > String first_name = ‘John’ ;
                            

## Operators
Operators are special symbols used to perform operations on values of variable or literal values. Such as addition, subtraction, and comparison .

> Operators are used to manipulate data in programs.

| Operator Name | Descriptions | Symbols | 
|---------------|--------------|---------|
|Arithmetic| Arithmetic operators are used to perform simple mathematical operations on primitive data types|+, - , * , / , %|
|Unary|Unary operators are used with only one operand.|+, - , ++ , - -|
|Comparison|Comparison operators compare two values and return a boolean value, either true/false . These operators are used to check for relations like : equality , greater than , less than, they return boolean results after the comparison and extensively used in looping statements as well as conditional if…else statements.|> , >= , < , <= , == , === , != , !==|
|Logical|Logical operators are used to perform operations on more than two conditions and return a boolean value after evaluating the condition.<br>Logical operators are used in decision making ( if…else / else…if )<br>If ( condition1 && condition2) → If the condition1 is false then the compiler won’t check for condition2.<br>If ( condition1 or condition2) → If the condition1 is true , then the compiler won’t check for condition2,If the condition1 is false , then the compiler will check for condition2.|&& , or , !|
|Ternary|Ternary operator is the shorthand version of the if…else statement . It has 3 components and hence the name is ternary.|Expression ? expression1 : expression2;|
|Bitwise|Bitwise operators are rarely used in everyday programming|& ( Bitwise AND )<br>or( Bitwise OR )<br>^ ( Bitwise XOR )<br>~ ( Bitwise NOT )<br><< ( Left shift )<br>>> ( sign-propagation shift )<br>>>> ( zero-fill right shift )|
|Assignment|Assignment operators are used to assign a value to the variable.|=<br>+=<br>-=<br>*=<br>/=<br>%=|
|Comma(,)|Evaluates multiple operands and returns the value of the last operand.|let a = ( 1, 3, 4 ) ; // 4|
|sizeof( )|This unary operator is used to compute the size of its operand or variable.|sizeof(char) ; // 1|
|->|This operator is used to access the variables of classes or structures.|cout<<emp->first_name ;|
|Casting operator|This unary operator is used to convert one data type into another.|float a = 11.567;<br>int c = (int) a; // returns 11|
|dot operator|This operator is used to access members of structure variables or class objects in C++.|cout << emp.first_name ;|
|&|This is a pointer operator and is used to represent the memory address of an operand.| |
|*|This  is an Indirection Operator| |
|<<|It is called the insertion operator. It is used with cout to print the output.| |
|>>|It is called the extraction operator. It is used with cin to get the input.| |
|::| Scope resolution operator| |
|Memeber derefercing operators|C++ permits us to define a class containing various types of data & functions as members. C++ also permits us to access the class members through pointers. C++ provides a set of three pointers . C++ provides a set of three pointers to member operators.<br>::*  := To access a pointer to a member of a class <br>.*   := To access a member using object name & a pointer to that member <br>->* := To access a member using a pointer in the object & a pointer to the member| | 
|Memory management operators|Two unary operators that perform that task of allocating & freeing the memory.<br><br>**delete**  := memory release operator<br>**new** := memory allocation operator| | 
|Manipulators|**endl**  := This manipulator is used to insert a line feed into an output. It has the same effect as using ‘\n’ for newline.<br>**stew** := With the stew, we can specify a common field width for all the numbers and force them to print with right alignment.| | 
|

## Separators

Special symbol can be a `single character` or `combination of characters` having specific meaning within the syntax of the programming language.

|Symbols|Descriptions|
|-------|------------|
|[ ]    |Square bracket are used to store the element of an list or array|
|{ }    |Pair of curly braces are used to define the block of code and its scope.|
|:      |colon used to define a block of code in python|
|;      |Semicolon used to terminate the statement|
|,      |Comma operator used to separate multiple identifiers by comma|
|=      |Assignment operator is used to assigned values from right side to left side|
|.      |dot/period operator used to access member of class , struct , union|
|#      |The preprocessor is a macro processor that is used automatically by the compiler to transfer your program before actual compilation starts|
|'      |Single quote used to enclose the character literals|
|"      |Double quote used to enclose the string literals|
|::     |Scope resolution operator is used to access members of namespaces , classes ,etc|
|( )    |Represents parentheses, It has different meaning based on different context :=<br>- the context of function definition, it used enclosed parameters.<br>- the context of function call, it used to call a function by passing  with or without  arguments.<br>- the context of expression, it used to define precedence.<br>- the context of control-flow statements, it used to check conditions, returning boolean values either true/false.|


## Block/Compound

A block is denoted by a pair of curly braces : { …. } and one of the smallest units within the program. A block can contain zero or more than one statement / instructions.

Syntax : 

    {
        Statement 1
        Statement 1
        Statement 1
        …
        …
    }

Blocks are mainly used with functions, classes & control-flow statements.<br>
Blacks can be nested form, it means a block is present inside of another block. for examples ; 

    {
        Statement 1
        Statement 1
        Statement 1
        …
        …
        {
        char x = ‘A’ ; 
            {
                int x = 3;
            }
        }
    }

> Blocks define the scope . There are 2 types of scope : 

1. Global scope 
2. Local scope 

Each variable and function must be uniquely identified within its scope. So, the two identifiers can’t have the same name within its scope. 

> Each block must have an identification either implicit identifiers or explicit identifiers . for example ; 

Block + Implicit Identifers :

    // selection statements 

    if ( ) {                         switch ( ) {

    } else if ( ) {                  }

    } else { 

    } 

    // iteration statements 

    for ( ) {       while ( ) {            do {
                
    }               }                      }while( ) 

Block + Explicit Identifers :

    // function definition statement 
    type function user_defiend_indentifer (para1, para2,..., paraN ){

    }

    // class statement 
    class user_defiend_identifer 
    {

    }

We can write “declaration statements” outside of any function body or any block or within the function body or within a block , But most of the statements are written inside the function body.

## Comments 
The comments are used to explain the codes; about what the code does, how it works.Comments can also be used to prevent the execution, when testing alternative code.

    //     : single line comment 
    /* */  : multi-line comment 

## Indentation 

Indentation refers to the white-space at the beginning of a code line. Where in other
programming languages the indentation in  code is for readability only , the indentation in python is very important. Python uses the indentation to define a block scope / block of code, the block of conditions , loops , functions , classes .

Python indentation tells the python interpreter that the groups of statements belong to a particular block of code . In python , indented code blocks are always preceded by a colon ( : ) on the previous line.

Indentation rules :<br>
* we have to use the same number of spaces in the same code block , otherwise the python will give an error .
* python will give an error if we skip the indentation .
* the number of spaces is up to us as a programmer , the mostly used 4 spaces , but it has to be at least one .
In python, the indentation is very important.

So, the indentation in python is very important, while other programming languages it uses for code reability purposes.










