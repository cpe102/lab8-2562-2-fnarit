#include<iostream>
using namespace std;

//Write the function printO() here
char printO(int N,int M){
	if(N <= 0 || M <= 0){
		cout << "Input invalid";
	}else{
		for(int j = 0 ; j < N ; j++){
			for(int i = 0 ; i < M ; i++){
			cout << 'O';
			}
		cout << '\n';
		}
	}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	printO(7,0);
	cout << "\n";
	return 0;
}
