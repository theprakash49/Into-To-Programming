#include <iostream>
using namespace std;

int main(){
    // >>> Arithmetic Operators 
    int a = 3;
    int b = 7;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;

    /* special operations of arithmetic */
    int x = 4;
    float y = 7;
    cout << x / y << endl; // 0.571429
    // cout << x % y << endl; // note : the remainder operator should not be used on 'float' type
    cout << x % 13 << endl;   // 4

    // >>> Unary Operators 

    // unary_plus
    int c = 4;
    int d = +c;
    cout << d << endl;

    // unary_minus
    int e = 4;
    int f = -e;
    cout << f<< endl;

    // postfix
    int current_score = 13;
    cout << current_score++ << endl; 
    cout << current_score << endl;

    // prefix
    cout << ++current_score << endl;
    cout << current_score << endl;

     // <<< Relational operators 
    int selling_price = 23;
    int cost_price = 10;

    cout << (selling_price < cost_price) << endl;
    cout << (selling_price <= cost_price) << endl;
    cout << (selling_price > cost_price) << endl;
    cout << (selling_price >= cost_price) << endl;
    cout << (selling_price == cost_price) << endl;
    cout << (selling_price != cost_price) << endl;

     // <<< Logical operators 
    string user_name = "sofia67";
    int user_age = 34;
    cout << (user_name == "sofia67" && user_age == 34) << endl;
    cout << (user_name == "sofia67" || user_age <= 18) << endl;
    cout << (!(user_name == "sofia67")) << endl;

    // <<< Assignment operators 
    int num = 17;
    num += 3; cout << num << endl;
    num -= 2; cout << num << endl;
    num *= 2; cout << num << endl;
    num /= 2; cout << num << endl;
    num %= 29; cout << num << endl;

    // <<< Bitwise operators 

    // <<< Other operators

    // sizeof() : returns the size of data type
    cout << sizeof(float) << endl;

    // ternary
    int age = 15;
    int age_limit = 18;
    string is_eligible_for_vote = (age >= age_limit)? "yes eligible" : "not eligible";
    cout << is_eligible_for_vote << endl;

    // & : represents memory address of the operand
    string ip_address = "187:2349:458:389";
    string &get_ip_address = ip_address;
    cout << &get_ip_address << endl;

    // << : for output

    // >> : gets input 

    // '.' : accesses members of struct variables or class objects

    // -> : used with pointers to access the class or struct variables

    return 0;
}