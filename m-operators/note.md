# Operators

Operators are special symbols used to perform operations on data of variable or literal_data. Such as addition, subtraction, and comparison.

> Operators are used to manipulate data in a program.

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

## Operator Precedence

Operators precedence describes the order in which operators will be evaluated first in expressions. while the associativity in other hands, determines the direction ( typically direction occurs either left to right or right to left ) of operators if the multiple operators have the same precedence in expressions.<br><br>Operators are typically used to manipulate data of variables or literal values in programs.<br><br>Operators with highest precedence are evaluate first :

| Level | symbols |
|-------|---------|
| 15 | ( ) |
| 14 | ** |
| 13 | ++,-- (postfix)|
| 12 | ++,-- (prefix)|
| 11 | +,-(unary_plus,unary_minus)|
| 10 | *, /, //, % |
| 9  | +,- (addition,subtraction) |
| 8  | ==, !=, <, <=, >, >=, is, is not, in, not in |
| 7  | not (logical NOT) |
| 6  | and (logical AND) |
| 5  | or  (logical OR)  |
| 4  | ?:, =, +=, -=, *=, **=, /=, %= (assignment)
| 3  | , (comma) |

If two operators have the same precedence, the expression is evaluated from left to right.

for example : 

    print(5 + 4 - 7 + 3) # 5

