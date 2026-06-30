#include <iostream>
using namespace std;
int main (){

int arr[] = {2 ,5 , 6 ,8 ,9, 11};
int n = 6;
int key = 13;
int s = 0;
int e = n - 1;
while(s <= e){
    int mid = s + (e - s)/2;
    if(arr[mid] == key){
        cout<< " element found " <<  mid ;
          return 0;

    }
       else if(arr[mid] < key){
        s = mid + 1;

       }
       else{
        e = mid - 1;

       }
       
}


   cout<< "element not found";
       return 0;




}