class Queue {
    stack<int>st1;
    stack<int>st2;
    int size;
    
    public:
    Queue() {
        size=0;
    }

    void enQueue(int val) {
       while(!st2.empty())
       {
           int val = st2.top();
           st1.push(val);
           st2.pop();
       }
       st1.push(val);
       size++;
       while(!st1.empty())
       {
           int val = st1.top();
           st2.push(val);
           st1.pop();
       }
    }

    int deQueue() {
        if(st2.empty())
        {
            return -1;
        }
        int val = st2.top();
        st2.pop();
        size--;
        return val;

    }

    int peek() {
         if(st2.empty())
        {
            return -1;
        }
        int val = st2.top();
        
  
        return val;
    }

    bool isEmpty() {
        if(size==0)
        {
            return 1;
        }
        return 0;
    }
};
