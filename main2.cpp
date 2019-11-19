#include <iostream>
#include <fstream>
#include "BST312.h"

using namespace std;

template <typename T>
void print(vector<T> vec){
    for(int i = 0 ; i < vec.size() ; i++){
        cout << vec[i] << endl;;
    }
}

int main() {

    ifstream inFile;
    inFile.open("test2.txt");

    BST_312<int> bst;
   
    int s;
    inFile >> s;
    while (inFile) {;
        cout << "inserting ... " << s << endl;
        bst.insertItem(s);
        inFile >> s;
    }

    cout << "postorder traversal is " << endl;
    print(bst.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(bst.inOrderTraversal());
    cout << endl;

	cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bst.countNodes() << endl;
    
	s = 6;
    cout << "trying to delete " << s << endl;
	bst.deleteItem(s);
	s = 7;
    cout << "trying to delete " << s << endl;
	bst.deleteItem(s);
	s = 99;
    cout << "trying to delete " << s << endl;
	bst.deleteItem(s);
	s = 12;
    cout << "trying to delete " << s << endl;
	bst.deleteItem(s);
    print(bst.inOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << bst.countNodes() << endl;
    cout << endl;
	
	s = 1;	
	cout << s << " is in the bst: " << bst.isItemInTree(s) << endl;
	s = 12;	
	cout << s << " is in the bst: " << bst.isItemInTree(s) << endl;
	s = 99;	
	cout << s << " is in the bst: " << bst.isItemInTree(s) << endl;
	s = 2;	
	cout << s << " is in the bst: " << bst.isItemInTree(s) << endl;
	bst.makeEmpty();
	cout << "number of nodes in tree after makeEmpty is " << bst.countNodes() << endl;	
	

}
