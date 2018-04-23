//Templates are more or less a way to perform overloading of function
//but without the need to create one or more function to overload for different 
//datatype , it is a powerful way to reuse the same code/function multiple
//times , whenever the need arises to use the function that performs 
// the same function but required for other datatypes templates is where 
//we goto.
#include<iostream>
using namespace std;
template<class T,int k class S>//this templates contains a type T class 
//it helps  to be used in place of a spefic type it is a generic type
//representation and it represents all the types being passed from function
//call , here K is another argument no from class  T but is another parameter

T sum(T a , T b){
    T result ;
    result  = a + b;
    return result * k;
}
int main(void){
    cout<<sum<float,2>(2.0,3.4)<<endl;
    cout<<sum<int,3>(2,3)<<endl;
}