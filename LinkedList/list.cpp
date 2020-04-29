#include <cstdlib>
#include  <iostream>

#include "list.hpp"

using namespace std;

list::list(){
head = NULL;
curr = NULL;
temp = NULL;
}

void list::AddNode(int addData){
nodePtr n = new node;
n->next = NULL;
n->data = addData;

if(head != NULL){
curr = head;
while(curr->next != NULL){
curr = curr->next;
}
curr->next = n;
}
else{
head = n ;
}
}


void list::DeleteNode(int delData){

nodePtr delPtr = NULL;
temp = head;
curr = head;
if(head->data == delData){
cout <<  "The Value " << delData << " was deleted\n" ;
curr = curr->next;
head = curr;
delete delPtr;
return ;
}
while ( curr != NULL && curr->data != delData){
temp = curr;
curr = curr->next;
}

if(curr == NULL){
cout << delData << " was not in the list\n";
delete delPtr;
}
else{
delPtr = curr;
curr = curr->next;
temp->next = curr;
delete delPtr;
cout << "The Value " << delData << " was deleted\n" ;
}
}

void list::PrintList(){
curr = head ;
while (curr != NULL){
cout << curr->data << " , " ;
curr = curr->next;
}

cout << endl;
}
