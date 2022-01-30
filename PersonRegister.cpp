#include <iostream>
#include <string>

using namespace std;

enum Gender{
	MALE,FEMALE,male,female,OTHER
};

struct Person{
	string names;
	Gender gender;
};
Gender StringToEnumConverter(string gender){
	if(gender == "MALE" || gender == "male"){
		return MALE;
	}
	else if(gender == "FEMALE" || gender == "female"){
		return FEMALE;
	}
	else{
		return OTHER;
	}
}

string EnumToStringConverter(Gender gender){
	if(gender == MALE || gender == male){
		return "MALE";
	} 
	else if(gender == FEMALE || gender == female){
		return "FEMALE";
	}
	else{
		return "OTHER";
	}
}

int main(){
	
	int maxNum , i,k;
	string names, gender;
	
	cout << "Enter number of people to be recorded: " << endl;
	cin >> maxNum;
	
	Person persons[maxNum] = {};
	
	for(i=0;i<maxNum; i++){
		cout << "Enter person names: " << endl;
		cin >> names;
		cout << "Enter gender: " << endl;
		cin >> gender;
		Person p = {names, StringToEnumConverter(gender)};
		persons[i] = p;
	}
	
	for(k = 0; k < maxNum;k++){
		cout << "The person names : " << persons[k].names << " Gender: " << EnumToStringConverter(persons[k].gender)<< endl;
	}
}
