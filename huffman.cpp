#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>

using namespace std;

// create linked list for nodes
// struct Node {
// 	char character;
// 	int frequency;
// 	Node *left, *right;
// };

class Node {
	public:
		char character;
		int frequency;
		Node* left;
		Node* right;
		Node* getNode(Node* left, Node* right, char character, int frequency) {}
};

// remove function because already implement in the class
// creating new tree nodes
Node::Node* getNode(Node* left, Node* right, char character, int frequency) {
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

// ----- ENCODING STEP -----
// traverse tree and encode the characters
// store respective Huffman codes in a map
void encode(Node* root, string encodedString, unordered_map<char, string>& huffmanTree) {
	// return when pointer reaches beyond terminal leaf
	if (root == nullptr) return;

	// assign coding to character in map once pointer reaches terminal leaf
	if (!(root->left || root->right)) {
		huffmanTree[root->character] = encodedString;
	}

	// left branch is labelled as 0
	// right branch is labelled as 1
	encode(root->left, encodedString + "0", huffmanTree);
	encode(root->right, encodedString + "1", huffmanTree);
}

// ----- DECODING STEP -----
void decode(Node* root, string encodedString, int& index) {
	// return when pointer reaches beyond terminal leaf
	if (root == nullptr) return;

	// if pointer reaches terminal node, print character and return
	if (!(root->left || root->right)) {
		cout << root->character;
		return;
	}

	// if 0 is encountered in traversal, decode along left branches
	if (encodedString[index] == '0')
		decode (root->left, encodedString, index);
	else	// decode along right branches
		decode (root->right, encodedString, index);
}

// function to generate Huffman Tree
void generateTree(string inputText) {
	// create map to store frequency of each character
	unordered_map <char, int> frequencyMap;
	for (char character : inputText) {
		frequencyMap[character]++;
	}
}

int main() {
	
	return 0;
}