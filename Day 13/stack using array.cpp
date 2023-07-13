#include <bits/stdc++.h> 
// Stack class.

class Stack {
    
    
    int* arr;
    int topp; //tail for array
    int max_size; //size 

public:
    
    Stack(int capacity) {
        arr = new int[capacity];
        topp = 0;
        max_size = capacity;
    }

    void push(int num) {
        if(topp != max_size)
        {
            arr[topp] = num;
            topp++;
        }
    }

    int pop() {
        if(topp != 0)
        {
            topp--;
            return arr[topp];
        }
        return -1;
    }
    
    int top() {
        return (topp!=0) ? (arr[topp-1]) : (-1);
    }
    
    int isEmpty() {
        return (topp == 0) ? 1 : 0;
    }
    
    int isFull() {
        return (topp==max_size);
    }
    
};
