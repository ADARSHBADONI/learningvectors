#include<iostream>
#include<vector>
using namespace std;

int main(){
   vector <int> v;     //static declaration
   //vector <int> *vp = new vector <int> ();(dynamic alocation)
   v.push_back(10);
   v.push_back(20);
   v.push_back(30);
    
    v[1]=1000;
    v[2]=300;
   // we will not use vectors for intialzaton.
   //we only use them for get the value at that location and updating.
    /*v[3]=423;
    v[4]=237;
    */
  v.push_back(23);
  v.push_back(17);
  for(int i=0;i<v.size();i++){
  cout<<v[i]<<endl;
 
  }
 
  
 /*   
   cout<<v[0]<<endl;
   cout<<v[1]<<endl;
   cout<<v[2]<<endl;
   cout<<v[3]<<endl;
   cout<<v[4]<<endl;
   cout<<v[5]<<endl;
   cout<<v[6]<<endl;
   cout<<"size:"<<v.size()<<endl;
   cout<<v.at(6)<<endl;
  */
   
