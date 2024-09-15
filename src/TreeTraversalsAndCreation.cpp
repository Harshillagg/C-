#include <iostream>
#include<queue>
using namespace std;

class Node{
  public:
	int data;
	Node* left;
	Node* right;

	Node(int val) {
	  this->data = val;
	  left = NULL;
	  right = NULL;
	}
};

Node* createTree() {
  //cout << "Enter the value for Node" << endl;
  int value;
  cin >> value;

  if(value == -1) {
	return NULL;
  }
  else {
	//valid value 
	Node* root = new Node(value);
	//cout << "adding left child for " << value << endl;
	root->left = createTree();
	//cout << "adding right child for " << value << endl;
	root->right = createTree();
	return root;
  }

}

void preOrderTraversal(Node* root) {
	if(root == NULL) {
		return;
	}
	cout << root->data << " ";
	//L ->left subtree
	preOrderTraversal(root->left);
	//R->right subtree
	preOrderTraversal(root->right);
}

void inOrderTraversal(Node* root) {
	if(root == NULL) {
		return;
	}
	inOrderTraversal(root->left);

	cout << root->data << " ";
	
	inOrderTraversal(root->right);
}

void postOrderTraversal(Node* root) {
	if(root == NULL) {
		return ;
	}
	//L
	postOrderTraversal(root->left);
	//R
	postOrderTraversal(root->right);
	//N
	cout << root->data << " ";
}

void levelOrderTraversal(Node* root) {
	if(root == NULL) {
		return ;
	}
	queue<Node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()) {
		Node* front = q.front();
		q.pop();
		if(front == NULL) {
			cout << endl;
			if(!q.empty()) {
				q.push(NULL);
			}
		}
		else {
			cout << front->data << " ";
			if(front->left != NULL) {
				q.push(front->left);
			}
			if(front->right != NULL) {
				q.push(front->right);
			}	
		}
	
	}
}

int main() {
	Node* root;
	root = createTree();
	levelOrderTraversal(root);


  return 0;
}