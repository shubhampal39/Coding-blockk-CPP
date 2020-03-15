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

class  Pair{

    public:
    int height;
    bool balance=true;
};

Pair isHeightBalance(node *root)
{
  Pair p;
  if(root==NULL)
  {
    p.height=0;
    p.balance=true;
    return p;
  }

  Pair left=isHeightBalance(root->left);
  Pair right=isHeightBalance(root->right);

  p.height=max(left.height,right.height)+1;

  if(abs(left.height-right.height)<=1 && left.balance && right.balance)
  {
    p.balance=true; 
  }  
  else
  {
    p.balance=false;
  }

  return p;
}

int main()
{

  node *root=buildtree();
 
  if(isHeightBalance(root).balance)

{ cout<<"balnce";
  }
  else
  {
    cout<<"Not balance";
  }
	return 0;
}
