#include <iostream>
#include <stdexcept>


using namespace std;

template<class T>
class Stack
{
private:
    T *p;
    int mTop,length;

public:
  Stack();
  ~Stack();
  
  void push(T);
  T pop();
  void display();
  T top();
  bool isEmpty();
};


template<class T>
Stack<T>::Stack()
{
  mTop=-1;
  length=1;
  p=new T[length];
}
template<class T>
Stack<T>::~Stack()
{
  delete [] p;
}
template<class T>
void Stack<T>::push(T elem)
{
  if(mTop==(length-1))     
    {
      length*=2;
      T * temp = new T[length];
      for (int i = 0; i <= mTop; i++)
	  temp[i]=p[i];     
      p=temp;
    }
  mTop++;
  p[mTop]=elem;
}
template<class T>
T Stack<T>::pop()
{
  if(mTop==-1)
    {
      throw underflow_error("Can't pop from an empty stack");
    }
  else if(mTop== ((length/4)-1))
    {
      length/=2;
      T * temp = new T[length];
      for (int i = 0; i <=mTop; i++)
	    temp[i]=p[i]; 
      p=temp;
      
    }
  T ret=p[mTop];
  mTop--;
  
  return ret;
}
template<class T>
void Stack<T>::display()
{
  cout<<length<<": ";
  for(int i = 0; i <= mTop; i++)
    cout<<p[i]<<" ";
  cout<<endl;
}
template<class T>

T Stack<T>::top()
{
  if (mTop==-1)
    throw underflow_error("Can't pop from an empty stack");
  else
    return p[mTop];
}
template<class T>
bool Stack<T>::isEmpty()
{
  if (mTop==-1)
    return true;
  else
    return false;
}
