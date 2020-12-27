#include <iostream>

using namespace std;

//given a binary tree determine if cousins of the tree

struct node
{
    int value;
    node *left;
    node *right;
};

void determineCousins(node *tree, node *n);
node *determineParent(node *tree, node *n);

int main()
{
    cout<< "The cousins of the following node are: "<<endl;
   // determineCousin(tree, node); //based on the tree the user gives and node
}

void determineCousins(node *tree, node *n)
{
    node *parent = determineParent(tree, n);
    node *grandpa = determineParent(tree,  parent);
    node *parent_Sib;

    if(grandpa->left == parent) parent_Sib = grandpa->right;
    if(grandpa->right == parent) parent_Sib = grandpa->left;

    if(parent_Sib == nullptr)cout<<"No Cousins!"<<endl;
    
    //display siblings
    if(parent_Sib->left == nullptr && parent_Sib->right == nullptr)cout<<"No Cousins!"<<endl;
    if(!(parent_Sib->left == nullptr)) cout<<parent_Sib->left->value<<" ";
    if(!(parent_Sib->right == nullptr)) cout<<parent_Sib->right->value<<" ";
}

node *determineParent(node *tree, node *child)
{
    if (tree->value == child->value)
        return nullptr; //no parent
    if (tree == nullptr)
        return nullptr;
    if (tree->left == child)
        return tree->left;
    if (tree->right == child)
        return tree->right;

    node *left = determineParent(tree->left, child);
    node *right = determineParent(tree->right, child);
    if (left != nullptr)
        return left;
    else if (right != nullptr)
        return right;
    else
        return nullptr;
}