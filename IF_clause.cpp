#include <iostream>
using namespace std;

int main() {

	string password="Turkmenistan";
	string input;
	cout<<"Enter the password: "<<flush;
	cin>>input;

	if(input==password){	//if the condition is true
		cout<<"Welcome back, user"<<endl;	//then execute this instruction
	}

	if(input!=password){	//if the condition is true
		cout<<"Access denied"<<endl;	//then execute this instruction

	}


	//flushing the buffer
        int c;
        do{
        c=cin.get();
        } while (c!='\n'&&c!=EOF);


        //waiting for the user to press ENTER
        cin.get();


	
	return 0;
}
