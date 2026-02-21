

#include <iostream>
#include "Queue.h"   // Header file containing function declarations
#include <string>
#include <limits>

using namespace std;



// Displays the menu options to the user
void displayMenu() {
    cout <<"Option 1: Enqueue. \n"   // Add item to queue
         <<"Option 2: Dequeue.\n"    // Remove item from queue
         <<"Option 3: Peek.\n"       // View front item
         <<"Option 4: length.\n"       // Show number of elements
         <<"Option 0: Exit.\n";      // Exit program
}

int main(){
    int v;
    int c =-1; // Stores the user's menu choice

    // Loop continues until user selects 0 (Exit)
    while (c!=0){

        displayMenu();  // Show menu options

        // Validate user input
        if (!(std::cin >> c)) {
            std::cout <<"Invalid input. Please enter a number." << std::endl;
            std::cin.clear(); // clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue; // restart loop
        }

        // Process user choice
        switch (c) {

        case 1:  // Enqueue
            if (isFull() == true) {
                cout << "Error, queue is full.\n";
            } else {
                v = enqueue();
                cout << "Enqueued: " << v << endl;
            }
            break;

        case 0:  // Exit
            std::cout << "Exiting the program." << std::endl;
            break;

        case 2:  // Dequeue
            std::cout << "Dequeuing a program.\n" << std::endl;
            v = dequeue();   // Remove front element

            // Check if queue was empty
            if (v ==-1){
                cout<<"Error, queue is empty.\n";
            } else {
            cout <<"You have dequeued: "<< v <<endl;
            }
            break;

        case 3:  // Peek
            std::cout << "The front of the queue is: "<<front() << std::endl;
            break;

        case 4:  // length
            std::cout << "The length of the queue is: "<<size() << std::endl;
            break;

        default:  // If invalid option chosen
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }
    }

    return 0;
}
