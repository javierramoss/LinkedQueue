#include "linkedqueue.hpp"
#include "contact.hpp"

int main()
{
    //LinkedQueue of integers using pointers
    std::cout << "Instantiating integers LinkedQueue\n";
    LinkedQueue<int>* integerQueue = new LinkedQueue<int>(-1);

    std::cout << "Push numbers from 1 to 5..\n";
    for (int x = 1; x < 6; x++)
        integerQueue->push(x);

    std::cout << "Make a new LinkedQueue using the copy constructor to display later on..\n\n";
    LinkedQueue<int>* copyIntegerQueue = new LinkedQueue<int>(*integerQueue);
    
    std::cout << "Print the stack..\n";
    std::cout << *integerQueue << "\n";
    
    std::cout << "Size: " << integerQueue->size() << "\n\n";

    std::cout << "Element at the front: " << integerQueue->top() << "\n\n";
    
    std::cout << "Pop the 3 elements at the top of the stack..\n";
    for (int x = 0; x < 3; x++)
        std::cout << integerQueue->pop() << " was poped\n";
    
    std::cout << "\nNow the new front of the stack: " << integerQueue->top() << "\n\n";

    std::cout << "Print the stack again..\n";
    std::cout << *integerQueue << std::endl;

    std::cout << "The deep copied LinkedQueue using the copy constructor remained unmodified:" << std::endl;
    std::cout << *copyIntegerQueue << std::endl;

    std::cout << "Using the copy assignment operator the changes can be seen:" << std::endl;
    *copyIntegerQueue = *integerQueue;
    std::cout << *copyIntegerQueue << "\n";
    
    //LinkedQueue of Contact objects using pointers
    std::cout << "Instantiating contacts LinkedQueue" << std::endl;
    LinkedQueue<Contact>* contactQueue = new LinkedQueue<Contact>(Contact("none","none","none","none",-1));

    std::cout << "Push 3 contacts to contactStack\n\n";
    contactQueue->push(Contact("1", "Charles", "Disick", "4530 New Grove Avenue", 34));
    contactQueue->push(Contact("2", "Kylie", "Michaels", "2310 Buena Vista Apartments", 26));
    contactQueue->push(Contact("3", "Jackson", "Smith", "1265 New Dawn Apartments", 45));

    std::cout << "Print the queue..\n";
    std::cout << *contactQueue;

    std::cout << "Size: " << contactQueue->size() << "\n\n";

    std::cout << "Element at the top..\n" << contactQueue->top();

    std::cout << "\nPop the 3 elements at the top of the queue..";
    for (int x = 0; x < 3; x++)
        std::cout << "\npoping..\n" << contactQueue->pop();

    if (contactQueue->empty()) 
        std::cout << "\ncontactStack is now empty\n";

    //deleting
    std::cout << "Freeing memory..\n";
    delete integerQueue;
    delete copyIntegerQueue;
    delete contactQueue; 

    return 0;
}