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

// Inserts  a
void TreeInsert(Tree t, Time time) {
    t->root = doInsert(t->root, time);
}





