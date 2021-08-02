#include <iostream>
#include <vector>

using namespace std;

int odd(int x);
int even(int x);

int main(){

  int seed = 0;

  cout<<"Please enter a seed."<<endl;
  cin>>seed;

  cout<<"\nSeed = "<<endl;

  while(seed>1){

     if(seed%2==0){
        seed = even(seed);
     }else{
        seed = odd(seed);
     }

     cout<<seed<<endl;

  }

  return 0;
}

int odd(int x){
   return (3*x+1);
}

int even(int x){
   return (x/2);
}