#include <iostream>
#include <string>

using namespace std;

//FOR ENUMS THE RETURNED VALUES ARE NUMBERS EVEN IF GENDER IS NOT AN INT

enum Gender{
		MALE, FEMALE, OTHER
};

struct Person{
	string names;
	Gender gender;
}p2;

Gender StringToEnumConverter(string gender){
	if(gender == "MALE"){
		return MALE;
	}
	else if(gender == "FEMALE"){
		return FEMALE;
	}
	else{
		return OTHER;
	}
}

string EnumToStringConverter(Gender gender){
	if(gender == MALE){
		return "MALE";
	} 
	else if(gender == FEMALE){
		return "FEMALE";
	}
	else{
		return "OTHER";
	}
}
	
int main(){
	
	Person p1 = Person{"Prince", MALE};
//	ALSO WE CAN INITIALIZE USING THIS METHOD

//    Person p1 = Person;
    
    p2.names = "Sauved"; 
	p2.gender= StringToEnumConverter("FEMALE");
	
	cout << "Names : " << p1.names << " Gender: " << EnumToStringConverter(p1.gender) << endl;
	cout << "Names : " << p2.names << " Gender: " << EnumToStringConverter(p2.gender) <<endl ;
}
