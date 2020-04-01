#include<iostream>
using namespace std;
class node
{
public:
 int data;
 node *left;
 node *right;
	 
	 node(int x)
	  {
		 data=x;
		 left=NULL;
		 right=NULL;
	  }

};

node * buildtree()
{
 
 int d;
 cin>>d;
 if(d==-1)
 {
 	return NULL;
 }

 node *root=new node(d);
 root->left=buildtree();
root->right=buildtree();

return root;

}


int sumofnode(node *root)
{
	if(root==NULL)
	{
		return 0;
	}
    
    if(root->left==NULL && root->right==NULL)
    {
    	return root->data;
    }

    int leftsum=sumofnode(root->left);
    int rightsum=sumofnode(root->right);
    
    int temp=root->data;
    root->data=leftsum+rightsum;
    return temp + root->data;

}

void printnode(node *root)
{
  if(root==NULL)
  {
  	return;
  }

printnode(root->left);
cout<<root->data<<",";
printnode(root->right);

}


int main()
{
	  node *root=buildtree();
       sumofnode(root);
      printnode(root);
      return 0;
}