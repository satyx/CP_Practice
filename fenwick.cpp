#include<bits/stdc++.h>
using namespace std;

int getSum(int BIT[], int index) 
{ 
    int sum = 0; // Iniialize result 
  
    // index in BIT[] is 1 more than the index in arr[] 
    index = index + 1; 
  
    // Traverse ancestors of BIT[index] 
    while (index>0) 
    { 
        // Add current element of BIT to sum 
        sum += BIT[index]; 
  
        // Move index to parent node in getSum View 
        index -= index & (-index); 
    } 
    return sum; 
} 
  

void updateTree(int BIT[],int n, int index, int val)
{
    index++;
    while(index<=n)
    {
        BIT[index] += val;
        index = index+(index&(-index));
    }
}

int *buildTree(int arr[], int n)
{
    int *BIT = new int[n+1];
    for (int i = 1; i <=n; ++i)
    {
        BIT[i] = 0;
    }
    for (int i = 0; i < n; ++i)
    {
        updateTree(BIT,n,i,arr[i]);
    }
    return BIT;
}

 int main()
 {
    ifstream f;
    f.open("input.txt");
    int n;
    f>>n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        f>>arr[i];
    }
    f.close();
    for (int i = 0; i < n; ++i)
    {
        cout<<arr[i]<<endl;
    }
    int *BIT = buildTree(arr,n);
    cout << "Sum of elements in arr[0..5] is "<< getSum(BIT, 5); 
  
    // Let use test the update operation 
    arr[3] += 6; 
    updateTree(BIT, n, 3, 6); //Update BIT for above change in arr[] 
  
    cout << "\nSum of elements in arr[0..5] after update is "<< getSum(BIT, 5)<<endl; 
  
    return 0; 
 }