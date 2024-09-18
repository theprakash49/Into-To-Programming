# Data Types 

Data types are representations of different kinds of data associated with certain types often called data types. It defines the different types & sizes of data that can be used in programs to develop software.

The `data` & `instructions` are two main aspects in programming. Writing a program in any programming language, we use variables to store data of different types. The data can be a number, string , boolean , etc. Variables are used to reserve memory locations to store data. When declaring a variable, we need to specify its data `type` to restrict the type of data to be stored.  

In computer science, each piece of data is associated with a certain type often called data types. Data types provide a way to categorize different kinds of data associated with certain types. It defines the different types & sizes of data that can be used in programs, such as number, 
boolean, string, etc. 

Data types can also tell more information about : 
* The kind of data a particular variable can hold 
* The minimum & maximum range of a particular data 
* Internal binary representation of data 
* Control the  kind of operations should be performed on stored data of variables 

Every data type reqires some amount of memory which is different for each data type. When a variable is declare, the compiler/interpreter automatically allocates some memory for that variable depending upon the the data type it has been declared for statically typed languages, in case of dynamically typed languages, the interprter automactially figureout the type at run-time based on assigned value to a variable.

## Data Types in C++ Programming Languages : 
In C++, data types broadly dived into 3 types : 
1. Primary/In-built data types (primitive)
2. Derived data types (non-primitive)
3. User-defiend data types (custom data types defiend by programmer)

**<u>Primary/In-built Data Types</u>** :
The primary data types are basic foundation data types . These data types come with programming by default & in-builts . The `size` & `type` of data is already defined and fixed . These primary data types are also known as primitive data types and **allow to store** only <u>single data of a single type</u>.

| Primary Data Types | Descriptions |
|--------------------|--------------|
| Integer | → The Keyword used for Integer is `int`.<br>→The Size of the Integer is 4 bytes.<br>→ Description: Stores whole numbers without decimals<br>→ The Range is from `-2147483648` to `2147483647`.|
|Character | → The Keyword used for Character is `char`.<br>→ The Size of the Character is 1 byte.<br>→ Description: Stores characters/letters/number/ASCII values.<br>→ The Range is from -128 to 127 or 0 to 255.|
|Boolean|→ The Keyword used for Boolean is `bool`.<br>→ The Size of Boolean is 1 byte.<br>→ Description: Stores boolean or logical values,i.e., true or false.<br>→ The Range is either `true` or `false`.|
|Floating-Point|→ The Keyword used for Floating Point is `float`.<br>→ The Size of Floating Point is 4 bytes.<br>→ Description: Stores single-precision decimal values or floating-point values.<br>→ Precision: `7` decimal digits of precision.|
|Double Flaoting-point|→ The Keyword used for Double Floating Point is double.<br>→ The Size of Double Floating Point is 8 bytes.<br>→ Description: Stores decimal values or double-precision floating-point values.<br>Precision: 15 decimal digits of precision.|
| Void or valueless|→ Description: Used for those functions which don’t return a value.<br>→ Good for processes that carry out activities but do not result in a useful output.<br>→ Particularly in bigger software projects, they are important in structuring and organizing code.|
|Wide character|→ The Keyword used for Wide Character is wchar_t.<br>→ The Size of Wide Characters is 2 or 4 bytes.<br>→ Description: Similar to character data type, but it has a size that is greater than the standard 8-bit data type.<br>→ The Range is 1 wide-character.|

**<u>Derived Data Types</u>** : 

These data types are derived from the primitive or in-built types by performing various operations on top of them. Derived data types are also known as non-primitive data types. Derived data types allow to store large amount of data of same types **or** different types for more complex data structures and operations. 

| Derived Data Types | Descriptions | 
|--------------------|--------------|
| Function | Syntax :   type   functionName ( para1, para2,...., prarN ) { }|
|Array|Syntax :   type   arrayName(size_of_array) ;<br><br>It is defined as the collection of similar items stored at contiguous memory locations. The idea of using an array is to represent many instances in one variable.|
| String | It represents a sequence of characters enclosed within double quotes. |
| Pointer | Syntax :  type   *variableName ;<br><br>Pointers refer to a variable that holds the address of another variable; like any other variable, they too have a data type. It allows programs to simulate call-by-reference as well as create and manipulate dynamic data structure.|
|Reference|Syntax : type&   reference_variable_name = original_variable ;<br><br>A reference variable is an alias, i.e., another name given to a variable that already exists. A reference variable gets attached to the memory location of the original variable, thereby allowing the user to access the contents of the variable by either the original variable name or the reference.|

**<u>User-defined Data Types</u>** : 

Abstract or User-defined data types are defined by the user itself. 

| User-defined data types | Descriptions | 
|-------------------------|--------------|
| Class | Syntax :<br>Class ClassName {<br> Access Specifier // (either ; Private, Protected, Protected)<br>Data members   // variables to be used<br>Member functions // Methods/Functions to access the data members<br>}; // a class always ends with a semicolon<br><br>It consists of data members and member functions, which can be accessed and used by creating an instance (object) of the class. A class is a kind of blueprint for an object. Classes are the building block for C++ that leads to Object-Oriented Programming. Classes are created using the “class” keyword.|
|Structure|Syntax :<br>struct  structureName {<br>// variable of different data types<br>};<br><br> A structure creates a data type that is a collection of variables of different data types grouped together under a single name/type. A structure is declared using the struct keyword.|
|Union|Syntax :<br>union  unionName {<br>// data members<br>};<br><br>In union, all the members which are defined share the same memory location, i.e., any change brought in one member of the union will be reflected in all other members.|
|Enumeration|Syntax :<br>enum flag { constant1 , constant2, constant3, ….. };<br><br>It is a user-defined data type whose main purpose is to make the program easy to read and maintain. It is basically used to assign meaning full names to integral constants. To define an enumeration, the keyword enum is used.|
|typedef|Syntax :<br>typedef <current_name> <new_name><br><br>typedef keyword in C++ is used for aliasing existing data types, user-defined data types, and pointers to a more meaningful name. Typedefs allow you to give descriptive names to standard data types, which can also help you self-document your code. Mostly typedefs are used for aliasing, only if the predefined name is too long or complex to write again and again.  The unnecessary use of typedef is generally not a good practice.|


## Data Types in Java Programming Languages : 

| Primitve Data Types | Non-primitive Data Types |
|---------------------|--------------------------|
|byte<br>short<br>int<br>long<br>float<br>double<br>char<br>boolean|String<br>Array<br>List<br>Set<br>Stack<br>Vector<br>Dictionary<br>All user-defiend classes<br>Interface, etc<br>|
| These are built-in data types|These are created by the users|
|Does not support additional methods|Support additional methods|
|Always has a value|It can be null|
|Starts with lower-case letter| Starts with upper-case letter |
|Size depends on the data type|Same size for all|
|Allow to store only single data| Allow to store collections of data, often represents complex data structres.|

## Data Types in JavaScript Programming Languages : 

| Primtive Data Types | Non-primtive Data Types |
|---------------------|-------------------------|
| Number<br>String<br>Boolean<br>BigInt<br>Symbol<br>Null<br>Undefined<br>|Object|

## Data Types in Pyhton Programming Languages : 

| Primitve Data Types | Non-primitive Data Types |
|---------------------|--------------------------|
|str<br>int<br>float<br>complex<br>bool<br>None| List<br>Tuple<br>Dictionary<br>Set<br>File

## Data Types vs Data Structure

| Data Types | Data Structure | 
|------------|----------------|
|A data type serves as a categorization of data, defining the specific type of value that can be stored in a variable or expression.|On the other hand, a data structure is a way of organizing and storing data in computer memory , ensuring efficient excess and manipulation of the stored information.|
|int , float , char , string , boolean, etc| Stack, Queue , Linkedlist , Tree , Graph , Table , Set , etc.|
|No algorithmic time complexity	|Involve algorithmic time complexities|
|Direct assignment of data|Operations for entering data|
|Abstract programming|Concrete programming|

## Primitive Vs Non-primitive Data Structures

| Primitive | Non-primitive |
|-----------|---------------|
|Primitive data structure is the data structure that allows to store only single data type value.|Non-primitive data structures is a data structure that allows storing multiple data types values of the same type or the different types.|
|integer, boolean, characters, float , etc.|Array, Linkedlist , Stack , Queue , Tree, GrapH , Table , Set.|
|Primitive data structures always contain some value, these data structures do not allow storing NULL values.|We can store a NULL value in the non-primitive data structures.|
|The size of primitive data structures is dependent on the `type` of the primitive data.|The size of non-primitive data structures is not fixed.|
|Primitive data types are immutable.|Non-primitive data types are mutable.|

