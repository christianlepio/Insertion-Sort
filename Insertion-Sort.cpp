#include<iostream>
using namespace std;

int main(){
	//header
	for(int r = 1; r <= 15; ++r){
		for(int i = 1; i <= 8; i+=1){
			cout << "=";
		}
	}
	cout << "\n\tI\tN\tS\tE\tR\tT\tI\tO\tN\t \tS\tO\tR\tTn";
	for(int r = 1; r <= 15; ++r){
		for(int i = 1; i <= 8; i+=1){
			cout << "=";
		}
	}
	cout << "\n\n";
	//size of array
	int n;
	cout << "\n\nEnter storage size: ";
	cin >> n;
	int list[n];
	cout << "\n\n";
	//input of element
	for(int i = 0; i < n; i++){
		cout << "Enter element of index [" << i << "]: ";
		cin >> list[i];
	}
	//output of element
	cout << "\n\nUNSORTED LIST:\t";
	for(int i = 0; i < n; i++){
		cout << list[i] << "\t";
	}
	cout << "\n\n";
	//bubble sort
	int temp;
	for(int r = 0; r < n; r++){
		for(int a = 0; a < n; a++){
			cout << list[a] << "\t";
		}
		cout << "\tINSERT: " << list[r] << endl;
		for(int i = r; i > 0; i-=1){
			if(list[i] < list[i-1]){
				temp = list[i];
				list[i] = list[i-1];
				list[i-1] = temp;
				for(int a = 0; a < n; a++){
					cout << list[a] << "\t";
				}
				cout << "\t" << list[i-1] << " < " << list[i] << " = TRUE" <<endl;
			}
			else{
				for(int a = 0; a < n; a++){
					cout << list[a] << "\t";
				}
				cout << "\t" << list[i] << " < " << list[i-1] << " = FALSE" <<endl;
				break;
			}
			
		}
		cout << endl;
	}
	return 0;
}
