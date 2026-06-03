#include <iostream>
using namespace std;
int main(){
  int Value,Sum=0,n;
  cout<<"How Many Numbers Do You Plan To Test\n";
cin>>n;
 for(int i=0;i<n;i++){
    cout<<"Enter Value\n ";
cin>>Value;
if(Value%2==0){
Sum=Sum+Value;
 }
 }
  cout<<"The Sum Of Even Values Is "<<Sum;
 
}