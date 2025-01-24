#include "LinkedList.hpp"

int main(){

    //initialise Linked List
    LinkedList myList;

    //test if inserting at head works
    myList.insertAtHead('c');
    myList.insertAtHead('q');
    myList.insertAtHead('x');

    //test if appending works
    myList.append(' ');
    myList.append('k');
    myList.append('i');
    myList.append('c');
    myList.append('k');
    myList.append('.');
    myList.append('c');
    myList.append('o');
    myList.append('m');
    myList.append('m');
    myList.printList();

    //testing if pop works
    std::cout<<std::endl;
    myList.pop();
    myList.printList();

    //testing if getting data by element works
    std::cout<<"\nBelow should say 'x':"<<std::endl;
    std::cout<<myList.returnElementData(0);//should re
    std::cout<<"\nBelow should say 'c':"<<std::endl;
    std::cout<<myList.returnElementData(6);
    std::cout<<"\nBelow should say ' '/NULL:"<<std::endl;
    std::cout<<myList.returnElementData(20);
    std::cout<<"\n\n";

    //testing if finding if data is present in list works
    std::cout<<"The statement should be 1: "<<myList.linearSearch('.');
    std::cout<<"The statement should be 0: "<<myList.linearSearch('a');
    
    return 0;
}