# EECE2140-MiniProject2
Queue Program

Author Hayden Trent

Description
This project implements a simple queue using a fixed size array of length 5. The program allows the user to enqueue add dequeue remove peek at the front element check the current size and exit using a terminal menu. The queue logic is implemented in Queue.cpp and the function declarations are in Queue.h.

File Structure
Queue.h
Contains all function declarations for the queue operations.

main.cpp
Contains the menu system and user interaction logic.

Queue.cpp
Contains the implementation of enqueue dequeue and other queue functions.

Build
Use a C plus plus compiler such as g++

Compile with
g++ main.cpp Queue.cpp -o queue

Run
./queue

Example Usage
Start the program
./queue

Menu will appear
Option 1 Enqueue
Option 2 Dequeue
Option 3 Peek
Option 4 Size
Option 0 Exit

Example session
Select 1 several times to add items
Select 3 to view the front element
Select 2 to remove an element
Select 4 to see the current queue size
Select 0 to exit

Example Terminal Output
<img width="387" height="860" alt="image" src="https://github.com/user-attachments/assets/40e5c81b-40b8-4146-90aa-a6dd41d62f78" />
