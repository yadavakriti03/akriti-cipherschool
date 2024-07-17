#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* left;
	Node* right;
	
	
	Node(int data){
		
		this->data=data;
		this->left=NULL;
		this->right=NULL;
	}
};
void buildTree(Node* root){
	int var;
	cout<<"enter the root node value";
	cin>>var;
	Node* temp=new Node(var);
	if(var==-1) return;
	root= new Node(var);
	cout<<"enter the data which you want to be to the left of  "<<var<<" ";
	buildTree(root->left);
	cout<<"enter the data which you want to be to the left of "<<var<<" ";
	
	buildTree(root->right);
}

void printpreordertraversal(Node* root){
	cout<<root->data<<" ";
	printpreordertraversal(root->left);
	printpreordertraversal(root->right);
}
void printinordertraversal(Node* root){
	if(root==NULL) return;
	printinordertraversal(root->left);
	cout<<root->data<<" ";
	printinordertraversal(root->right);
	
}

void printpostordertraversal(Node* root){
	if(root==NULL) return;
	printpostordertraversal(root->left);

	printpostordertraversal(root->right);
	
	cout<<root->data<<" ";
	
}
int main(){
	Node* root=NULL;
	buildTree(root);
	printpreordertraversal(root);
	printinordertraversal(root);
	printpostordertraversal(root);
	return 0;
	
}
