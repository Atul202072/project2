#include <iostream>
using namespace std;

int binarySearch(int A[],int num1, int num2, int a)
	{
        
		while (num1 <= num2)
		{
			int mid = (num1 + num2) / 2;
			if (a == A[mid]) 
			{
				return mid;
			}
			else if (a < A[mid]) 
			{
				num2 = mid - 1;
			}
			else 
			{
			num1 = mid + 1;
			}
		}
		return -1;
	}

    int main(void)
    {int A[]={10,20,30,40,50,60,70,80,90,100};
    int n=sizeof(A)/sizeof(A[0]);
    int num=50;
    int index=binarySearch(A,0,n-1,num);
    if (index==-1)
    {cout<<num<<"Value not found.";}
    else
    {cout<<" The said value "<<num<<" is at index no."<<index;}
    return 0;
}

