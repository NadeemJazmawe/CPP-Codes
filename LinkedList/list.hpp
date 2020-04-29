//#ifndef LIST_HPP
//#define LIST_HPP

class list{

private:

typedef struct node{
	int data;
	node* next;
} * nodePtr;


nodePtr head;
nodePtr curr;
nodePtr temp;


public:

list();
void AddNode(int addData);
void DeleteNode(int delData);
void PrintList();


};

