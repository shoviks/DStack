#include <iostream>
#include <stdexcept>
#include "dstack.cpp"

using namespace std;

int main()
{
  Stack<int> s1;
  try{
    //Checks if empty
    cout<<s1.isEmpty()<<endl;
   
//Pushes 1, displays stack, displays top of stack and checks if empty
    s1.push(1);
    s1.display();
    cout<<s1.top()<<endl;
    cout<<s1.isEmpty()<<endl;
    
//Pushes 2, displays stack, displays top of stack and checks if empty
    s1.push(2);
    s1.display();
    cout<<s1.top()<<endl;
    cout<<s1.isEmpty()<<endl;

//Pushes 3, displays stack, displays top of stack and checks if empty
    s1.push(3);
    s1.display();
    cout<<s1.top()<<endl;
    cout<<s1.isEmpty()<<endl;

//Pushes 4, displays stack, displays top of stack and checks if empty
    s1.push(4);
    s1.display();
    cout<<s1.top()<<endl;
    cout<<s1.isEmpty()<<endl;

//Pushes 5, displays stack, displays top of stack and checks if empty
    s1.push(5);
    s1.display();
    cout<<s1.top()<<endl;
    cout<<s1.isEmpty()<<endl;

//Pops top of stack, displays stack, displays top of stack and checks if empty
    s1.pop();
    s1.display();
    cout<<s1.top()<<endl;
    cout<<s1.isEmpty()<<endl;
 
//Pops top of stack, displays stack, displays top of stack and checks if empty
    s1.pop();
    s1.display();
    cout<<s1.top()<<endl;
    cout<<s1.isEmpty()<<endl;


//Pops top of stack, displays stack, displays top of stack and checks if empty
    s1.pop();
    s1.display();
    cout<<s1.top()<<endl;
    cout<<s1.isEmpty()<<endl;

//Pops top of stack, displays stack, displays top of stack and checks if empty
    s1.pop();
    s1.display();
    cout<<s1.top()<<endl;
    cout<<s1.isEmpty()<<endl;

//Pops top of stack, displays stack, and checks if empty
//(can't display top because the stack is empty in this case)
    s1.pop();
    s1.display();
    
    cout<<s1.isEmpty()<<endl;
  }
 catch(overflow_error){
   cerr<< "Illegal operation. Cannot push onto a full stack.";
   return -1;
 }
 catch(underflow_error){
   cerr<< "Illegal operation. Cannot pop/return top from an empty stack.";
   return -1;
 }
}
  
