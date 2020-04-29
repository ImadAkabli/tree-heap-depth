// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #define max(a,b) \
//    ({ __typeof__ (a) _a = (a); \
//        __typeof__ (b) _b = (b); \
//      _a > _b ? _a : _b; }) // I looked on Stackoverflow for this possible way to define a max function

// typedef struct nd BST;
 
// struct nd {
//     char *data;
//     BST* left;
//     BST* right;
// };

// int depth(BST *t) {
// 	if(t == NULL) return 0;
// return max(depth(t->left), depth(t->right)) +1;
// }


// BST *insert(BST *root, char* walker) {
//   if(root == NULL) {
//       // Allocate Memory for the first tree node
//       root = (BST *) malloc(sizeof(BST));
//       root->data = malloc(strlen(walker)+1);
//       strcpy(root->data, walker);
//       root->left = root->right = NULL;
    
//       return root;
//   } 
//   else {
//     int compare = strcmp(root->data, walker);
//     if(compare > 0) {
//       root->left = insert(root->left, walker);
//     } else if(compare < 0) {
//       root->right = insert(root->right, walker);
//     }
//     return root;
//   }
// }

// int main()
// {
//     int i = 0, m = 0, length, wordcount = 0;
//     BST *node = NULL;
//     char text[] = {"Get who uncommonly our expression ten increasing considered occasional travelling. Ever read tell year give may men call its. Piqued son turned fat income played end wicket. To do noisy downs round an happy books"};
//     length = strlen(text);
//     char walker[20];
//     for(i = 0; i < length; i++) {
//       if(text[i] != '\n' && text[i] != ' '){
//         walker[m++] = text[i];
//       } else {
//         walker[m] = '\0';
//         wordcount++;
//         node = insert(node, walker);
//         m = 0;
//       }
//     }  
//     walker[m] = '\0'; 
//     node = insert(node, walker); 
    
//     printf("The number of words is %d\n", wordcount);
//     printf("Hight of tree is %d\n", depth(node));
//     return 0;
// }