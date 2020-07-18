// Inerface to the AVL tree ADT
#ifndef TREE_H
#define TREE_H

#include "Postcode.h"

typedef struct tree *Tree;
typedef struct node *Node;

// Creates a new empty tree
Tree TreeNew(void);

// Frees the tree
void TreeFree(Tree t);

// Insert an Ad into the tree
void TreeInsert(Tree t, Ad a);

// special function that returns the Postcode in the node
Postcode getPostcodeFromNode(Node n);

// check whether a postcode value is in a Tree — not written yet
int TreeFind (Tree t, int postcode);

#endif
