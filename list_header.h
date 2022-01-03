#include<iostream>
#include <cstdlib>
using namespace std;
class List
{
    int passenger_id[5],size;
    public:
    List()
    {
        size = 0;
    }
    void insertAtFirst(int element);
    void insertAtLast(int element);
    void insertByPos(int element,int pos);
    void deleteAtFirst();
    void deleteAtLast();
    void deleteByPos(int pos);
    void display();
    void searchByPos(int pos);
    void searchByEle(int ele);
    void empty();
    bool isFull();
    bool isEmpty();
};