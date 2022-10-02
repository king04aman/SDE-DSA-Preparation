# Representation of Linked List
Each node of the linked list is represented. Each node consists:
  - A data item
  - An address of another node

<p align="center">
    <img src="https://static.javatpoint.com/ds/images/linked-list.png">
</p>

We wrap both the data item and the next node reference in a class as:

```cpp
class Node {
    public:
        int value;
        Node* next;
};
```

## Linked List Complexity

<p align="center">
    <img src="tCsC.png">
</p>
Space Complexity: O(n)
