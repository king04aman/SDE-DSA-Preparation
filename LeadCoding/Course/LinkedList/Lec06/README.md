# Convert Binary number in a linked list to integer

### `Method 1:`

*It's very basic to observe that we don't know by what power of 2 we will be multipying the first Node of the List if we try to iterate in the forward direction , so we would just convert the the Linked_list into a string and then traverse over it in the backward direction... Multiplying each index by increasing pow(2) and keep adding the result to form the desired Decimal answer.*

**Time Complexity: O(n)** *(where n is no of nodes in linked list)*

### `Method 2`:
*To optimize the space and to make our solution one-pass we need to figure out a way to iterate in the forward direction and get the desired result*

**Time Complexity: O(n)** *(where n is no of nodes in linked list)*
