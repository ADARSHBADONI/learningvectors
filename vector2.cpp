#include<iostream>
#include<vector>
using namespace std;

int main(){
   vector <int> v;     //static declaration
   for(int i=0;i<100;i++){
   cout<<"capacity:"<<v.capacity()<<endl;
   v.push_back(i + 1);
   cout<<v[i]<<endl;
   cout<<"size:"<<v.size()<<endl;
   }
   
   }
