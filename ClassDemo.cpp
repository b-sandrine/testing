#include <iostream>
#include <string.h>
using namespace std;

class Computer{
   //variable declaration
   private:
    int memory;
    string model;
   //methods declaration
   public: computer(){
    cout<<"Class D in c++ " << endl;
}
  //computer constructor
   public:computer(int memory, string model){
   // c++ does not have a this keyword
    memory = memory;
    model = model;
}
   public:
   	void setMemory(string model){
   		
    if(model=="POSITIVE"){
       memory=8;
    }
	else if(model=="DELL"){
	   memory=16;
    }
    }
    
    int getMemory(){
    	return memory;
	}
};
int main(){
	//invoking default class
	
	Computer Comp;
	Comp.setMemory("DELL");
	cout << Comp.getMemory() << endl;
	return 0;
}
