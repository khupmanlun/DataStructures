#include<iostream>
using namespace std;
int main() {
    int limit,Arr[100],Num,Res1=0,Res2=0;
    cin>>limit;
    if(limit<=15){
       for(int i = 1;i<=limit;i++){
            cin>>Arr[i];
        }
    }
    else
        cout<<"0";
    
    cin>>Num;
    
    for(int i = 1 ;i<=limit;i++){
        for(int j = i+1;j<limit;j++){
            if(Arr[i] + Arr[j] + Arr[j+1] + Arr[j+2] == Num){
                    cout<<Arr[i]<<"\t"<<Arr[j]<<"\t" <<Arr[j+1]<<"\t"<<Arr[j+2]<<endl;
            }
           else  if(Arr[i] + Arr[j] + Arr[j+1] == Num){
                    cout<<Arr[i]<<"\t"<<Arr[j]<<"\t" <<Arr[j+1]<<endl;
            }
            else if(Arr[i]+ Arr[j]==Num){
                Res1 = Arr[i];
                Res2 = Arr[j];
                cout<<Res1<<"\t"<<Res2<<endl;
            }
          
        }
    }
	return 0;
}