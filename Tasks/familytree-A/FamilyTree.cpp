#include "FamilyTree.hpp"
#include <iostream>
#include <string.h>
#include <string>
#include <exception>

using namespace std;

namespace family{

	node::node(string name){
		this->data = name;
		this->left = NULL;
		this->right = NULL;
	}

	Tree::Tree(string name){
		this->root = new node(name);
	}

	string Tree::find(string a){
		return "find";
	}

	string Tree::relation(string a){
		return "rr";
	}

	string Tree::remove(string a){
		return "removed";
	}

	void Tree::display(){
		cout << "display" << endl;
	}

	Tree Tree::addFather(string a , string b){
		return *this;
	}

	Tree Tree::addMother(string a , string b){
		return *this;
	}


}
