Testing Notes: (Queue capacity set to 5 for all tests)

1. Enqueue Until Full
Enqueued 5 values (10, 20, 30, 40, 50). All added successfully.
Tried to enqueue a 6th value, got error message: Error: Queue is full. Cannot enqueue 60.

2. Dequeue Until Empty
Used already enqueued 5 values from previous test.
All values dequeued in correct order
Tried to dequeue again on empty queue,  got error message: Error: Queue is empty. Cannot dequeue.

3. Wrap-Around Test
Enqueued 1, 2, 3, 4, 5. Dequeued twice. Then enqueued 4, 5.
Printed queue — showed 3, 4, 5, 4, 5 in correct order, confirming circular indexing works.

4. Mixed Operations
Enqueued 100, 200. Dequeued once, got 100. Enqueued 300, 400.
Checked front, got 200, checked size, got 3, printed queue , 200, 300, 400.
Cleared queue, confirmed empty.


