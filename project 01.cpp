#include<iostream>
using namespace std;
int main(){
   int number;
   int sum = 0;

   cout<<"Enter the number(5): "<<endl;

   for (int i=0;i<5;i++){
    cin>>number;
    sum=sum + number;
   }
   cout<<"Total: "<<sum<<endl;
   return 0;
}
