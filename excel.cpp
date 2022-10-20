#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
	ifstream inFile;
	string city;
	string country;
	string lat;
	string lon;
	inFile.open("worldcities.csv");
	if(inFile.is_open()){
		cout<<"File has been opened!"<<endl;
	}
	else{
		cout<<"No file has been Opened!"<<endl;
	}

	while(!inFile.eof()){
		inFile>>city;
		inFile>>country;
		inFile>>lon;
		inFile>>lat;
		cout<<"City: "<<city<<endl;
		cout<<"Country: "<<country<<endl;
		cout<<"Lat: "<<lat<<endl;
		cout<<"Lon: "<<lon<<endl;
	}
	inFile.close();
	system("pause");
	return 0;
}
