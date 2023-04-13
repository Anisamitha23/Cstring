#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char data[8][100] = {"2117051024Jhon Wilken", 
	                    "2117051009Nathania Santa",
						"2257051022Anisa Mitha",
						"2217051041Safira Aulia"};
	char* endPtr;
	for(int i = 0; i < 8; i++){
		Long value = strtod(data[i], &endPtr);
		cout << "Nama : " << endPtr << endl;
		cout << "NPM : " << value << endl;
		cout << endl;
	}
}

