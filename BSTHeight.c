// #include<stdio.h>
// #include<stdlib.h>
// #define max(a,b) \
//    ({ __typeof__ (a) _a = (a); \
//        __typeof__ (b) _b = (b); \
//      _a > _b ? _a : _b; }) // I looked on Stackoverflow for this possible way to define a max function

// typedef struct nd BST;
 
// struct nd {
//     int data;
//     BST* left;
//     BST* right;
// };

// int depth(BST *t) {
// 	if(t == NULL) return 0;
// return max(depth(t->left), depth(t->right)) +1;
// }


// BST *insert(BST *root) {
//     if(root == NULL) {
//         // Allocate Memory for the first tree node
//         root = (BST *) malloc(sizeof(BST));
//         root->left = root->right = NULL;
//         root->data =  rand() % 10000;
      
//         return root;
//     } 
//     else {
//       int num = rand() % 10000;
//       if(num < root->data) {
//         root->left = insert(root->left);
//       } else if(num >= root->data) {
//         root->right = insert(root->right);
//       }
//       return root;
//     }
// }
// int main()
// {
//     int i;
//     BST *node = NULL;
//     for(i = 0; i < 11; i++) {
//       node = insert(node);
//     }
    
//     printf("Hight of tree is %d\n", depth(node));
//     return 0;
// }