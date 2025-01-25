#include <iostream>
class Node{
    public:
    char data;   //contains the data of the node
    Node* next;  //declares the node pointer "next"
    Node();
    Node(char dataInp);
};

//default constructor for a new node
Node::Node(){
    data = '-';
    next = NULL;
}

//paramatised constructor for adding data to new node
Node::Node(char dataInp){
    data = dataInp; //TUTORIAL HAS THIS AS THIS->DATA
    next = NULL;
}

class LinkedList{
    //Node* head; //defines the pointer head. This should always point at the first element of the list
    public:
    Node* head; //defines the pointer head. This should always point at the first element of the list
    LinkedList();
    void insertAtHead(char dataInp);
    void append(char dataInp);
    void print();
    void pop();
    void removeHead();
    char returnElementData(int element);
    bool linearSearch(char userInp);
};

//default constructor for making new list
LinkedList::LinkedList(){
    head = NULL;
}

void LinkedList::insertAtHead(char dataInp){

    Node* newNodePtr = new Node(dataInp); //creates a pointer to the new node that we will insert into the list

    //if list is currently empty
    if(head == NULL){
        head = newNodePtr;
    }else{ //if not we make the new entry point towards the previous head ++ the current head to equal the new node
        newNodePtr->next = head;//the new node now points towards the element it is replacing as head
        head = newNodePtr;//the new head is the newNode
    }
}

void LinkedList::print(){
    Node* temp = head;//makes a temporary variable that we will use to iterate over the list, beginning at the head

    if(head==NULL){
        std::cout<<"\n!! List is empty !!"<<std::endl;
    }else{
        while(temp!=NULL){
            std::cout<<temp->data<<std::endl;
            temp = temp->next;
        }
    }
}

void LinkedList::append(char dataInp){

    Node* newNodePtr = new Node(dataInp);

    if(head==NULL){//if list empty (EG First element is empty)...
        head = newNodePtr;
    }else{
        Node* lastElement = head;
        //iterates over the list until it finds the last element (AKA an element that points to nothing after it)
        while(lastElement->next!=NULL){
            lastElement = lastElement->next;
        }
        //assigns current last element in the list to point to the new node
        lastElement->next = newNodePtr;
    }
}

void LinkedList::pop(){
    if(head==NULL){ //if list empty (EG First element is empty)...
        std::cout<<"List is empty, nothing to pop!";
    }else{
        Node* lastElement = head;//sets the variable we will use to find the last elemene to the head of the list
        Node* prevElement;//stores the element before the last as we will need to change what it points to
        while(lastElement->next!=NULL){
            prevElement = lastElement;
            lastElement = lastElement->next;
        }
        delete lastElement;//deletes the last element from memory
        prevElement->next = NULL;//sets the element pointed to by the NEW last element to NULL
    }
}

void LinkedList::removeHead(){
    Node* oldHead = head;
    if(head==NULL){ //if list empty (EG First element is empty)...
    std::cout<<"List is empty, nothing to remove!";
    }else{
        head = head->next;
        delete oldHead;
    }
}

char LinkedList::returnElementData(int targetElement){
    int i = 0;
    Node* currentNode = head;
    while(i!=targetElement){
        if(currentNode==NULL){//if target element exceeds ammount in list
            return NULL;//return nothing as it was not in list MAYBE should change this to return something else but idk
        }else{
        currentNode = currentNode->next;//moves to next element
        ++i;//incriment i
        }
    }
    return currentNode->data;//will only reach here if tht element has been found
}

bool LinkedList::linearSearch(char userInp){
    Node* currentNode = head;
    if(currentNode==NULL){
        return false;
    }else{
        while(currentNode!=NULL){
            if(currentNode->data==userInp){
                return true;
            }else{
                currentNode=currentNode->next;
            }
        }
        return false;
    }
}

class Stack :public LinkedList{//Creating a stack using my linked list data structure (FILO)
    
    public:

    Stack();
    Stack(char inp);
    void add(char userInp);
    void remove();
};

//may need to add constructor to set head
Stack::Stack(){
    head=NULL;
}

Stack::Stack(char inp){
    head->data=inp;
    head->next=NULL;
}

void Stack::add(char userInp){
    Node* newEntry = new Node(userInp);
    if(head==NULL){
        head = newEntry;
    }else{
        newEntry->next=head;
        head = newEntry;
    }
}

void Stack::remove(){
    this->removeHead();
}

//creating a FIFO data structure using my linked list
class Queue : public LinkedList{
    public:
    void add(char inp);
    void remove();
};

void Queue::add(char inp){
    this->append(inp);
}

void Queue::remove(){
    this->removeHead();
}

