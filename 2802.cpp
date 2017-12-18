#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int n,num=0;

struct node{
	int data;
	node *lchild,*rchild;
};

void insert(node* &root,int data){
	if(root==NULL){
		root=new node;
		root->data=data;
		root->lchild=NULL;
		root->rchild=NULL;
		return; 
	}
	if(data<root->data) insert(root->lchild,data);
	else insert(root->rchild,data);
}

bool equal(node *root1,node *root2)
{
	if(root1==NULL&&root2!=NULL) return false;
	if(root1!=NULL&&root2==NULL) return false;
	if(root1==NULL&&root2==NULL) return true;
	if(root1->data!=root2->data) return false;
	if(equal(root1->lchild,root2->lchild)==false) return false;
	if(equal(root1->rchild,root2->rchild)==false) return false;
	return true;
}

void postorder(node* root)
{
	if(root){
		postorder(root->lchild);
		postorder(root->rchild);
		printf("%d",root->data);
		num++;
		if(num<n) printf(" ");
		else printf("\n");
	}
}

void level(node* root)
{
	queue<node*>q;
	q.push(root);
	while(!q.empty()){
		node *p=q.front();
		q.pop();
		num++;
		printf("%d",p->data);
		if(num<n) printf(" ");
		else printf("\n");
		if(p->lchild) q.push(p->lchild);
		if(p->rchild) q.push(p->rchild);
	}
}


int main() {
	scanf("%d",&n);
	node *root1=NULL,*root2=NULL;
	for(int i=0;i<n;i++){
		int data;
		scanf("%d",&data);
		insert(root1,data);
	}
	for(int i=0;i<n;i++){
		int data;
		scanf("%d",&data);
		insert(root2,data);
	}
	if(equal(root1,root2)) printf("YES\n");
	else printf("NO\n");
	postorder(root1);
	num=0;
	level(root1);
	
	
	return 0;
	
}

