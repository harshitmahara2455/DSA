/*
queue is a data structure which follow the concept of 
first in fisrt out 

*/


#include<iostream>
#include<queue>
using namespace std ; 



int main (){


    queue<int>q ; 


    q.push(20);
    q.push(30);
    q.push(40);


    cout << "the size of quque is " << q.size () << endl ; 
    q.pop();
    q.pop();
    q.pop();
    cout <<"the quque is empty "  << q.empty() << endl ;

}

