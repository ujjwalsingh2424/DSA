#include <algorithm>
#include <iostream>
using namespace std;

struct Pair{
    int min;
    int max;
};

Pair getMinMax(int arr[], int n)
{
    Pair MinMax;
    sort(arr,arr+n);

    MinMax.min= arr[0];
    MinMax.max= arr[n-1];

    return MinMax;
}
int main()
{
    int arr[]={23,12,7,8,11,10};
    int arr_size= sizeof(arr) / sizeof(arr[0]);
    Pair MinMax= getMinMax(arr, arr_size);
    cout<<"Minimum number is"<<MinMax.min<<endl;
    cout<<"Maximum number is"<<MinMax.max<<endl;
    return 0; 
}
