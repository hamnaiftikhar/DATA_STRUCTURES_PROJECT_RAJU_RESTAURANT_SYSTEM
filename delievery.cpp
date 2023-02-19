#include<iostream>
#include<string.h>
#include<conio.h>
#include<fstream>
#include<windows.h>


using namespace std;




class dist
{
	public:
		int dist;
		string src;
		string dest;
};

class node
{
	public:
		dist d;
		node* left;
		node* right;
	
		node()
		{
			d.dist = 0;
			d.src = "";
			d.dest= "";
			left = NULL;
			right = NULL;
		}
		
		node (int n, string a, string b)
		{
			d.dist = n;
			d.src = a;
			d.dest = b;
			left = NULL;
			right = NULL;
		}
};

class tree
{
	public:
		node* root;
		node *x, *y;
		
		tree()
		{
			root = NULL;
		}
		
		void insert_node (int n, string src , string dest) 
		{
			node* new_node = new node(n, src , dest);
			node *x, *y;
			
			if(root == NULL)
			{
				root = new_node;
			}
			else
			{
				x = y = root;
				
				while(y != NULL)
				{
					x = y;
					
					if(n < x->d.dist)
					{
						y = x->left;
					}
					else
					{
						y = x->right;
					}
				}
				
				if(n < x->d.dist)
				{
					x->left = new_node;
				}
				else
				{
					x->right = new_node;
				}
			}
		}
		
		void pre_order (node* r)
		{
			if(r != NULL)
			{
				cout << r->d.dist << " ";
				cout << r->d.src << endl;
				cout << r->d.dest << endl;
				pre_order(r->left);
				pre_order(r->right);
			}
		}
		
		node* findmin(node* t)
		{
			if(t == NULL)
			{
				return NULL;
			}
			else if (t->right == NULL)
			{
				return t;
			}
			else
			{
				return findmin(t->right);
			}
		}
		
		node* remove(node* tree, int info)
		{
			node* t;
			
			int cmp = info - tree->d.dist;
			
			if(cmp < 0)
			{
				t = remove(tree->left, info);
				tree->left = t;
			}
			else if (cmp > 0)
			{
				t = remove(tree->right, info);
				tree->right = t;
			}
			else if(tree->left != NULL && tree->right != NULL)
			{
				node* minNode;
				
				minNode = findmin(tree->right);
				tree->d.dist = minNode->d.dist;
				t = remove(tree->right, minNode->d.dist);
				t->right = t;
			}
			else
			{
				node* nodetodelete = tree;
				
				if(tree->left == NULL)
				{
					tree = tree->right;
				}
				else if (tree->right == NULL)
				{
					tree = tree->left;
				}
				else
				{
					tree = NULL;
					delete nodetodelete;
				}
				
			}
			
			return tree;
		}
};

