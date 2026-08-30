
#include<stdlib.h>
#include<stdio.h>
#define LEN 5

typedef int stack;

stack Items[LEN];
stack TOP = 0;

void push(int data);
void pop();
void show();
void peek();

void TrackPointer(){
    printf("\nTOP = %d\n", TOP);
}

int main(){

    while(1){
        printf("\n\nChoose any operation on stack: \n");

        printf("1. PUSH\n2. POP\n3. View\n4. Pointer Status\n5. Exit Now");
        int option;

        printf("\nEnter option: ");
        scanf("%d", &option);

        if(option < 1 || option > 4){
            printf("\n\nInvalid option selection is done, please retry\n");
            continue;
        }


        switch(option){
            case 1: {
                int element;
                printf("Enter a number to insert into the stack: ");
                scanf("%d", &element);

                push(element);
                break;
            }

            case 2: {
                pop();
            }

            case 3: {
                show();
            }

            case 4: {
                TrackPointer();
            }

            case 5: {
                exit(1);
            }
               
        }
    }
    return 0;
}


void push(int data){

    if(TOP == LEN){
        printf("\nstack is overflow\n");
        return;
    }
    
    Items[TOP] = data;
    TOP += 1;
    return;
}

void pop(){

    if(TOP == 0){
        printf("\nStack is Underflow\n");
        return;
    }

    TOP -= 1;
    printf("Last Data Item is removed\n");
}

void show(){

    if(TOP == 0){
        printf("\nStack is Underdflow\n\n");
        return;
    }

    printf("Stack item - \n");
    for(int i = TOP - 1; i > -1; i--){
        printf("%d\n", Items[i]);
    }
}
