#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>

using namespace std;

// create linked list for nodes
struct Node {
	char character;
	int frequency;
	Node *left, *right;
};

// creating new tree nodes
Node* getNode(Node* left, Node* right, char character, int frequency) {
	Node* node = new Node();
	node->character = character;
	node->frequency = frequency;
	node->left = left;
	node->right = right;

	return node;
}

// create minimum STL priority queue of node structure type
// structure will be used in ordering the heap
struct compare {  
	bool operator()(Node* l, Node* r) {
		return l->frequency > r->frequency;
	}
};

int main() {
	
	return 0;
}