#include <iostream>
using namespace std;


class Node{
public:
    int data;
    Node* next;

    Node(int value):data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList():head(nullptr){}

    void insertatbeginning(int value){
        Node* newNode = new Node(value);
        newNode -> next = head;
        head = newNode;
    }

    void display(){
        Node* current = head;
        while(current!=nullptr){
            cout<< current->data << "->";
            current=current->next;
        }
        cout<<"nullptr"<<endl;
    }

    
};


int main(){
    LinkedList LL;

    LL.insertatbeginning(5);
    LL.insertatbeginning(4);
    LL.insertatbeginning(3);
    LL.insertatbeginning(2);
    LL.insertatbeginning(1);
    LL.display();

    return 0;
}