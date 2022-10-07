# Find the middle node of Linked List
### `Method 1:`
_Traverse the whole linked list and count the no. of nodes. Now traverse the list again till count/2 and return the node at count/2._

**Time Complexity: O(n)** *(where n is no of nodes in linked list)*

### `Method 2:`
_Traverse linked list using two-pointers. Move first pointer by one step and the second pointers by two steps. When the fast pointer reaches the end, the slow pointer will reach the middle of the linked list._

[Floyd’s Cycle Detection Algorithm](https://www.codingninjas.com/codestudio/library/floyds-cycle-finding-algorithm)

**Time Complexity: O(n)** *(where n is no of nodes in linked list)*

