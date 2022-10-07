# Array vs Linked List

_Let's understand how array is different from Linked list._

## Arrays:
- Array is a collection of elements of similar data type.
- Array supports Random Access, which means elements can be accessed directly using their index, like arr[0] for 1st element, arr[6] for 7th element etc. Hence, accessing elements in an array is fast with a constant time complexity of O(1).
- Elements are stored in contiguous memory location or consecutive manner in the memory.
- Insertion and Deletion operation takes more time, as the memory locations are consecutive and fixed.
- Memory is allocated as soon as the array is declared, at compile time. It's also known as Static Memory Allocation.
- Each element is independent and can be accessed using it's index value.
- Array can be single dimensional, two dimensional or multidimensional
- Size of the array must be specified at time of array decalaration.
- Array gets memory allocated in the Stack section.

---

## Linked List:
- Linked List is an ordered collection of elements of same type, which are connected to each other using pointers.
- Linked List supports Sequential Access, which means to access any element/node in a linked list, we have to sequentially traverse the complete linked list, upto that element. To access nth element of a linked list, time complexity is O(n).
- New elements can be stored anywhere in the memory. Address of the memory location allocated to the new element is stored in the previous node of linked list, hence formaing a link between the two nodes/elements.
- A new element is stored at the first free and available memory location, with only a single overhead step of storing the address of memory location in the previous node of linked list. Insertion and Deletion operations are fast in linked list.
- Memory is allocated at runtime, as and when a new node is added. It's also known as Dynamic Memory Allocation.
- Each node/element points to the next, previous, or maybe both nodes.
- Linked list can be Linear(Singly) linked list, Doubly linked list or Circular linked list linked list.
- Size of a Linked list is variable. It grows at runtime, as more nodes can be added to it.
- Linked list gets memory allocated in Heap section.

--- 
