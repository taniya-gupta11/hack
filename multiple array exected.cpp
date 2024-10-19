#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10,3,5,6,2} , n=5;
    int sum=1;
    cout<<"ith product is:";
    
 
   
    for(int i=i+1; i<n; i++){
        sum=sum*arr[i];
    }
    
    cout<<sum<<" ";
    
}
#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {10,3,5,6,2} , n=5;
    int arr2[]={};
   
    for(int i=0; i<n; i++){
       int product=arr2[i];
    for(int j=0; j<n; j++){
        if (i!=j){
            product=product*arr1[i];
        }
    }   
   
       for(int i=0; i<n; i++){
           cout<<arr1[i];
 }
    
