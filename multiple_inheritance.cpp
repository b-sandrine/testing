#include <iostream>
using namespace std;

class A{
	public: A(){
		cout<<"Class A is called. " <<endl;
    }
    int x;
		
	public:
	    void setX(int xp){
			x = xp;
		}
		
		int readX() {
			return x;
		}
};

class B: public A{
	
    public:
	    void setX(int xp){
			x = xp;
		}
		
		int readX() {
			return x;
		}
		
	public: B(){
		
		cout<<"class B is called" << endl;
    }
};

class C: public A{
	public: C(){
		cout << "class C is called"<< endl;
	}
};

class D:public B,public C{
	public: D(){
		cout << "class D is called "<<endl;
	}
};

int main(){
	D d;
	d.C::setX(10);
	d.B::setX(20);
	return 0;
}
