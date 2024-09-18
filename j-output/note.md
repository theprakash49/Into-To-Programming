# Output

Both output & input mechanisms are used in programming to interact with the outer-world. The output mechanism used to produce final-output of program for output-devices(terminal, files, printer, speaker, etc). The input mechanism used to get inputs from input-devices (keyboard, scanner, mouse, touchpad, voice-command, read from files on server, etc).

Output can take various forms depending on the nature of the program and its intended purpose :---

* <u>Console Output</u> : This is text or data that is displayed in the console or command-line interface.
* <u>Graphical Output</u> : In applications with a graphical user interface ( GUI ) , output can be visual elements such as : windows, buttons, images, charts, graphs, or animations.
*  <u>Files</u> : Programs often produce output that is stored in files on disk. This can include text files, binary files, databases, spreadsheets, images, audio files, and more. File output allows programs to save data for later use, share it with other programs, or provide it to users in a persistent format.
* <u>Network Output</u> : Some programs generate output that is transmitted over a network to other devices or systems. This can include sending data to servers, communicating with other programs through APIs (Application Programming Interfaces), or streaming media content over the internet.
* <u> Hardware output</u>  : In embedded systems or low-level programming, output can involve controlling hardware components such as LEDs, motors, sensors, displays, or actuators. Programs send signals or commands to these devices to produce physical effects in the real world.
* <u> Error output </u>  : Notifications of problems that occur during program execution.

In the world of programming, the input and output are the essential mechanisms through which a program communicates with the external environment . Input refers to data provided to the program , while output is the result or response produced by the program .

In any output operation, data flows from main_memory(RAM) to output devices like (screen, printer, speaker,  to database, to file,etc). There are various output devices, and the screen  is  bydefault one of the standard output device associated with every programming languages. 

### Output for C++ programmin language : 

For input and output, c++ programming language uses an abstraction called `streams` which are sequence of bytes. A stream is an abstract entity where a program can either wrtie or read characters. It hides the hardware implementation and details from c++ program. 

<u> Standard Output Stream </u>(cout) :<br>
`cout` is a predefined object of class `ostream`. `cout` object by default is attached to the standard output device which is screen in most programming environments. cout along with insertion operator (<<) is used to display data to user on screen. Insertion operator is followed by a variable or constant which needs to be displayed to user. Input data flows directly from variable to output stream.The C++ standard library defines some <u>stream objects</u> for input and output. 

for example : 

    #include <iostream>
    using namespace std;

    int main(){
        int score = 34;
        cout << score << " -> " << score + 5 << endl;
        return 0;
    }

### Output for Java programmin language : 

    public class OutputInfo{
        public static void main(String args[]){
            System.out.println("Hello World!");
        }
    }

### Output for JavaScript programmin language : 

    function main(){
        let mission_path = "moon";
        console.log(mission_path);
        return;
    }
    main();

### Output for Python programmin language : 

    def main(crew_no):
        mission_path = "moon"
        total_crew_member  = crew_no
        print(mission_path)
        print(total_crew_member)
        return
    main(4)

The print( ) function prints the specified message to the screen, or other standard output device. The message can be a string, or any other object, the object will be converted into a string before being written to the screen.

`Syntax` : print(object= separator= end= file= flush=)

Here, details explanation of the above syntax :----

* <u>object</u> :- Any object, and as many as you like. Will be converted to string before printed.
* <u>sep</u> :- (optional) ; Specify how to separate the objects, if there is more than one, the default is space ' '.
* <u>end</u> :- (optional) ; Specify what to print at the end. Default is '\n' (line feed).
* <u>file</u> :- (optional) ; where the values are printed. Its default value is sys.stdout (screen).
* <u>flush</u> :- (optional) ; boolean specifying if the output is flushed or buffered, the default: False.

The print( ) function, by default, adds a new-line at the end of the after printing message .





