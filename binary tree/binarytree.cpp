#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *left;
	node *right;

	node(int d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}
};
   node * buildtree()
   {
   	int d;
   	cin>>d;
   	if(d==-1){
   		return NULL;
   	}

   	node *root=new node(d);
   	root->left=buildtree();
   	root->right=buildtree();
   	return root;

   }

   void preorder(node *root)
   {
   	if(root==NULL)
   		{return;}

   	cout<<root->data<<" ";
   	preorder(root->left);
   	preorder(root->right);

   }


   void inorder(node *root)
   {
   	if(root==NULL)
   		{return;}

   	
   	inorder(root->left);
   	cout<<root->data<<" ";
   	inorder(root->right);

   }
  

   void postorder(node *root)
   {
   	if(root==NULL)
   		{return;}

   	
   	postorder(root->left);
   	postorder(root->right);
    cout<<root->data<<" ";
   }

int height(node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	int ls=height(root->left);
	int rs=height(root->right);

	return max(ls,rs)+1;

}

void printkthlevel(node *root,int k)
{
	if(root==NULL)
	{
		return;
	}
	if(k==1)
	{
		cout<<root->data<<" ";
		return;
	}

	printkthlevel(root->left,k-1);
	printkthlevel(root->right,k-1);

  return;
}

void printalllevel(node *root)
{
	int H=height(root);

	for (int i = 1; i <= H; ++i)
	{
		printkthlevel(root,i);
		cout<<endl;

	}
	return;
}

int main()
{

  node *root=buildtree();

 /* cout<<" Preorder:";
  preorder(root);
  cout<<endl<<" Inorder:";
  inorder(root);
  cout<<endl<<"Postorder:";
  postorder(root);
  cout<<endl<<"height:"<<height(root) ;
 */

  //  printkthlevel(root,3);
   
   //o(n2) method 
   printalllevel(root);
	return 0;

}