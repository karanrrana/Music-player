#include<iostream>
using namespace std;


int main(){
cout<<"Start\n";
try{
    cout<< "Inside Try block\n";
    throw 100;
    cout<<"This will not execute";
}
catch(int i){
    cout<<"Caught an exception --value is: ";
    cout<<i<<endl;
}
return 0;
}