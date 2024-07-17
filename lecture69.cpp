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
int main(){
	Node* root;
	buildTree(root);
	
}
