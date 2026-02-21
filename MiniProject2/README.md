Build & Run Commands:
    g++ src/main.cpp src/Queue.cpp -I include -o queue
    ./queue

File Structure Explanation:
    MiniProject2
        include/
            Queue.h       #Class Declaration
        src/
            main.cpp      #Menu for Queue
            Queue.cpp     #Method Implementation, how the queue works
        README.md
        TESTING.md

Example Usage:
    Queue Management System
    Enter queue capacity: 5

    Menu
    1. Enqueue
    2. Dequeue
    3. Peek (Front)
    4. Check Size
    5. Print Queue
    6. Check if Empty
    7. Check if Full
    8. Clear Queue
    9. Exit
    Enter your choice: 1
    Enter integer to enqueue: 15
    15 enqueued successfully.

    Menu
    1. Enqueue
    2. Dequeue
    3. Peek (Front)
    4. Check Size
    5. Print Queue
    6. Check if Empty
    7. Check if Full
    8. Clear Queue
    9. Exit
    Enter your choice: 3
    Front value: 15

    Menu
    1. Enqueue
    2. Dequeue
    3. Peek (Front)
    4. Check Size
    5. Print Queue
    6. Check if Empty
    7. Check if Full
    8. Clear Queue
    9. Exit
    Enter your choice: 2
    15 dequeued successfully.
    Dequeued value: 15

    Menu
    1. Enqueue
    2. Dequeue
    3. Peek (Front)
    4. Check Size
    5. Print Queue
    6. Check if Empty
    7. Check if Full
    8. Clear Queue
    9. Exit
    Enter your choice: 5
    Queue is empty.

    Menu
    1. Enqueue
    2. Dequeue
    3. Peek (Front)
    4. Check Size
    5. Print Queue
    6. Check if Empty
    7. Check if Full
    8. Clear Queue
    9. Exit
    Enter your choice: 9
    Exiting... 
