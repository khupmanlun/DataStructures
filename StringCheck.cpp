//Program to find that the pattern match the string or not
//Dated 11/06/18
#include<iostream>
#include<string>
using namespace std;
int main(void){
    string T,P;
    
    cout<<"Type the  the string!: ";
    getline(cin,T);
    cout<<endl<< "Type your pattern:"<<endl;
    getline(cin,P);
    for(int k = 0;k<(T.capacity() - P.capacity());k++){
        int l = 0;
        while((l < P.capacity()) && (P[k] == T[k+l])){
                l+=1;
             
           if(l==P.capacity()){
                    cout<<"String Matched!";
                    break;
                }
        }
    }
}