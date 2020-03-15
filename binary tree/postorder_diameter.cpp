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
int height(node *root)
{

if(root==NULL)
{
	return 0;
}

int a=1+height(root->left);
int b=1+height(root->right);

return max(a,b);

}

int diameter(node * root)
{
if(root==NULL)
{
	return 0;
}

int l1=height(root->left);
int l2=height(root->right);

int opt1=l1+l2;
int opt2=diameter(root->left);
int opt3=diameter(root->right);


return max(opt1,max(opt2,opt3));

}
class Pair{
public:
	int height;
	int diameter;
};

Pair fastDiameter(node * root)
{
Pair p;
if(root==NULL)
{
	p.diameter=p.height=0;
	return p;
}
Pair left=fastDiameter(root->left);
Pair right=fastDiameter(root->right);

p.height=max(left.height,right.height)+1;
p.diameter=max(left.height+right.height,max(left.diameter,right.diameter));
return p;

}




int main()
{
	  node *root=buildtree();
      //cout<<"diameter:"<<diameter(root)<<endl;
	  Pair p=fastDiameter(root);
	  cout<<p.height<<endl;
	  cout<<p.diameter<<endl;
	return 0;
}