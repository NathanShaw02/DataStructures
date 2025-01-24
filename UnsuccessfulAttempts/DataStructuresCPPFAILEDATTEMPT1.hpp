#include <iostream>
#include <vector>

//----------------------node class----------------------

template<class T>
class Node{

    T data;
    int nextAddress;
    int prevAddress;

    public:

    Node(int prevAddInp,T dataInp, int nextAddInp); //constructor has no return type | not even void!
    T getData();
    int getNextAddress();//Should not use null for no next and 0 would be confusing because of element counting hence should use -1 as null | same for prevAddress().
    int getPrevAddress();
    void setData(T inp);
    void setNextAddress(int inp);
    void setPrevAddress(int inp);
    void printNodeData();

};

//constructor
template<typename T>
Node<T>::Node(int prevAddInp,T dataInp, int nextAddInp){
    data = dataInp;
    nextAddress = nextAddInp;
    prevAddress = prevAddInp;
}


template<typename T>
T Node<T>::getData(){
    return data;
}

template<typename T>
int Node<T>::getNextAddress(){
    return nextAddress;
}

template<typename T>
int Node<T>::getPrevAddress(){
    return prevAddress;
}

template<typename T>
void Node<T>::setData(T inp){
    data = inp;
}

template<typename T>
void Node<T>::setNextAddress(int inp){
    nextAddress = inp;
}

template<typename T>
void Node<T>::setPrevAddress(int inp){
    prevAddress = inp;
}

template<typename T>
void Node<T>::printNodeData(){
    std::cout<<"|Previous Address: "<<prevAddress<<"|Data: "<<data<<"|Next Address "<<nextAddress<<"|";
}


//----------------------linked list class----------------------
template<typename T>
class LinkedList{

    std::vector<Node<T>> linkedList;
    int head;
    public:

    LinkedList();
    void append(T dataInp);
    void remove();
    void printList();

};

// template<typename T>
// LinkedList<T>::LinkedList(){

// }

template<typename T>
void LinkedList<T>::append(T dataInp){
    if (linkedList.size() == 0){
        linkedList.resize(linkedList.size()+1);
        linkedList.push_back(Node(-1,dataInp,2));
    }else{
        //will need to iterate through list using node.get next until get next = -1 i think or maybe -2 if end needs to be different
    }

}

template<typename T>
void LinkedList<T>::printList(){
    //std::vector<Node<int>>::iterator it;
    for(T nodee : LinkedList;){
        std::cout<<nodee;
    }
}