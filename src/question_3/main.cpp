#include"question3.h"
#include <iostream>
#include <string>
using namespace std;
using std::cin; using std::cout;


int main()
{
    char user_choice = 'y';

    do
    {

        int n;
        cout << "Enter a positive number: ";
        cin >> n;

        if(n > 15) 
        {
                cout<<"Please, enter a number from 1 to 15 ";
        }
        else 
        {
            int num = get_fib_sequence(n);
            cout<< " The Fibonacci number of: "<< n << " is: "<< num;
        }

        cout<<"\n"<< "Want to calculate other number? (Enter y or Y)? ";
		cin>>user_choice;

    }while(user_choice == 'y' || user_choice =='Y');

    return 0;
}
   