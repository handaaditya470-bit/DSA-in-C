#include<iostream>
using namespace std;
void push(int a[10],int n)
{
    int top=-1,item;
for(int i=0;i<n;i++){
    top++;
cout<<"enter items :";
cin>>item;
    a[top]=item; 
}}
void pop(int a[10],int &n)
{
    cout<<a[n-1];
    n--;
    cout<<endl;
}
void display(int a[10],int n){
for(int i=n-1;i>=0;i--)
cout<<a[i]<<"  ";
}
int main(){
int a[10],n;
cout<<"enter no .of elements ";
cin>>n;
push(a,n);
pop(a,n);
display(a,n);
return 0;
}