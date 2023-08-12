#include<iostream>
using namespace std;

struct Pair 
{
    int min;
    int max;
};
 
 Pair getminmax (int arr[], int n)
 {
    struct Pair minmax;
    int i;

    // if there is one only one element
    if(n==1)
    {
        minmax.min=arr[0];
        minmax.max=arr[0];
        return minmax;
    }
    // if there is more than one element
    // then intialize min max

    if(arr[0] > arr[1])
    {
        minmax.max=arr[0];
        minmax.min=arr[1];

    } 
    else
    {
        minmax.max=arr[1];
        minmax.min=arr[0];
    }

    for(i=2; i<n; i++)
    {
        if(arr[i]> minmax.max)
        minmax.max=arr[i];
        else if(arr[i]<minmax.max)
        minmax.min=arr[i];
    }
    return minmax;
 }

 int main()
 {
    int arr[]={11,23,25,57,99,2};
    int arr_size=6;
    struct Pair minmax=getminmax(arr,arr_size);
    cout<<"Minimum number is"<<minmax.min<<endl;
    cout<<"Maximum number is"<<minmax.max<<endl;
    return 0;
 }