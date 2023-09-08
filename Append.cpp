#include <iostream>
using namespace std;

int main(){
	int numbers[]={1,2,3,4,5,6,7,8,9,10};
	int elementToAppend = 11;
	int newSize = sizeof(numbers) / sizeof(numbers[0]) + 1;
	int newNumbers[newSize];
	
	for (int i = 0; i < newSize - 1; i++){
		cout<< newNumbers[i]<< " ";
	}
	return 0;
}
