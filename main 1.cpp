#include <iostream>
using namespace std;
int factorial (int x){
if(x== 1){
    return 1;}
return x*factorial(x-1);}

int main(){
int x = 5;
cout<<factorial(x);





    return 0;

}

