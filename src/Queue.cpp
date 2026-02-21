#include <iostream>
#include <algorithm>
#include "Queue.h"

using namespace std;

// Global variables for the queue
static int length = 0;        // Tracks the current number of elements in the queue
static int counter = 0;     // Used to generate values when enqueuing
static int queue[5] = {0};        // Fixed-length array (maximum 5 elements)

// Checks if the queue is empty
bool isEmpty() {

    return length == 0;
}

// Checks if the queue is full
bool isFull() {
    return length == 5;
}

// Returns the current length of the queue
int size() {

   // Returns the global variable "length"
   // which tracks how many elements are in the queue
    return length;
}

// Clears the queue
void clear() {

    // Sets all elements of the array to 0
    fill(queue, queue + 5, 0);

    // Resets length counter back to 0
    length = 0;
}

// Returns the front element of the queue
int front() {

    // Returns the first element
    return queue[0];
}

// Adds an element to the back of the queue
int enqueue() {

    // If the queue is full, return -1 to signal error
    if (isFull() == true) {
        return -1;
    }

    // Insert a new value at index "length"
    // counter+1 ensures each new item is unique
    queue[length] = counter + 1;

    // Increase the length of the queue
    length += 1;

    // Increase the counter for next enqueue
    counter += 1;
    return queue[length -1];
}

// Removes the front element of the queue
int dequeue() {

    // If the queue is empty, return -1
    if (isEmpty() == true) {
        return -1;
    }

    // Store the value at the front
    int v = queue[0];

    // Shift all elements one position to the left
    for (int i = 0; i < length - 1; i++) {

        // Move next element forward
        queue[i] = queue[i+1];
    }

    // Clear the last element
    queue[length - 1] = 0;

    // Reduce length since one element was removed
    length--;

    // Return the value that was removed
    return v;
}
