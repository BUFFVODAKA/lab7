#include<iostream>

using namespace std;

int main(){

	int i = 0, P[5000], k;
	cout << "Please input k: ";
	cin >> k; 
	while(i < 5000){
		P[i] = 2*i+1;
		i++;
	}
	if(k > 0){
		int result = 0;
		int z = 0;
		while(z < 5000){
			if(P[z]%k == 0){
				result -= P[z];
			
			}else{
				result += P[z];
				
			}
			z++;
		}
		cout << "Result = " << result;
		
	}else{
		cout << "Invalid input!!!";
	}
	
	return 0;

}
