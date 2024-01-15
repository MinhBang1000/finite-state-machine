Hi, my name is Bang.

This is a tutorial that will help you to understand the finite state machine or its design pattern.
How to work on it ?

1. Setup an environment
- Using VSCode or any editors (VSCode for this lessons)
- Install the Microsoft C/C++ extension on VSCode + Install WinGW for your PC follow this guide (https://code.visualstudio.com/docs/cpp/config-mingw)
** Notice: In the step 4 & 5 if you get the error, insert it --> pacman -Syu

2. Compile + Execute
- To run our source you need to learn about compile C++ file by c++ or just follow my steps below:
- g++ -c <file_name>.cpp --> This code will compile file_name.cpp (concrete file of a header) to file_name.o for the linking step
** Notice: You need to compile all .cpp files includes main.cpp
- g++ <file_name_1>.cpp <file_name_2>.cpp ... <file_name_n>.cpp -o output
--> Linking all files that have #include and using together inside.
--> The output file is executable file
- ./output --> Execute your program

Thanks,
Minh Bang
