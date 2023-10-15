#include<iostream>
#include"question2.h"

using std::cout; using std::cin;

int main()
{
    //Prompt user for a number.
    int num = 0;
    char user_choice = 'y';
    double sales = 0;
    double result = 0;

	do
	{

        cout<<"Please enter a number (from 1-60): ";
        cin>> num;

        if (num > 60)
        {
            cout<<"Please eneter a number that is in range (1-60). ";
        }
        else
        {
            cout<<"The prime number list of: " << num << " is -> ";
            for (int element : get_primes(num))
            {
                cout << element << " ";
            }


        }
        
		cout<<"\n"<<"Want to calculate other commision (Enter y or Y)? ";
		cin>>user_choice;

	}while(user_choice == 'y' || user_choice =='Y');

	return 0;
}
