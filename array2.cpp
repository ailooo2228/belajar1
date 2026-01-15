#include<iostream>

using namespace std;

int main (){
	int Arrisi[4]{1,4,7,13};
	int ArrInput[6];
	
	cout<<"input data arrInput"<<endl;
	for (int i=1;i<=6;i++){
		cout<<"Data ke-"<< i <<":";
		cin>>ArrInput[i];
	} cout << "ArrIsi:";
	for (int a=0;a<4;a++){
		cout<<Arrisi[a]<<" ";
    }cout<<"\nArrInput :"<<endl;
    for (int b=1 ; b<= 6; b++){
    	cout<<ArrInput[b]<<" ";
	}
	return 0;
}
