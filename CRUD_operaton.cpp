#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int choice;
	cout << "----------- The CRUD operation system  -----------"<<endl;
	
	cout << " 1. Add " << endl;
	cout << " 2. Search " << endl;
	cout << " 3. List all " << endl;
	cout << " 4. Edit " << endl;
	cout << " 5. Delete " << endl;
	cout << "Enter your choice: ";
	cin >> choice;

	do{
		if(choice == 1){
		
			string lastname, firstname,classname;
		    cout << "Enter your firstname: ";
		    cin >> firstname;
		    cout << "Enter your lastname: ";
		    cin >> lastname;
		    cout << "Enter your class: ";
		    cin >> classname;
		    
		    ofstream inFile("test.txt",std::ios_base::app);
		
				cout << "file opened";
				inFile << firstname << ", " << lastname << ", " << classname<<endl;
			
			
			inFile.close();
	    }
	    else if(choice == 2){
		
			cout<<"Going to search a user!!" <<endl;
			//search();
		}
		else if(choice == 3){
			cout<<"Going to view all users!!";
			//view();
	    }
		
		else if(choice == 4){
		
			cout<<"Going to edit a user!!"<<endl;
			//edit();
		}
		else if(choice == 5){
		
			cout<<"Going to delete a user!!"<<endl;
			//deleteUser();
		}
		else{
			cout << "Please choose a valid choice.";
		}
	}while(choice != 1);
}
