#include <bits/stdc++.h> 
using namespace std; 
  
struct Queue { 
    stack<int> s1, s2; 
  
    void enQueue(int x) 
    { 
        
        while (!s1.empty()) { 
            s2.push(s1.top()); 
            s1.pop(); 
        } 
  
        
        s1.push(x); 
  
        
        while (!s2.empty()) { 
            s1.push(s2.top()); 
            s2.pop(); 
        } 
    } 
  
    // Dequeue an item from the queue 
    int deQueue() 
    { 
        // if stack is empty 
        if (s1.empty()) { 
            cout << "Q is Empty"; 
            exit(0); 
        } 
  
     
        int x = s1.top(); 
        s1.pop(); 
        return x; 
    } 
}; 
  

int main() 
{ 
    Queue q; //initialize a queue
    q.enQueue(1); 
    
    q.enQueue(2); 
   
    cout << q.deQueue() << endl; 
    
    q.enQueue(3); 
  
    cout << q.deQueue() << endl; 
    
    cout << q.deQueue() << endl; 
  
    return 0; 
} 
