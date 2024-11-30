#include<iostream>
using namespace std ; 


int binary_search ( int arr[],int size ,int key ){
    int low = 0 , high = size -1 ;

    while(low <=high){
        int mid = low +(high-low)/2;

        if(arr[mid]== key ){
            return mid ; 
        }
        if(arr[mid ]<key ){
            low =mid +1;

        }else{
            high = mid -1 ; 

        }
       

    }
    return -1;
}

int main (){
    int arr[]= {10,20,30,40,50,60,70};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key ; 


    cout << "enter the element to search"<< endl ;
    cin >>key ; 


    int result = binary_search(arr,size,key);
    if(result !=-1){
        cout <<"element found at index"<< result << endl ; 

    }else {
        cout <<"element not found in arraay "<< endl ; 
    }
    return 0 ; 
}