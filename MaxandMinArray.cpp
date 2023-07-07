#include<iostream>
#include<climits>
using namespace std;



int getMax(int num[],int n){
    int maximum=INT_MIN;
    for(int i=0;i<n;i++){
       maximum=max(maximum,num[i]);
    }
    return maximum;
}

int getMin(int num[],int n){
    int minimum=INT_MAX;
    for(int i=0;i<n;i++){
      minimum=min(minimum,num[i]);
    }
    return minimum;
}

int main (){
int size;
cin>>size;
int num[100];

for(int i=0;i<size;i++){
    cin>>num[i];
}
cout<<"maximum value is:" <<getMax(num,size)<<endl;
cout<<"minimum value is:" <<getMin(num,size)<<endl;

    return 0;
}