#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int value):data(value), next(nullptr){}
};

class LinkedList{
private:
    Node* head;

public:
    LinkedList():head(nullptr){};

    
};

int main(){
    return 0;
}