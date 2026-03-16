#include<iostream>
using namespace std;
void queue(int a[10],int item,int n)
{
    int rear=0,front=0;
if (rear==n){
    cout<<"queue full";
    exit;
}
else if (front==0&&rear==0){
front=1;
rear=1;
cout<<"queue is empty";
}
else{
rear++;
cout<<"array is in between";
}
a[rear]=item;
cout<<a[rear];

}
void display(){
    for(int i=front;i<=rear;i++){
    cout<<"";
    }}
int main(){
    int a[10],i,n,item;
    n=20;
    cin>>item;
    queue(a,item,n);
    return 0;
}