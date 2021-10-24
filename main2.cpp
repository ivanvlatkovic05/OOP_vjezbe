#include <iostream>

using namespace std;

int maximum(int arr[], int n)
{
    int nmax = arr[1];
    for (int i=0; i< n; i++)
    {
        if(nmax < arr[i])
        {
            nmax = arr[i];
        }
    }
    cout<<nmax;
}
int minimum(int arr[], int n)
{
    int nmin = arr[1];
    for (int i=0; i< n; i++)
    {
        if(nmin > arr[i])
        {
            nmin = arr[i];
        }
    }
    cout<<nmin;
}

int main()
{
    int n;
    cout << "Enter the number of members of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the members of the array: "<<endl;
    for (int i=0; i< n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Highest number: ";
    maximum(arr,n);
    cout<<endl;
    cout<<"Lowest number: ";
    minimum(arr,n);
}
