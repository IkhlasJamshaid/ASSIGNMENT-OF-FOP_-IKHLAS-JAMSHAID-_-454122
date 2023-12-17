#include <iostream>
using namespace std;

int main() {
	
	int a[5] = {1,2,3,4,5};
	int n;
	cout << "Enter number of Elements you want to Increase: ";
    cin >> n;
    cout << endl;
    int b[5+n] = {1,2,3,4,5};
    for(int i=5 ; i<5+n ; i++)
    {
    	cout << "Enter Element " << i+1 << " : " ;
		cin >> b[i];
		cout << endl; 
	}
    
	cout << "The final Array becomes: " << endl;
    for (int j = 0; j < n+5; j++)
        cout << b[j] << " ";

}