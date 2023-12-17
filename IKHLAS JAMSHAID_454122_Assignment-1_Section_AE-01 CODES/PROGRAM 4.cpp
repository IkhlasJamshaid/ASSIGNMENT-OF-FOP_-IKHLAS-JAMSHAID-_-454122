#include <iostream>
using namespace std;

int main() {
    int N;
    int counter=0;
    int largestprime = 0;
    cout << "Enter a positive integer N: ";
    cin >> N;

    if (N <= 1) {
        cout << "Please enter a positive integer greater than 1." << endl;
		}
    else {
	
    int j=2;
    while(j<=N)
	{
		counter=0;
        int i = 2;
    while(i*i <= j) {
    	
        if (j % i == 0) {
            counter++;
        }
	i++;
	}
	
	if(counter==0){
    largestprime = j ;
	}
	j++;
		}
    
    cout << "The largest Prime Number equal or Less than Given Number is : " << largestprime;


    if(largestprime == 0){
    	cout << "The Largest prime Number Does not Exist";
	}
	
	}
}