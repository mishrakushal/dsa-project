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

int main() {
	
	return 0;
}