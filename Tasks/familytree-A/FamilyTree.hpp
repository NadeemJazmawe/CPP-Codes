#ifndef FAMILYTREE_H
#define FAMILYTREE_H

#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;


namespace family{

	class node{
	public:
		string data;
		node *left;
		node *right;
		node(string);
	};

	class Tree{
	public:
		node *root;

		Tree(string);
		string find(string);
		string relation(string);
		string remove(string);
		void display();

		Tree addFather(string,string);
  		Tree addMother(string,string);


	};
}


#endif
