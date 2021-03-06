#include <iostream>
using namespace std;

struct node{
    int val;
    node * next;
};

void printList(node * head){
    while(head){
        cout << head->val << " ";
        head = head->next;
    }
}

node *createList(int arr[], int size){
    node * ret = new node;
    ret->val = arr[0];
    node * temp = ret;
    for(int i = 1; i < size; i ++){
        temp->next = new node;
        temp = temp->next;
        temp->val = arr[i];
    }
    temp->next = NULL;
    return ret;
}

void sortList(node ** head){
    node * h = *head;
    int ones = 0;
    int threes = 0;
    int fives = 0;

    while(h != NULL){
        if(h->val == 1) ones++;
        else if(h->val == 3) threes++;
        else fives++;
        h = h->next;
    }

    h = *head;
    while(h != NULL){
        if(ones){
           h->val = 1;
           ones--;
        }
        else if(threes){
            h->val = 3;
            threes--;
        }
        else h->val = 5;
        h = h->next;
    }
}

int main(){
    int arr[6] = {1, 3, 3, 5, 1, 5};
    node * n = createList(arr, 6);
    printList(n);
    cout << endl;
    sortList(&n);
    printList(n);
    return 0;
}
