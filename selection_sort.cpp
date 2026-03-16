//  selection sort
#include <iostream>
using namespace std;

void selection(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}
int main() {
cout<<endl<<"Selection sort"<<endl<<"Aditya Handa"<<endl<<"2334132"<<endl;
    int i,arr[10],n;
    cout<<"Enter no of elements : ";
    cin>>n;
    cout<<"Enter elements"<<endl;
    for(i=0;i<n;i++){
    cin>>arr[i];
    }
    cout<<"Original array :"<<endl;
    for (i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    selection(arr, n);
    cout <<"After sorting :"<<endl;
    for (i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}