#include<iostream>
using namespace std;
int main() {
    int limit,Arr[100],Max = 0,Num,Res1=0,Res2=0;
    cin>>limit;
    
       for(int i = 0;i<limit;i++){
            cin>>Arr[i];
	    if(Arr[i]<0){
	    	Max = -100;
	    }
        }
    
    for(int i = 0 ;i<limit;i++){
        for(int j = i+1;j<limit;j++){
            if(Arr[i]+Arr[j]>Max){
	    	Max = Arr[i] + Arr[j];
		Res1 = Arr[i];
		Res2 = Arr[j];
	    }
          
        }
    }
     cout<<"The max pairs are"<<Res1<<" and "<<Res2;
	return 0;
}
