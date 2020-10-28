/* Use the linear linked list code to store a randomly generated set of 100 integers. 
 Now write a routine that will rearrange the list in sorted order of these values. Note you might want to use bubble sort to do this.
 Print these values in rows of 5 on the screen.
 How will this work? Compare two adjacent list elements and if they are out of order swap them. 
 After a first pass the largest element will have bubbled to the end of the list. 
 Each pass can look at one less element as the end of a list stays sorted.
*/

#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
  
typedef struct Node { 
    int data; 
    struct Node* next; 
} elem; 

//generate random number
int number_generator(){
    return rand(); 
}

//create new node with random number
elem * create_node(){
    elem * element = malloc(sizeof(struct Node));
    element -> data = number_generator();
    element -> next = NULL;
    return element; 
}

//create new node and make its next element entered node, return new node
elem * add_to_front(elem * h){
    elem * element = create_node();
    element -> next = h;
    return element;
}

elem * sort(elem * element){
    if(element -> next == NULL){return element;}
    if((element -> data) > (element -> next -> data)){
        int temp = element -> data;
        element -> data = element -> next -> data;
        element -> next -> data = temp;
    }
    sort(element -> next);
    return element;
}

int main(){
    srand(time(NULL));  
    elem * head = create_node();
    for(int i = 1; i < 100; i++){
        head = add_to_front(head);
    }
    //sorting
    for(int i = 0; i < 99; i++){
        head = sort(head);
    }
    //printing
    int count = 0;
    while(head != NULL){
        printf("%5d ",head -> data);
        head = head -> next;
        count++;
        if(count == 5){
        printf("\n");
        count = 0;
        }
    }
    return 0; 
} 