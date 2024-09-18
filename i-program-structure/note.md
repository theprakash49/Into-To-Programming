
# Program Strucutre

By structure, It means that any programs can be written in this structure only . writing a program in any other structure will lead to a compilation error . 

## Structure of C program

    #include <stdio.h>                 // Header
    int main(){                        // Main function
        printf("Hello World);          // statment 
        return 0;                      // return 
    }

## Strucutre of C++ program 

structure of functional program : 

    #include <iostream>                // Header file 
    using namespace std;               // standard Namespace
    int main(){                        // Main function entry-point
        int num1 = 7;
        int num2 = 3;                  // declaration of variables
        int result = num1 + num2;      // Expression statement 
        cout << result << endl;        // output statement    
        return 0;                      // return statement 
    }
structure of object-oriented program : 

    #include <iostream>                // Header file 
    #include <string>                  
    using namespace std;               // Standard Namespace
    class UserInfo{                    // class declaration
        public:                        // Access modifiers 
            // Data members 
            int user_age = 24;
            char gender = 'm';         
            string full_name = "Prakash Behera";
            // Member function 
            void personInfo(){
                cout << "Name : " << full_name << endl;
                cout << "Age  : " << user_age << endl;
            }
    };
    // main function entry point of program 
    int main(){
        // object declaration 
        UserInfo user1;
        // member function call 
        user1.personInfo();
        return 0;                        // return statement 
    }

