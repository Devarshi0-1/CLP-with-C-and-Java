// Question 1(A) ***********************************************

// #include <stdio.h>
// int main()
// {
//     int a[] = {11, 12, 13, 14, 15};
//     int *ptr;
//     ptr = a;
//     printf("%d", *(ptr + 3));
//     return 0;
// }

// Question 1(E) ***********************************************

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Node
// {
//     int data;
//     struct Node *next;
// } Node;

// float SumOfLinkedListItems(Node *ptr)
// {
//     float sum = 0;
//     while (ptr != NULL)
//     {
//         sum = sum + ptr->data;
//         ptr = ptr->next;
//     }
//     return sum;
// }

// int main()
// {
//     float sum;
//     Node *head;
//     Node *item2;
//     Node *item3;
//     Node *item4;

//     head = (Node *)malloc(sizeof(Node));
//     item2 = (Node *)malloc(sizeof(Node));
//     item3 = (Node *)malloc(sizeof(Node));
//     item4 = (Node *)malloc(sizeof(Node));

//     head->data = 100;
//     head->next = item2;

//     item2->data = 200;
//     item2->next = item3;

//     item3->data = 300;
//     item3->next = item4;

//     item4->data = 400;
//     item4->next = NULL;

//     sum = SumOfLinkedListItems(head);
//     printf("Sum = %f", sum);
//     return 0;
// }

// Question 2(B) ***********************************************

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Node
// {
//     int patientID;
//     struct Node *next;
// } Node;

// void traversal(Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("Patiend ID = %d\n", ptr->patientID);
//         ptr = ptr->next;
//     }
//     printf("\n");
// }

// Node *removePatiendIDFromBeggining(Node *head)
// {
//     Node *p = head;
//     head = head->next;
//     free(p);
//     return head;
// }

// int main()
// {
//     Node *head;
//     Node *patient2;
//     Node *patient3;
//     Node *patient4;

//     head = (Node *)malloc(sizeof(Node));
//     patient2 = (Node *)malloc(sizeof(Node));
//     patient3 = (Node *)malloc(sizeof(Node));
//     patient4 = (Node *)malloc(sizeof(Node));

//     head->patientID = 1;
//     head->next = patient2;

//     patient2->patientID = 2;
//     patient2->next = patient3;

//     patient3->patientID = 3;
//     patient3->next = patient4;

//     patient4->patientID = 4;
//     patient4->next = NULL;

//     traversal(head);
//     head = removePatiendIDFromBeggining(head);
//     traversal(head);
//     return 0;
// }

// Question 3(A) ***********************************************

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Node
// {
//     struct Node *pre;
//     int stud_id;
//     struct Node *next;
// } Node;

// void printfDoublyLinkedListInReverse(Node *end)
// {
//     int counter = 0;
//     Node *p = end;
//     while (p != NULL)
//     {
//         printf("Student ID %d = %d\n", counter, p->stud_id);
//         p = p->pre;
//         counter++;
//     }
//     printf("\n");
// }

// int main()
// {
//     Node *student1;
//     Node *student2;
//     Node *student3;
//     Node *student4;

//     student1 = (Node *)malloc(sizeof(Node));
//     student2 = (Node *)malloc(sizeof(Node));
//     student3 = (Node *)malloc(sizeof(Node));
//     student4 = (Node *)malloc(sizeof(Node));

//     student1->pre = NULL;
//     student1->stud_id = 1;
//     student1->next = student2;

//     student2->pre = student1;
//     student2->stud_id = 2;
//     student2->next = student3;

//     student3->pre = student2;
//     student3->stud_id = 3;
//     student3->next = student4;

//     student4->pre = student3;
//     student4->stud_id = 4;
//     student4->next = NULL;

//     printfDoublyLinkedListInReverse(student4);
//     return 0;
// }

// Question 3(B) ***********************************************

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Node
// {
//     int id;
//     struct Node *next;
// } Node;

// void CircularLinkedListTraversal(Node *head)
// {
//     int counter = 0;
//     Node *ptr;
//     ptr = head;
//     do
//     {
//         printf("ID Number %d = %d\n", counter, ptr->id);
//         ptr = ptr->next;
//         counter++;
//     } while (ptr != head);
//     printf("\n");
// }

// Node *CircularLinkedListInsertionAtIndex(Node *head, int id, int index)
// {
//     int counter = 0;
//     Node *ptr;
//     Node *p = head;
//     ptr = (Node *)malloc(sizeof(Node));
//     ptr->id = id;

//     while (counter != index - 1)
//     {
//         p = p->next;
//         counter++;
//     }
//     ptr->next = p->next;
//     p->next = ptr;
//     return head;
// }

// int main()
// {
//     Node *head;
//     Node *customer2;
//     Node *customer3;
//     Node *customer4;
//     Node *customer5;
//     Node *customer6;
//     Node *customer7;

//     head = (Node *)malloc(sizeof(Node));
//     customer2 = (Node *)malloc(sizeof(Node));
//     customer3 = (Node *)malloc(sizeof(Node));
//     customer4 = (Node *)malloc(sizeof(Node));
//     customer5 = (Node *)malloc(sizeof(Node));
//     customer6 = (Node *)malloc(sizeof(Node));
//     customer7 = (Node *)malloc(sizeof(Node));

//     head->id = 1;
//     head->next = customer2;

//     customer2->id = 2;
//     customer2->next = customer3;

//     customer3->id = 3;
//     customer3->next = customer4;

//     customer4->id = 4;
//     customer4->next = customer5;

//     customer5->id = 5;
//     customer5->next = customer6;

//     customer6->id = 6;
//     customer6->next = customer7;

//     customer7->id = 7;
//     customer7->next = head;

//     CircularLinkedListTraversal(head);
//     head = CircularLinkedListInsertionAtIndex(head, 25, 5);
//     CircularLinkedListTraversal(head);

//     return 0;
// }
