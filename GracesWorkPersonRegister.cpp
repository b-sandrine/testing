#include <iostream>

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
		//1.Numbers of people
	int n,i,k;
	Person people[n]={};
	cout<<"How many people do you want to register?"<<endl;
	cin>>n;
	//2.Reading
	string names, gender;
	for(i=0;i<n;i++){
		cout<<"Enter person's name"<<endl;
		cin>>names;
		cout<<"Enter person's gender"<<endl;
		cin>>gender;
		Person p = {names,StringToEnumConverter(gender)};
		people[i] = p;
	}
	for(k=0;k<n;k++){
		cout<<"Names: "<<people[k].names<<" Gender: "<<EnumToStringConverter(people[k].gender)<<endl;
	}
	return 0;
}
