#include <iostream>
using namespace std;

int main(){
	int numbers[]={1,2,3,4,5,6,7,8,9,10};
	int elementToInsert = 11;
	int positionToInsert = 2;
	
	if (positionToInsert >=0 && positionToInsert < sizeof(numbers) / sizeof(numbers[0])){
		for (int i = sizeof(numbers) / sizeof(numbers[0]) - 1; i > positionToInsert; i--){
			numbers[i] = numbers[i - 1];
		}
		
		numbers[positionToInsert] = elementToInsert;
			
	}
	for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
		cout<< numbers[i] << " ";
	}
	
	return 0;
}
