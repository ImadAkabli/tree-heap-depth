#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max(a,b) \
   ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a > _b ? _a : _b; }) // I looked on Stackoverflow for this possible way to define a max function

const int tree_array_size = 20;
int heap_size;
const int INF = 100000;

typedef struct word HEAP;

struct word {
  char words[10];
  HEAP *right;
  HEAP *left;
};

int depth(HEAP *t) {
	if(t == NULL) return 0;
return max(depth(t->left), depth(t->right)) +1;
}


void swap( HEAP *a, HEAP *b ) {
  HEAP t;
  t = *a;
  *a = *b;
  *b = t;
}

//function to get right child of a node of a tree
int get_right_child(HEAP A[], int index) {
  if((((2*index)+1) < tree_array_size) && (index >= 1))
    return (2*index)+1;
  return -1;
}

//function to get left child of a node of a tree
int get_left_child(HEAP A[], int index) {
    if(((2*index) < tree_array_size) && (index >= 1))
        return 2*index;
    return -1;
}

//function to get the parent of a node of a tree
int get_parent(HEAP A[], int index) {
  if ((index > 1) && (index < tree_array_size)) {
    return index/2;
  }
  return -1;
}

void heapify(HEAP A[], int index) {
  int left_child_index = get_left_child(A, index);
  int right_child_index = get_right_child(A, index);

  // finding largest among index, left child and right child
  int largest = index;
  int compare = strcmp(A[left_child_index].words, A[largest].words);

  if ((left_child_index <= heap_size) && (left_child_index>0)) {
    if (compare > 0) {
      largest = left_child_index;
    }
  }

  if ((right_child_index <= heap_size && (right_child_index>0))) {
    if (compare > 0) {
      largest = right_child_index;
    }
  }

  // largest is not the node, node is not a heap
  if (largest != index) {
    swap(&A[index], &A[largest]);
    heapify(A, largest);
  }
}

void str_heap(HEAP A[]) {
  int i;
  for(i=heap_size/2; i>=1; i--) {
    heapify(A, i);
  }
}

void print_heap(HEAP A[], int count) {
  int i;
  for(i=1; i<=count; i++) {
    printf("%s\n",A[i].words);
  }
  printf("\n");
}

int main()
{
    int i = 0, m = 0, j = 1, length;
    char walker[20];
    HEAP str[tree_array_size];
    str->left = NULL;
    str->right = NULL;

    char text[] = {"imad is the best in the world"};
    length = strlen(text);
    for(i = 0; i < length; i++) {
      if(text[i] != '\n' && text[i] != ' '){
        walker[m++] = text[i];
      } else {
        walker[m] = '\0';
        printf("%s\n", walker);
        strcpy(str[j].words, walker);
        // printf("%s %d %d\n\n", str[j].words, i, j);
        m = 0;
        j++;
      }
    }  
    walker[m] = '\0'; 
    printf("%s\n", walker);
    strcpy(str[j].words, walker);
    // printf("%s %d %d\n\n", str[j].words, i, j);
    heap_size = j;
    str_heap(str);
    // print_heap(str, j);

    printf("Hight of tree is %d\n", depth(str));
    
    return 0;
}