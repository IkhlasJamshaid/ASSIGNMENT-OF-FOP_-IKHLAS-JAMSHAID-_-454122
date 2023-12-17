#include <iostream>
using namespace std;
int main(){

	int n , s=0, temp, e=n-1 ;
	int counter_equal = 0;
	cout << "Enter lenght of your both Strings: " ;
	cin >> n ;
	cout << endl ;
	e=n-1;
	char string1[n+1];
	char string2[n+1];
	cout << "For String#1" ;
	cout << endl ;
	for(int i=0 ; i<n ; i++){
		cout << "Enter "  << " Character " << i+1 << " : ";
		cin >> string1[i];
		cout << endl; 
	}
	cout << "For String#2" ;
	cout << endl ;
	for(int i=0 ; i<n ; i++){
		cout << "Enter "  << " Character " << i+1 << " : ";
		cin >> string2[i];
		cout << endl; 
	}
	for(int k=0; k<n ; k++){
		if(string1[k]==string2[k])
		counter_equal++ ;
	}
	if(counter_equal == n) {
		cout << "The Strings are Equal" <<endl ;
		while (s<e){
			temp = string1[e];
			string1[e] = string1[s];
			string1[s] = temp;
			s++;
			e--;
		}
		cout<<"Now String 1 become: " << endl;
		for(int j=0 ; j<n ; j++){
			cout << string1[j];
		}
		cout << endl;
		cout<<"Now String 2 become: " << endl;
		for(int j=0 ; j<n ; j++){
			cout << string2[j];
		}
	}
	else
	cout << "The strings are not equal";  
	   }
