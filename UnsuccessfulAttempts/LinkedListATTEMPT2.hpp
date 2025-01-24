#include <iostream>
#include <string>

//------------------------------------Node Class------------------------------------//
class Node{
    public://making data public
    char data;
    Node *next;

    //public:

    Node();
    Node(char inp);
    void printNode();
    char getData();
    Node getNext();
    void setNext(Node *nextNode);


};
//constructor to set default values if not defined
Node::Node(){
    data = '-';
    next = NULL;
}
//constructor for defining details
Node::Node(char inp){
    data = inp;
    next = NULL;
}

//node methods
char Node::getData(){
    return data;
}

Node Node::getNext(){
    return *next;
}

void Node::setNext(Node *nextNode){
    next = nextNode;
}

void Node::printNode(){
    std::cout<<"\n|Data: "<<data<<"|Next Address: "<<next<<"|"; //Next Data: "<<next->getData(); || added this in for some funsies / testing 
} 

//------------------------------------Linked List Class------------------------------------//
class LinkedList{

    Node *head;

    public:
    LinkedList();
    void append(char userInput);
    void printList();

};

//constructor for a new empty LinkedList
LinkedList::LinkedList(){
    head = NULL;

    
}

void LinkedList::append(char userInput){

    Node *newNode = new Node(userInput);//creates the pointer to the new node that will be appended || Using the NEW keyword to Initialise AND Allocate space in memory 

    //if list / head is empty assigns it straight away
    if(head == NULL){
        head = newNode;
    }else{
        //cycle through each node until finding the next being null then update the last nodes pointer to this new node object
        Node nextNode = head->getNext();
        std::cout<<"nextNode is: \n";
        nextNode.printNode();
        while(&nextNode!=NULL){//cycles through until it finds node with NULL pointer
            nextNode = nextNode.getNext();
        }
        nextNode.setNext(newNode);

    }


}

//method for printing the linked list
void LinkedList::printList(){

    Node *temp = head;

        // Check for empty list
    if (head == NULL) {
        std::cout << "List empty" << std::endl;
        return;
    }

    // Traverse the list
    while (temp != NULL) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    
    // if (head==NULL){
    //     std::cout<<"!! List is empty !!";
    // }else{
    //     Node *temp = head;
    //     std::cout<<"checkpoint1";
    //     std::cout<<"\n"<<temp->data;
    //     Node *nextNode = temp->next;//required to put this in a seperate variable as we are taking the address of a temporary object and the address would live longer than the object if we diddnt pass as variable
    //     while(&nextNode!=NULL){
    //         std::cout<<"checkpoint2";
    //         temp = nextNode;
    //         std::cout<<"\n"<<temp->data;
    //         nextNode = temp->next;
    //     }

    // }
}

// void LinkedList::append(char userInput){

//     Node *newNode = new Node(userInput);//creates the pointer to the new node that will be appended || Using the NEW keyword to Initialise AND Allocate space in memory 

//     //if list / head is empty assigns it straight away
//     if(head == NULL){
//         head = newNode;
//         return;
//     }else{
//         //cycle through each node until finding the next being null then update the last nodes pointer to this new node object
//         Node *nextNode = head->next;
//         while(&nextNode!=NULL){//cycles through until it finds node with NULL pointer
//             nextNode->next;
//         }
//         nextNode->next;

//     }


// }

// //method for printing the linked list
// void LinkedList::printList(){
//     if (head==NULL){
//         std::cout<<"!! List is empty !!";
//     }else{
//         Node *temp = head;
//         std::cout<<"\n"<<temp->data;
//         Node *nextNode = temp->next;//required to put this in a seperate variable as we are taking the address of a temporary object and the address would live longer than the object if we diddnt pass as variable
//         while(&nextNode!=NULL){
//             temp = nextNode;
//             std::cout<<"\n"<<temp->data;
//             nextNode = temp->next;
//         }

//     }
// }