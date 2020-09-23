#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 
#define MAX 3 
//definitions
int st[MAX], top=-1;
void push(int st[], int val);
int pop(int st[]); 
int peek(int st[]);
void display(int st[]);
//main function
void main( )  
{ 
int val, option;
    //loop for the main menu
    do
    { 
    printf("\n -------Main Menu-------"); 
    printf("\n 1. Push"); 
    printf("\n 2. Pop"); 
    printf("\n 3. Peek"); 
    printf("\n 4. Display"); 
    printf("\n 5. Exit"); 
    printf("\n Enter your option: "); 
    scanf("%d", &option); 
        //switch case for options
        switch(option) 
        { 
            case 1: 
                printf("\n Enter the number you want to push: ");
                scanf("%d", &val); 
                push(st, val); 
            break; 
            case 2: 
                val = pop(st);
                if(val != -1) 
                printf("\n The value deleted from stack is: %d", val);
            break; 
            case 3: 
                val = peek(st); 
                if(val != -1) 
                printf("\n The value stored at top of stack is: %d", val); 
            break; 
            case 4: 
                display(st); 
            break; 
        } 
    }
    while(option != 5); 
    return 0; 
    } 
    void push(int st[], int val){ 
        if(top == MAX-1)     { 
        printf("\n Stack Underflow"); 
        }
        else { 
        top++; 
        st[top] = val; 
        } 
    } 
    int pop(int st[]){ 
        int val; 
        if(top == -1) 
        { 
        printf("\n Stack Overflow"); 
        return -1; 
        } 
        else 
        { 
        val = st[top]; 
        top--; 
        return val; 
        } 
    } 
    void display(int st[]){ 
        int i; 
        if(top == -1) 
        printf("\n Stack Empty"); 
        else 
        { 
        for(i=top;i>=0;i--)
        printf("\n %d",st[i]); 
        printf("\n"); 
        } 
    } 
    int peek(int st[]) { 
    if(top == -1) 
    { 
    printf("\n Stack Empty");
    return -1; 
    } 
    else 
    return (st[top]); 
    } 

  