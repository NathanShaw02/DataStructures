#include "LinkedList.hpp"

int main(){

    //initialise Linked List
    LinkedList myList;

    //test if inserting at head works
    myList.insertAtHead('r');
    myList.insertAtHead('i');
    myList.insertAtHead('s');

    //test if appending works
    myList.append(' ');
    myList.append('t');
    myList.append('o');
    myList.append('m');
    myList.append(' ');
    myList.append('j');
    myList.append('o');
    myList.append('n');
    myList.append('e');
    myList.append('s');
    myList.append('s');
    myList.print();

    //testing if pop works
    std::cout<<std::endl;
    myList.pop();
    myList.print();

    //testing if getting data by element works
    std::cout<<"\nBelow should say 's':"<<std::endl;
    std::cout<<myList.returnElementData(0);//should re
    std::cout<<"\nBelow should say 'm':"<<std::endl;
    std::cout<<myList.returnElementData(6);
    std::cout<<"\nBelow should say ' '/NULL:"<<std::endl;
    std::cout<<myList.returnElementData(20);
    std::cout<<"\n\n";

    //testing if finding if data is present in list works
    std::cout<<"The statement should be 1: "<<myList.linearSearch('.');
    std::cout<<"The statement should be 0: "<<myList.linearSearch('a');
    
    //Stack testing

    Stack myStack;
    std::cout<<"\n\n";
    myStack.add('d');
    myStack.add('c');
    myStack.add('b');
    myStack.add('a');
    myStack.print();
    std::cout<<"\nRemoving Top of Stack:\n";
    myStack.remove();
    myStack.print();
    
    return 0;
}