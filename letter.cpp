#include "std_lib_facilities.h"


int main()
{
	// name
	cout << "Enter your first name: ";
	string first_name;
	cin >> first_name;

	cout << "Hello " << first_name <<"\n";

    // friend name
	cout << "Enter the name of the person you want to write to: ";
	string friend_first_name;
	cin >> friend_first_name;

	cout << "\t Dear " << friend_first_name  <<",\n";
	
	// letter
	cout << "How are you? I'm fine. I miss you.\n" 
	<<"How are you doing in school?\nIs it hard for you?\n";
	
	// another friend
	cout << "Add another friend name: ";
	string friend_name;
	cin >> friend_name;

	cout << "Have you seen "<< friend_name <<" lately?\n";

	// friend sex
	char friend_sex = '0';
	cout << "Enter an m, if the friend is male and enter an f if the friend is female: ";
	cin>> friend_sex;

	if (friend_sex == 'm')
	{
		cout << "If you see "<< friend_name <<" please ask him to call me.\n";
	}
	else if (friend_sex == 'f')
	{
		cout << "If you see "<< friend_name <<" please ask her to call me.\n";
	}
	
	// friend age

	cout << "Please enter your friend's age: ";
	int age;
	cin >> age;

	if(age <= 0 || age >= 110)
	{
		simple_error("You are kidding!");
	}
	else
	{
		cout << "I hear you just had a birthday and you are "<< age <<" years old.\n";
	}

	// next year
	if(age<12)
	{
		cout<<"Next year you will be: "<< age+1 <<"\n";
	}
	if(age == 17)
	{
		cout<<"Next year you will be able to vote.\n";
	}
	if(age > 70)
	{
		cout <<"I hope you are enjoying retirement.\n";
	}

	// ending
	cout << "Yours sincerely,\n\n" << first_name <<"\n";
	return 0;
}