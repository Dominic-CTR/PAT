#include<cstdio>
#include<queue>
#include <iostream>
using namespace std;

int t1[31],t1l[31],t2[31],t2l[31];
int n;
queue<int> q;
struct node{
	int data;
	node *lchild,*rchild;
};

void insert(node* &root,int data){
	if(root == NULL){
		root = new node;
		root->data = data;
		root->lchild = NULL;
		root->rchild = NULL;
	}
	else if(data < root->data) insert(root->lchild,data);
	else insert(root->rchild,data);
}

void postorder(node* root){
	if(root){
		postorder(root->lchild);
		postorder(root->rchild);
		q.push(root->data); 
	}
}


int main(){
	node *root1=NULL,*root2=NULL;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		int data;
		scanf("%d", &data);
		insert(root1, data);
	}
	for(int i = 0; i < n; i++){
		int data;
		scanf("%d", &data);
		insert(root2, data);
	}
	postorder(root1);
	for(int i = 0; i < n; i++){
		printf("%d",q.front());
		//t1[i] = q.front();
		q.pop();
		if(i != n -1) printf(" ");
		else printf("\n");
	}
	return 0;
}
