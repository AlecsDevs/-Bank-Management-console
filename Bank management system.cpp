#include <iostream>
#include <string>
using namespace std;

void login();

void open(){
cout << "\t\t\t\t     * * * * * * * * * * * * * * * * * * * * * * * * * *";
    cout << "\n\t\t\t\t     *                                                 *";
    cout << "\n\t\t\t\t     *                BANGKO DE KUWATRO                *"; 
    cout << "\n\t\t\t\t     *                                                 *";
    cout << "\n\t\t\t\t     *              Welcome to our bangko!             *";
    cout << "\n\t\t\t\t     *        Where your money is our priority.        *";
    cout << "\n\t\t\t\t     *                                                 *";
    cout << "\n\t\t\t\t     *  Members:                                       *";
    cout << "\n\t\t\t\t     *   - Alecs Louis Murillon                        *";
    cout << "\n\t\t\t\t     *   - Clarence Codesal                            *";
    cout << "\n\t\t\t\t     *   - Hiro De Leon                                *";
    cout << "\n\t\t\t\t     *   - Gilbert Bacorayo                            *";
    cout << "\n\t\t\t\t     *                                                 *";
    cout << "\n\t\t\t\t     * * * * * * * * * * * * * * * * * * * * * * * * * *";
}

void alecsbank()
{
	char choose;
	int balance=0;
	do {
       	cout << "\t\t\t\t      ___________________________________________";
        cout << "\n\t\t\t\t      |                                         |";
        cout << "\n\t\t\t\t      |              OUR SERVICES               |"; 
        cout << "\n\t\t\t\t      |                                         |";
        cout << "\n\t\t\t\t      |           (1) Deposit Money             |";
        cout << "\n\t\t\t\t      |           (2) Withdraw Money            |";
        cout << "\n\t\t\t\t      |           (3) Log Out                   |";
        cout << "\n\t\t\t\t      |           (4) End the Program           |";
        cout << "\n\t\t\t\t      |_________________________________________|";
        cout << "\n\n\n\tEnter your choice: ";
        cin >> choose;
        cout << "\n  --------------------------------------------------------------------------------------------------------------------" << endl;

        switch (choose) {
            case '1': {
            	cout << "\n  ----------------------------------------------------- Deposit ------------------------------------------------------";
                int cashIn;
                cout << "\n\n\tEnter your cash in: $";
                cin >> cashIn;
                balance += cashIn;
                cout << "\n\tDeposit successful! Balance: $" << balance;
                cout << "\n\n  --------------------------------------------------------------------------------------------------------------------" << endl;
                break;
            }
            case '2': {
            	cout << "\n  ----------------------------------------------------- Withdraw -----------------------------------------------------";
                int cashOutAmount;
                cout << "\n\n\tEnter the amount to cash out: $";
                cin >> cashOutAmount;
                if (cashOutAmount > balance) {
                    cout << "\n\n\tInsufficient funds. Cannot withdraw.";
                    cout << "\n\n  --------------------------------------------------------------------------------------------------------------------" << endl;
                } else {
                    balance -= cashOutAmount;
                    cout << "\n\tWithdraw successful. Balance: $" << balance;
                    cout << "\n\n ---------------------------------------------------------------------------------------------------------------------" << endl;
                }
                break;
            }
            case '3':
            	login();
            case '4':
            	return;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }

    } while (choose != '3');
}
void clarencebank()
{
	char choose;
	int balance=0;
	do {
        cout << "\t\t\t\t      ___________________________________________";
        cout << "\n\t\t\t\t      |                                         |";
        cout << "\n\t\t\t\t      |              OUR SERVICES               |"; 
        cout << "\n\t\t\t\t      |                                         |";
        cout << "\n\t\t\t\t      |           (1) Deposit Money             |";
        cout << "\n\t\t\t\t      |           (2) Withdraw Money            |";
        cout << "\n\t\t\t\t      |           (3) Log Out                   |";
        cout << "\n\t\t\t\t      |           (4) End the Program           |";
        cout << "\n\t\t\t\t      |_________________________________________|";
        cout << "\n\n\n\tEnter your choice: ";
        cin >> choose;
        cout << "\n  --------------------------------------------------------------------------------------------------------------------" << endl;

        switch (choose) {
            case '1': {
            	cout << "\n  ----------------------------------------------------- Deposit ------------------------------------------------------";
                int cashIn;
                cout << "\n\n\tEnter your cash in: $";
                cin >> cashIn;
                balance += cashIn;
                cout << "\n\tDeposit successful! Balance: $" << balance;
                cout << "\n\n  --------------------------------------------------------------------------------------------------------------------" << endl;
                break;
            }
            case '2': {
            	cout << "\n  ----------------------------------------------------- Withdraw -----------------------------------------------------";
                int cashOutAmount;
                cout << "\n\n\tEnter the amount to cash out: $";
                cin >> cashOutAmount;
                if (cashOutAmount > balance) {
                    cout << "\n\n\tInsufficient funds. Cannot withdraw.";
                    cout << "\n\n  --------------------------------------------------------------------------------------------------------------------" << endl;
                } else {
                    balance -= cashOutAmount;
                    cout << "\n\tWithdraw successful. Balance: $" << balance;
                    cout << "\n\n ---------------------------------------------------------------------------------------------------------------------" << endl;
                }
                break;
            }
            case '3':
            	login();
            case '4':
            	return;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }

    } while (choose != '3');
}

void hirobank()
{
	char choose;
	int balance=0;
	do {
        cout << "\t\t\t\t      ___________________________________________";
        cout << "\n\t\t\t\t      |                                         |";
        cout << "\n\t\t\t\t      |              OUR SERVICES               |"; 
        cout << "\n\t\t\t\t      |                                         |";
        cout << "\n\t\t\t\t      |           (1) Deposit Money             |";
        cout << "\n\t\t\t\t      |           (2) Withdraw Money            |";
        cout << "\n\t\t\t\t      |           (3) Log Out                   |";
        cout << "\n\t\t\t\t      |           (4) End the Program           |";
        cout << "\n\t\t\t\t      |_________________________________________|";
        cout << "\n\n\n\tEnter your choice: ";
        cin >> choose;
        cout << "\n  --------------------------------------------------------------------------------------------------------------------" << endl;

        switch (choose) {
            case '1': {
            	cout << "\n  ----------------------------------------------------- Deposit ------------------------------------------------------";
                int cashIn;
                cout << "\n\n\tEnter your cash in: $";
                cin >> cashIn;
                balance += cashIn;
                cout << "\n\tDeposit successful! Balance: $" << balance;
                cout << "\n\n  --------------------------------------------------------------------------------------------------------------------" << endl;
                break;
            	}
            case '2': {
            	cout << "\n  ----------------------------------------------------- Withdraw -----------------------------------------------------";
                int cashOutAmount;
                cout << "\n\n\tEnter the amount to cash out: $";
                cin >> cashOutAmount;
                if (cashOutAmount > balance) {
                    cout << "\n\n\tInsufficient funds. Cannot withdraw.";
                    cout << "\n\n  --------------------------------------------------------------------------------------------------------------------" << endl;
                } else {
                    balance -= cashOutAmount;
                    cout << "\n\tWithdraw successful. Balance: $" << balance;
                    cout << "\n\n ---------------------------------------------------------------------------------------------------------------------" << endl;
                }
                break;
            }
            case '3':
            	login();
            case '4':
            	return;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }

    } while (choose != '3');
}

gilbertbank ()
{
	char choose;
	int balance=0;
	do {
        cout << "\t\t\t\t      ___________________________________________";
        cout << "\n\t\t\t\t      |                                         |";
        cout << "\n\t\t\t\t      |              OUR SERVICES               |"; 
        cout << "\n\t\t\t\t      |                                         |";
        cout << "\n\t\t\t\t      |           (1) Deposit Money             |";
        cout << "\n\t\t\t\t      |           (2) Withdraw Money            |";
        cout << "\n\t\t\t\t      |           (3) Log Out                   |";
        cout << "\n\t\t\t\t      |           (4) End the Program           |";
        cout << "\n\t\t\t\t      |_________________________________________|";
        cout << "\n\n\n\tEnter your choice: ";
        cin >> choose;
        cout << "\n  --------------------------------------------------------------------------------------------------------------------" << endl;

        switch (choose) {
            case '1': {
            	cout << "\n  ----------------------------------------------------- Deposit ------------------------------------------------------";
                int cashIn;
                cout << "\n\n\tEnter your cash in: $";
                cin >> cashIn;
                balance += cashIn;
                cout << "\n\tDeposit successful! Balance: $" << balance;
                cout << "\n\n  --------------------------------------------------------------------------------------------------------------------" << endl;
                break;
            	}
            case '2': {
            	cout << "\n  ----------------------------------------------------- Withdraw -----------------------------------------------------";
                int cashOutAmount;
                cout << "\n\n\tEnter the amount to cash out: $";
                cin >> cashOutAmount;
                if (cashOutAmount > balance) {
                    cout << "\n\n\tInsufficient funds. Cannot withdraw.";
                    cout << "\n\n  --------------------------------------------------------------------------------------------------------------------" << endl;
                } else {
                    balance -= cashOutAmount;
                    cout << "\n\tCash out successful. Balance: $" << balance;
                    cout << "\n\n ---------------------------------------------------------------------------------------------------------------------" << endl;
                }
                break;
            }
            case '3':
            	login();
        	case '4':
        		break;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }

    } while (choose != '3');
}

void login(){
	bool account_found = false;
	while (account_found != true) {
	int login, pin;
	cout << "\n\n\n  ------------------------------------------------------ Log In ------------------------------------------------------";
	cout <<"\n\n\tEnter your account number: ";
	cin >> login;
	
	if (login==1001)
	{
		cout <<"\n\tEnter your pin: ";
		cin>>pin;
		if(pin==8420)
		{
			account_found = true;
			cout <<"\n\n\tSuccesfully Logged In!!\n ";
			cout <<"\n\tWelcome!! Alecs Louis Murillon \n";
			cout << "\n  --------------------------------------------------------------------------------------------------------------------" << endl;
			alecsbank();
			
		}
	}
	
	else if (login==1002)
	{
		cout <<"\n\tEnter your pin: ";
		cin>>pin;
		if(pin==1626)
		{
			account_found = true;
			cout <<"\n\n\tSuccesfully Logged In!!\n ";
			cout <<"\n\tWelcome!! Clarence Codesal\n";
			cout << "\n --------------------------------------------------------------------------------------------------------------------" << endl;
			clarencebank();
			
		}
	}
	
	else if (login==1003)
	{
		cout <<"\n\tEnter your pin: ";
		cin>>pin;
		if(pin==1230)
		{
			account_found = true;
			cout <<"\n\n\tSuccesfully Logged In!!\n ";
			cout <<"\n\tWelcome!! Hiro De Leon\n";
			cout << "\n  --------------------------------------------------------------------------------------------------------------------" << endl;
			hirobank();	
		}
	}
	
	else if (login==1004)
	{
		cout <<"\n\tEnter your pin: ";
		cin>>pin;
		if(pin==2341)
		{
			account_found = true;
			cout <<"\n\n\tSuccesfully Logged In!!\n ";
			cout <<"\n\tWelcome!! Gilbert Bacorayo\n";
			cout << "\n  --------------------------------------------------------------------------------------------------------------------" << endl;
			gilbertbank();	
		}
	}
	
	else {
		account_found = false;
		cout << "\n\tAccount not found. Try Again";
		cout << "\n\n  --------------------------------------------------------------------------------------------------------------------" << endl;
	}
	}
	
}

int main()
{
	open();
	
	login();
	
	return 0;
}
