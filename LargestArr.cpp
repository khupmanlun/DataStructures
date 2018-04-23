#include <iostream>
using namespace std;
#define MAX 100000
int main() {
    int N,Arr[MAX],a,b,c;
    cin>>N;
    for(int i = 0;i<N;i++){
        cin>>Arr[i];
    }
    for(int j=0;j<N;j++){
        c= Arr[j];
        for(int k=j+1;k<N;k++){
            a= Arr[k]; b = Arr[k+1];
            
        }
         if(a+b>=c){
                   cout<<"YES";
                   break;
            }
       
    }
    
}
