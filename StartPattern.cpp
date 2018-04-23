#include<iostream>
using namespace std;
int main() {
    int N ;
    cin>>N;
    for(int i = 0;i < N;i++){
        for(int j = 1;j<N-1;j++)
        {
            cout<<"\t";
             for(int k=j;k<N;k+=3){
                 cout<<"*"<<endl;
        }
        }
       
       
    }
	return 0;
}