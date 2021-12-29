#include <bits/stdc++.h> 
using namespace std; 

struct TreapNode 
{ 
	int key, priority; 
	TreapNode *left, *right; 
}; 

TreapNode *rightRotate(TreapNode *y) 
{ 
	TreapNode *x = y->left, *T2 = x->right; 

	// Perform rotation 
	x->right = y; 
	y->left = T2; 

	// Return new root 
	return x; 
} 
TreapNode *leftRotate(TreapNode *x) 
{ 
	TreapNode *y = x->right, *T2 = y->left; 

	// Perform rotation 
	y->left = x; 
	x->right = T2; 

	// Return new root 
	return y; 
} 
TreapNode* newNode(int key) 
{ 
	TreapNode* temp = new TreapNode; 
	temp->key = key; 
	temp->priority = rand()%100; 
	temp->left = temp->right = NULL; 
	return temp; 
} 

TreapNode* insert(TreapNode* root, int key) 
{ 
	// If root is NULL, create a new node and return it 
	if (!root) 
		return newNode(key); 

	// If key is smaller than root 
	if (key <= root->key) 
	{ 
		// Insert in left subtree 
		root->left = insert(root->left, key); 

		// Fix Heap property if it is violated 
		if (root->left->priority > root->priority) 
			root = rightRotate(root); 
	} 
	else // If key is greater 
	{ 
		// Insert in right subtree 
		root->right = insert(root->right, key); 

		// Fix Heap property if it is violated 
		if (root->right->priority > root->priority) 
			root = leftRotate(root); 
	} 
	return root; 
} 

TreapNode* deleteNode(TreapNode* root, int key) 
{ 
	if (root == NULL) 
		return root; 
    // IF KEY IS NOT AT ROOT
	if (key < root->key) 
		root->left = deleteNode(root->left, key); 
	else if (key > root->key) 
		root->right = deleteNode(root->right, key); 

	// IF KEY IS AT ROOT 

	// If left is NULL 
	else if (root->left == NULL) 
	{ 
		TreapNode *temp = root->right; 
		delete(root); 
		root = temp; // Make right child as root 
	} 

	// If Right is NULL 
	else if (root->right == NULL) 
	{ 
		TreapNode *temp = root->left; 
		delete(root); 
		root = temp; // Make left child as root 
	} 

	// If key is at root and both left and right are not NULL 
	else if (root->left->priority < root->right->priority) 
	{ 
		root = leftRotate(root); 
		root->left = deleteNode(root->left, key); 
	} 
	else
	{ 
		root = rightRotate(root); 
		root->right = deleteNode(root->right, key); 
	} 

	return root; 
} 

void print(TreapNode* root) 
{ 
	if (root) 
	{ 
		print(root->left); 
		cout << "key: "<< root->key << " | priority: "
			<< root->priority; 
		if (root->left) 
			cout << " | left child: " << root->left->key; 
		if (root->right) 
			cout << " | right child: " << root->right->key; 
		cout << endl; 
		print(root->right); 
	} 
}  
int main() 
{ 
	srand(time(NULL)); 
	struct TreapNode *root = NULL; 
	root = insert(root, 50); 
	root = insert(root, 30); 
	root = insert(root, 20); 
	root = insert(root, 40); 
	root = insert(root, 70); 
	root = insert(root, 60); 
	root = insert(root, 80); 

	cout << "Cay luc dau` : \n"; 
	print(root); 

	cout << "\nDelete 20\n"; 
	root = deleteNode(root, 20); 
	cout << "Cay sau khi xoa node co key = 20 \n"; 
	print(root); 

	cout << "\nDelete 30\n"; 
	root = deleteNode(root, 30); 
	cout << "Cay sau khi xoa node co key = 30 \n"; 
	print(root); 

	return 0; 
} 

