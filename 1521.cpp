/*#include <iostream>
#include <fstream>
using namespace std;

struct Node
{
	int num;
	Node* prev;
};



int main() {
	int n, k;
	cin >> n >> k;

	Node* root = new Node;
	root->num = n;
	root->prev = nullptr;

	Node* pr = new Node;
	pr->num = n-1;
	pr->prev = nullptr;

	root->prev = pr;

	for (int i = 3; i <= n; ++i) {
		if (i == n) {
			Node* first = new Node;
			first->num = 1;
			first->prev = nullptr;

			pr->prev = first;
			first->prev = root;
			
			break;
		}
		Node* cur = new Node;
		cur->num = n -i;
		cur->prev = nullptr;

		pr->prev = cur;
		pr = cur;

	}
	int count = 1;
	while (root != nullptr) {
		if (count == k) {
			cout << root->num << " ";
			root->prev = root->prev->prev;
			count = 1;
			if (root == root->prev) break;
		}
		root = root->prev;
		count++;
	}
	
	return 0;
}*/