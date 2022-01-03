#include "list_header.h"
int main()
{
    List l;
    int ch;
    int e,p;
    do
    {
        cout<<"\t==========MENU==========\n";
        cout<<"\t1.Insert at first\n";
        cout<<"\t2.Insert at last\n";
        cout<<"\t3.Insert by position\n";
        cout<<"\t4.Delete at first\n";
        cout<<"\t5.Delete at last\n";
        cout<<"\t6.Delete by position\n";
        cout<<"\t7.Display\n";
        cout<<"\t8.Search by Position\n";
        cout<<"\t9.Search by Element\n";
        cout<<"\t10.Empty\n";
        cout<<"\t11.Exit\n";
        cout<<"\t========================\n";
        cout<<"\nEnter your choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter the element to be inserted : ";
                cin>>e;
                l.insertAtFirst(e);
                break;
            case 2:
                cout<<"Enter the element to be inserted : ";
                cin>>e;
                l.insertAtLast(e);
                break;
            case 3:
                cout<<"Enter the position : ";
                cin>>p;
                cout<<"Enter the element to be inserted : ";
                cin>>e;
                l.insertByPos(e,p);
                break;
            case 4:
                l.deleteAtFirst();
                break;
            case 5:
                l.deleteAtLast();
                break;
            case 6:
                cout<<"Enter the position : ";
                cin>>p;
                l.deleteByPos(p);
                break;
            case 7:
                l.display();
                break;
            case 8:
                cout<<"Enter the position : ";
                cin>>p;
                l.searchByPos(p);
                break;
            case 9:
                cout<<"Enter the element to be searched : ";
                cin>>e;
                l.searchByEle(e);
                break;
            case 10:
                l.empty();
                break;
            case 11:
                exit(0);
                break;
            default:
                cout<<"\nInvalid Choice.\n\n";
                break;
        }
    }while(ch!=11);
    return 0;
}