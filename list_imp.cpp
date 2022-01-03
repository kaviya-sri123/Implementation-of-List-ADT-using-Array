#include "list_header.h"
void List::insertAtFirst(int element)
{
    if(!isFull())
    {
        if(isEmpty())
        {
          passenger_id[size] = element;
          size++;
          cout<<"\nElement inserted at first.\n\n";
        }
        else 
        {
          for(int i=size;i>0;i--)
          {
            passenger_id[i] = passenger_id[i-1];
          }
          passenger_id[0] = element;
          size++;
          cout<<"\nElement inserted at first.\n\n";
        }
    }
    else
        cout<<"\nList is full.\n\n";
}
void List::insertAtLast(int element)
{
    if(!isFull())
    {
        passenger_id[size] = element;
        size++;
        cout<<"\nElement inserted at last.\n\n";
    }
    else
        cout<<"\nList is full.\n\n";
}
void List::insertByPos(int element,int pos)
{
    if(!isFull())
    {
        if(pos > size+1)
            cout<<"\nInvalid Position.\n\n";
        else
        {
            if(pos == 1)
                insertAtFirst(element);
            else if(pos==size+1)
                insertAtLast(element);
            else
            {
                for(int i = size;i>pos-1;i--)
                    passenger_id[i] = passenger_id[i-1];
                passenger_id[pos-1]=element;
                size++;
                cout<<"\nElement inserted at position "<<pos<<"\n\n";
            }
        }
    }
    else 
        cout<<"\nList is full.\n\n";
}
void List::deleteAtFirst()
{
    if(!isEmpty())
    {
        for(int i=0;i<size;i++)
            passenger_id[i] = passenger_id[i+1];
        size--; 
        cout<<"\nElement deleted.\n\n";
    }
    else 
        cout<<"\nList is empty.\n\n";
}
void List::deleteAtLast()
{
    if(!isEmpty())
    {
        size--;
        cout<<"\nElement deleted.\n\n";
    }
    else 
        cout<<"\nList is empty.\n\n";
}
void List::deleteByPos(int pos)
{
    if(!isEmpty())
    {
        if(pos>size)
            cout<<"\nInvalid position.\n\n";
        else
        {
            if(pos==1)
                deleteAtFirst();
            else if(pos==size)
                deleteAtLast();
            else
            {
                for(int i=pos-1;i<size;i++)
                    passenger_id[i] = passenger_id[i+1];
                size--;
                cout<<"\nElement at position "<<pos<<" deleted.\n\n";
            }
        }
    }
    else
        cout<<"\nList is empty.\n\n";
}
void List::display()
{
    if(!isEmpty())
    {
        cout<<"Passenger IDs : ";
        for(int i=0;i<size;i++)
        {
            cout<<passenger_id[i]<<"  ";
        }
        cout<<"\n\n";
    }
    else
        cout<<"\nList is empty.\n\n";
}
void List::searchByPos(int pos)
{
    if(!isEmpty())
    {
        if(pos>size)
            cout<<"\nInvalid position.\n\n";
        else
            cout<<"Value at position "<<pos<<" : "<<passenger_id[pos-1]<<"\n\n";
    }
    else 
        cout<<"\nList is empty.\n\n";
}
void List::searchByEle(int ele)
{
    if(!isEmpty())
    {
        int flag=0;
        for(int i=0;i<size;i++)
        {
            if(passenger_id[i] == ele)
            {
                cout<<"\nElement found at index "<<i<<"\n\n";
                flag=1;
            }
        }
        if(flag==0)
            cout<<"\nElement not found.\n\n";
    }
    else 
        cout<<"\nList is empty.\n\n";
}
void List::empty()
{
    size=0;
    cout<<"\nList emptied.\n\n";
}
bool List::isFull()
{
  if(size==5)
    return true;
  else 
    return false;
}
bool List::isEmpty()
{
  if(size==0)
    return true;
  else 
    return false;
}