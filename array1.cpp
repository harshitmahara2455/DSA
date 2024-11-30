// finding maximum and minimum element of a given array 

#include<iostream>
using namespace std ;

int  find_max (int arr[],int  size  ){
    int max = arr[0]; 
    for(int i = 0 ; i< size ; i++){
        if(arr[i]> max){
            max = arr[i];

        }

    }
    return max ;

}

int find_min(int arr[],int size){
    int min = arr[0];
    for (int i = 0 ; i <size ; i++){
        if (arr[i]<min){
            min = arr[i];
        }
    }
    return min ; 
}



int main (){

    int arr[5]={1,2,45,36,89};

    cout << find_max( arr , 5) << endl ; 
    cout << find_min(arr , 5) << endl ; 




}