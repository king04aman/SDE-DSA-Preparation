# Delete Node in a Linked List
Deletion is also a more than one step process. We shall learn with pictorial representation.

- First, locate the target node to be removed, by traversing linked list:
    <p align="center">
        <img src="https://www.tutorialspoint.com/data_structures_algorithms/images/linked_list_deletion_0.jpg">
    </p>

- The left (previous) node of the target node now should point to the next node of the target node - 
    ```cpp
    LeftNode -> next −> TargetNode -> next;  
    ```
    <p align="center">
        <img src="https://www.tutorialspoint.com/data_structures_algorithms/images/linked_list_deletion_1.jpg">
    </p>

- This will remove the link that was pointing to the target node. Now, using the following code, we will remove what the target node is pointing at.
    ```cpp
    TargetNode.next −> NULL;
    ```
    <p align="center">
        <img src="https://www.tutorialspoint.com/data_structures_algorithms/images/linked_list_deletion_2.jpg">
    </p>

- We need to use the deleted node. We can keep that in memory otherwise we can simply deallocate memory and wipe off the target node completely.
    <p align="center">
        <img src="https://www.tutorialspoint.com/data_structures_algorithms/images/linked_list_deletion_3.jpg">
    </p>
