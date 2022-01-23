class Node {
public:    
    int val;
    Node* next;
    
    Node() {
        this->next = NULL;
    }
};

class MyLinkedList {
    
    Node* head;
    int length;
    
public:
    MyLinkedList() {
        head = NULL;
        length = 0;
    }
    
    int get(int index) {
        
        // edge cases empty linkedlist or negative index or out of bounds
        if(head == NULL || index < 0 || index >= length) {
            return -1;
        }
        
        //check if the index is valid first, if it isn't return -1 else the value at index
        
        Node* cur = head;
        int i = 0;
        
        while (cur != NULL) {
            if (i == index) {
                return cur->val;
            }
            cur = cur->next;
            i++;
        }
        
        return -1;
    }
    
    void addAtHead(int val) {
        
        //new node 
        Node* cur = new Node();
        cur->val = val;
        
        // If there exists no node yet, create a new node at head
        if (head == NULL) {
            head = cur;
        }
        
        //otherwise make the next pointer of cur to point at head and make it the new head
        else {
            cur->next = head;
            head = cur;
        }
        
        length++;
        
    }
    
    void addAtTail(int val) {
        
        Node* cur = head;
        
        //edge case, if linkedlist is empty
        if(head == NULL) {
            addAtHead(val);
            return;
        }
        
        //otherwise iterate through the list till the next pointer of a node is null;
        while(cur->next != NULL) {
            cur = cur->next;
        }
        
        //add a new node to tail
        Node* newNode = new Node();
        newNode->val = val;
        cur->next = newNode;
        
        length++;
        
    }
    
    void addAtIndex(int index, int val) {
        
        //check if valid positive index or index > length
        if(index < 0 || index > length) {
            return;
        }
        
        // if index is 0, then add at head
        if (index == 0) {
            addAtHead(val);
            return;
        }
        
        //if index equals length, then add a new node at tail
        if (index == length) {
            addAtTail(val);
            return;
        }
        
        //variables for iterating
        int i = 0;
        Node* cur = head;
        
        //new node
        Node* newNode = new Node();
        newNode->val = val;
        
        while (cur != NULL) {
            if (i == index-1) {
                newNode->next = cur->next;
                cur->next = newNode;
                break;
            }
            cur = cur->next;
            i++; 
        }
        
        length++;
        
    }
    
    void deleteAtIndex(int index) {
        Node* cur = head;
        Node* prev = head;
        int i = 0;
        
        //edge case, if linkedlist is empty or index is out of bounds
        if(head == NULL || index >= length) {
            return;
        }
        
        // if node at head is to deleted
        if(index == 0) {
            head = head->next;
            delete cur;
            return;
        }
        
        //otherwise iterate through the list till the next pointer of a node is null;
        while(cur != NULL) {
            if(i == index) {
                break;
            }
            cur = cur->next;
            i++;
        }
        
        // when ith node is found, simply get another pointer called previous to iterate just before 
        while(prev->next != cur) {
            prev = prev->next;
        }
        
        // make the previous' next pointer point to cur's next and delete ith node(optional)
      
        prev->next = cur->next;
        delete cur;
        
        length--;
    }
    
    // just for debugging using destructor to print out linkedlist
    /*
    ~MyLinkedList() {
        while(head != NULL) {
            cout << head->val << " -> ";
            head = head->next;
        }
    }*/
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
