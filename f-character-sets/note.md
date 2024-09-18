
# Character Sets
Character set is a set of valid characters that high-level languages can recognize. 

A character represents only letter ( A - z ) , digits ( 0 - 9 ) or any other symbols ( # @ , “ ? * & % etc )

C/C++ supports ASCII Encoding Standard , if we need to use advanced characters we can go for Unicode Encoding standard.

|       |       |
|-------|-------| 
| Letters | Lower and upper case letters together support 52 alphabets.<br><br>Lower case letters : a to z <br>Upper case letters : A to Z|
| Digits | Supports 10 digits which are used to construct numerical values. <br><br>Digits : 0 1 2 3 4 5 6 7 8 9 |
| Special Symbols | Supports a rich set of special symbols which are used to perform mathematical operations , check conditions, white_Space comma + - * / % ( { / ?: etc|
| Other Characters | Support all ASCII encoding or Unicode encoding|


|        |       |
|--------|-------|
|Upper Case Letters | A →  65 <br>B → 66 <br>C → 67 <br>.<br>.<br>Z → 90 |
|Lower Case Letters | a → 97 <br>b → 98<br>c → 99 <br>.<br>.<br>z → 122|
| Digits | 0 → 48<br>1 → 49 <br>.<br>9 → 57 |


# Encoding & Decoding 

Encoding and decoding are processes used in computer science and information technology to represent and interpret data in various formats.

Here's what each term means :

| Fromat | Description | 
| -------|-------------|
| Encoding | Encoding is the process of converting data from one form or representation to another.<br>In the context of character encoding, encoding refers to converting textual data (characters) into a specific format that can be stored, transmitted, or processed by computers.<br>For example, when you type text on a keyboard, the characters you input are encoded into binary data (0s and 1s) using a character encoding scheme such as ASCII, Unicode, or UTF-8.<br>Encoding can also refer to the process of converting data into a specific format for transmission over a network, storage on disk, or encryption for security purposes.|
| Decoding | Decoding is the process of interpreting encoded data and converting it back into its original form or representation.<br>In the context of character encoding, decoding involves converting binary data (0s and 1s) back into textual characters using the appropriate character encoding scheme.<br>For example, when a computer receives binary data over a network, it decodes the data using the agreed-upon encoding scheme to reconstruct the original text.<br>Decoding can also refer to the process of interpreting encoded data in other contexts, such as decoding compressed files, decoding multimedia data (e.g., audio, video), or decoding encrypted data.|

# ASCII Vs Unicode 
ASCII ( American Standard Code for Information Interchange ) and Unicode are character encoding standards used in computing to represent text as numbers. Both ASCII and Unicode assign a unique numerical value to each character in a character set, allowing computers to store, process, and transmit textual data .

| Encoding Standard | Description |
|-------------------|-------------|
| ASCII | ASCII ( American Standard Code for Information Interchange ).<br>ASCII is one of the earliest character encoding standards, developed in the 1960s.<br>It originally used 7 bits to represent characters, allowing for 128 different characters , including : letters, digits, punctuation marks, and control characters.<br>ASCII encoding primarily covers characters used in the English language, but it lacks support for characters from other languages and special symbols.<br>Extended ASCII ( 8 bits ASCII ) was later introduced to support additional characters, with different variations used in different regions of the world.| 
| Unicode | Unicode is a more comprehensive character encoding standard designed to support characters from all writing systems in the world.<br>It uses a variable-length encoding scheme, typically UTF-8, UTF-16, UTF-32 to represent characters using 8,16,32 respectively.<br>Unicode assigns a unique numerical code point to each character, including ; letters, digits, symbols, emojis, and characters from various languages and scripts.<br>Unicode includes ASCII as a subset, with the first 128 code points identical to ASCII.<br>Unicode allowed for multilingual text processing, enabling software to handle text in multiple languages seamlessly.|


In summary, encoding involves converting data into a specific format, while decoding involves interpreting encoded data and converting it back into its original form. These processes are essential for communication, data storage, data processing, and various other tasks in computing.


