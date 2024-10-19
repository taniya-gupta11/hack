#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1,2,3,4,5} , m=5;
    int arr2[] = {6,7,8,3,4,8} ,n=6;
    
     for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
             if(arr1[i]==arr2[j]){
                 cout<<arr1[i]<<" ";
             }
         }
     }
     

}