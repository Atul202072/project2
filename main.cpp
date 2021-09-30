#include <iostream>
using namespace std;

    int binarySearch(int A[], int num1, int num2, int a)
    {  
    if (num1 > num2) 
    {
        return -1;
    }
    int mid = (num1 + num2) / 2;
    if (a == A[mid]) 
    {
        return mid;
    }
    else if (a < A[mid]) 
    {
        return binarySearch(A, num1,  mid - 1, a);
    }
    else 
    {
        return binarySearch(A, mid + 1,  num2, a);
    }
    return 1;
}

int main()
{
    int arr[6], num3, num4;
    cout<<"Enter the desired elements: ";
    int i;
    for(i=0;i<6;i++)
    cin>>arr[i];
    cout<<"Enter element to search: ";
    cin>>num3;
    num4=binarySearch(arr,0,5,num3);
    if(num4==1)
    { 
        cout<<"Oops! no match found,try again."<<endl;
    } 
    else
    {
        cout<<"The element is at index: "<<num4<<" & position: "<<num4+1<<endl;
    }
    return 0;
}


