#include<iostream>
#include<queue>
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

void bfs(node *root)
{
  queue<node*> q;  
  q.push(root);

  while(!q.empty())
  {
    node* temp=q.front();
    cout<<temp->data<<" ";
    q.pop();
    if(temp->left){
     q.push(temp->left);
    }
   
    if(temp->right){
      q.push(temp->left);
    }
  }

  return;

}


int main()
{

  node *root=buildtree();

   //printalllevel(root);
   bfs(root); 
	return 0;

}