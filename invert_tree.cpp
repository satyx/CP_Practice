#include<bits/stdc++.h>
using namespace std;

struct Node
{
    struct Node *left, *right;
    int val;
    Node(int v)
    {
        this->val = v;
        this->left = NULL;
        this->right = NULL;
    }
};

/*struct Node 
{ 
    int data; 
    struct Node* left, *right; 
    Node(int data) 
    { 
        this->data = data; 
        left = right = NULL; 
    } 
};*/

Node* addNode(Node *nd,int v)
{
    if(nd==NULL)
    {
        nd = new Node(v);
        return nd;
    }
    if(nd->val>v)
    {
        nd->left = addNode(nd->left,v);
    }
    if(nd->val<=v)
    {
        nd->right = addNode(nd->right,v);
    }
    return nd;

}

void display(Node *nd)
{
    if(nd==NULL)
        return;
    display(nd->left);
    cout<<nd->val<<" ";
    display(nd->right);
}
void invert(Node *nd)
{
    if(nd==NULL)
        return;
    Node *temp = nd->left;
    nd->left = nd->right;
    nd->right = temp;
    invert(nd->left);
    invert(nd->right);
}

int main()
{
    Node *root=NULL;
    int n;
    cin>>n;
    srand(time(0));
    for (int i = 0; i < n; ++i)
    {
        root = addNode(root,rand()%100);
    }
    display(root);
    cout<<endl;
    invert(root);
    display(root);
    cout<<endl;
    
}