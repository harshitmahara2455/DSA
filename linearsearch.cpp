#include<iostream>
using namespace std ;

int linear_search(int arr[],int size , int key ){
    for (int i = 0 ; i <size ; i++){
        if (arr[i]==key){
            return i;

        }
    }
    return -1 ; 
}

int main (){
    int arr[]={10,23,45,78,89,100};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key ;

    cout <<"enter the element to search" << endl ; 
    cin >> key ; 


    int result = linear_search(arr ,size ,key );
    if(result != -1){
        cout << "element fount at index :"<< result << endl ;
        
    }else{
        cout << "element not found in the array ." << endl ; 
    }
}