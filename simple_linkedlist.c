#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *next;
};

int main() {
  typedef struct node DATA_NODE;

  DATA_NODE *head_node, *first_node, *temp_node = 0;
  int count = 0;
  int loop = 1;
  first_node = 0;
  int data;

  printf("Singly(Single) Linked List Example - Basic\n");

  while (loop) {
 printf("\nEnter Element for Insert Linked List (-1 to Exit ) : \n");
    scanf("%d", &data);

    if (data >= 0) {

      temp_node = (DATA_NODE *) malloc(sizeof (DATA_NODE));

      temp_node->value = data;

      if (first_node == 0) {
        first_node = temp_node;
      } else {
        head_node->next = temp_node;
      }
      head_node = temp_node;
      fflush(stdin);
    } else {
      loop = 0;
      temp_node->next = 0;
    }
  }
   temp_node = first_node;
  printf("\nDisplay Linked List : \n");
  while (temp_node != 0) {
    printf("# %d # ", temp_node->value);
    count++;
    temp_node = temp_node -> next;
  }

  printf("\nNo Of Items In Linked List : %d", count);

  return 0;
  
}
