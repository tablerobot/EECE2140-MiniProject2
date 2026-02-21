**Testing Notes**

**Author Hayden Trent**


**Compile the program**

g++ main.cpp Queue.cpp -o queue

**Run the program**

./queue

**Test 1 Enqueue until full**

**Steps**

Run the program.
Press 1 five times.
Press 1 again.

**Expected outcome**
The queue should report an error that the queue is full after the fifth insertion.

**Test 2 Dequeue until empty**

**Steps**

Run the program.
Press 1 two or three times.
Press 2 repeatedly.

**Expected outcome**

Items should be removed in the order they were added. When the queue becomes empty an error message should appear.

**Test 3 Wrap around test circular indexing**

**Steps**

Run the program.
Fill the queue using option 1.
Remove two items using option 2.
Add two more items using option 1.

**Expected outcome**

The queue should continue working without losing data. This verifies circular behavior once implemented.

**Test 4 Mixed operations sequence test**

**Steps**

Run the program.
Perform a mix of enqueue dequeue peek and size operations in different orders.

**Expected outcome**

The queue should maintain the correct order of elements and the reported size should always match the number of elements currently stored.
