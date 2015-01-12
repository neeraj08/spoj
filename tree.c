#include<stdio.h>
struct tree{int data;struct tree *left,*right;}root;
struct tree *stree(struct tree *root,struct tree *r, int data) //func() begins
{
if(r==NULL)
{
	if((r=(struct tree *)malloc(sizeof(struct tree)))==NULL)
	{
		printf("OUT OF MEMORY\n");
		exit(0);
	}

	r->right=NULL;
	r->left=NULL;
	r->data=data;
	if(root==NULL)
		return r;	//first entry
	if(data<root->data)
		root->left=r;
		else
			root->right=r;
	return r;

