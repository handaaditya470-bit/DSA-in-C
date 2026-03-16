#include<bits/stdc++.h>
using namespace std;
 
void mergeArrays(int arr1[], int arr2[], int n1,
                            int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;
      // traverse the arr1 and insert its element in arr3
      while(i < n1){
      arr3[k++] = arr1[i++];
    }
       
      // now traverse arr2 and insert in arr3
      while(j < n2){
      arr3[k++] = arr2[j++];
    }
       
      // sort the whole array arr3
      sort(arr3, arr3+n1+n2);
}
 
// Driver code
int main()
{
    int arr1[10],arr2[10];
    int n1,n2,s,i,j;
    int arr3[20];
    cout<<"Enter no of elements for 1st array :";
    cin>>n1;
    for(i=0;i<n1;i++){
    cin>>arr1[i];
    }
   
    cout<<"Enter no of elements for 2nd array :";
    cin>>n2;
     for(j=0;j<n2;j++){
    cin>>arr2[j];
    }
    mergeArrays(arr1, arr2, n1, n2, arr3);
 s=n1+n2;
    cout << "Array after merging" <<endl;
    for (int i=0; i < s; i++)
        cout << arr3[i] << " ";
 
    return 0;
}