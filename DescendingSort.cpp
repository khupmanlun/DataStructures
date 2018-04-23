#include<iostream>
using namespace std;
int main() {
    int N,Arr[10000],k=0,count = 0;
    cin>>N;
    for(int i =0;i<N;i++){
        cin>>Arr[i];
    }
    for(int j = 0;j<N;j++){
       for(k=j;k<N;k++){
           if(Arr[j]<Arr[k+1]){
               int temp  =Arr[j];
               Arr[j] = Arr[k+1];
               Arr[k+1] = temp;

             count++;
           }
       }
      
    }
    for(int i = 0;i<N;i++)
      cout<<Arr[i]<<"\t";
    cout<<count;
	return 0;
}