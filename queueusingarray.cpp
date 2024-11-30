#include<iostream>
using namespace std ; 

class Queue {
    int front ;
    int rear ; 
    int size ; 
    int *arr;

    public :
    Queue(int size){
        this -> size = size ;
        front = -1;
        rear = -1 ;
        arr = new int [size];
    }
    ~Queue(){
        delete[]arr ; 
    }

    bool isEmpty (){
        return (front == -1 || front > rear);
    }
    bool isFull (){
        return (rear == size - 1);
    }
    void enqueue (int element ){
        if (isFull()){
            cout <<"Queue overflow" << endl ;
        }else {
            if(front ==-1){front = 0 ;}
            rear ++ ; 
            arr[rear]=element ;
            cout << element << " enqued to the queue"<< endl;
            
            
            
        }
    }
    void dequeue(){
        if (isEmpty()){
            cout <<"Queue Underflow"<< endl ;
        }else {
            cout << arr[front]<< " dequeued from the queue" << endl ;
            front ++ ; 
        }
    }

    int peek (){
        if(isEmpty()){
            cout <<"Queue is empty !"<< endl ; 
            return -1 ;
        }
        return arr[front];
    }


};


int main (){
     Queue q(5);

    // Perform operations
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.peek() << endl;

    q.dequeue();
    cout << "Front element after dequeue: " << q.peek() << endl;

    q.dequeue();
    q.dequeue();
    q.dequeue(); // Attempt to dequeue from an empty queue

    return 0;

}