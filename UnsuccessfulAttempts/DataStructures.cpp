#include "LinkedList.hpp"

int main(){
    
    LinkedList myList;
    std::cout<<"List should be empty: \n";
    myList.printList();
    std::cout<<"\nAdding in first element: \n";
    myList.append('x');
    std::cout<<"a";
    myList.printList();
    std::cout<<"b";
    myList.append('q');
    std::cout<<"c";
    myList.printList();
    std::cout<<"d";

    return 0;
}