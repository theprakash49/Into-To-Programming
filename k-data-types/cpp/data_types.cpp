#include <iostream>
#include <string>
using namespace std;

int main(){

    // <<< primary/in-built data types >>>

    // int
    int no_of_space_crew = 7;
    // float
    float total_fuel = 9550.7;
    // double
    double miles_per_second = 2.339999999;
    // bool
    bool is_hydrogen_liquid = true;
    // void : absent of data type (often used with function)
    // char
    char is_water_supply_active = 'y';
    // wchar_t
    wchar_t is_main_engine_start = 'n';

    // <<< Derived data types >>>

    // function 
    // array
    string  mission_path[4] = {"moon","explore universe","mars","venus"};
    cout << mission_path[2] << endl;
    // string 
    string txt = "Welcome to Space";
    // pointer : get the memory address of a variable by using the `&` operator
    string longest_path_mission = "Venus";
    cout << longest_path_mission << '\n';
    cout << &longest_path_mission << endl; // Output the memory_ address
    // reference : store the address of another variable 
    string target_mission_tonight = "Moon";
    string &space_ship = target_mission_tonight;
    cout << target_mission_tonight << '\n';
    cout << space_ship << endl;

    // <<< User-defiend data types >>>

    // class
    // union
    // enum
    // struct
    // typedef 
    
    return 0;
}