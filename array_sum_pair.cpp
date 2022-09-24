#include<iostream>
using namespace std;
void read(int b[],int n){
for(int i=0;i<n;i++){
    cin>>b[i];
}
}
void sum(int a[],int b[],int n,int m){
  
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(a[i]+b[j]==5){
            cout<<a[i]<<" "<<b[j]<<endl;
          } 
        }
    }
   
    
}
int main(){
    int ans=0, n,a[100],b[100],m;
cout<<"ENTER NUMBER OF ELEMENT IN ARRAY 1"<<" ";
cin>>n;
cout<<"ENTER ELEMENT IN ARRAY 1"<<endl;
read(a,n);
cout<<"ENTER NUMBER OF ELEMENT IN ARRAY 2"<<" ";
cin>>m;
cout<<"ENTER ELEMENT IN ARRAY 2"<<endl;
read(b,m);
sum(a,b,n,m);
return 0;}
   