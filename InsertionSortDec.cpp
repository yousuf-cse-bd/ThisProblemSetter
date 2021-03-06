/****
 * @Author: Muhammad Yousuf Ali
 * @Since: Monday, 29 July 2019
 */

#include <iostream>
using namespace std;

void insertionSortDec(int A[],int n)
{
    int i,j, item;
    for(i = 1 ; i<n ; i++)
    {
        item = A[i];
        j = i - 1;
        while(j>=0 && A[j]<item)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = item;
    }
}

int main(int argc, char const *argv[])
{
    int n,i;
    cout<<"Enter nth Value Here: ";
    cin>>n;
    int A[n];
    i = 0;
    while (i<n)
    {
        cout<<"["<<i<<"]\tItem = ";
        cin>>A[i];
        i++;
    }

    insertionSortDec(A,n);
    cout<<"After Sorting Descending Order..:"<<endl;
    for(i = 0; i<n;i++)
    {
        cout<<"["<<i<<"]\tItem = "<<A[i]<<endl;
    }

    return 0;
}