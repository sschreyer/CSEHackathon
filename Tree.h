// Inerface to the AVL tree ADT

typedef struct tree *Tree;

// Creates a new empty tree
Tree TreeNew(void) {
   Tree t = malloc(sizeof(*t));
   assert(t != NULL);
   t->root = NULL;
   return t;
}

// Frees the tree
void TreeFree(Tree t) {
   doFree(t->root);
   free(t);
}

// Insert an Ad into the tree
void TreeInsert(Tree t, Ad a, int postcode) {
    t->root = doInsert(t->root, ad);
}





// check whether a postcode value is in a Tree — not written yet
//int TreeFind (BSTree t, int postcode)
