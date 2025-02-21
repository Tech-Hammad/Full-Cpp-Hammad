#include<iostream>
#include<cstring>
using namespace std;

class bankAccount
{
private:
	int accountNumber;
	char* accountHolderName;
	double balance;
public:

	void Copy(char*& dest, char* source, int size)
	{
		int i;
		dest = new char[size + 1];
		for (i = 0; source[i] != 0; i++)
		{
			dest[i] = source[i];
		}
		dest[i] = '\0';
	}

	bankAccount() :accountNumber(0), balance(0.0f)
	{
		cout << "Default Constructor Called....\n";
		accountHolderName = new char[1];
		accountHolderName[0] = '\0';
	}
	bankAccount(int accNo, char* Name, double bal) 
	{
		int size = strlen(Name);
		accountNumber = accNo;
		balance = bal;
		accountHolderName = new char[size + 1];
		Copy(accountHolderName, Name, size);
	}
	bankAccount(bankAccount &other)
	{
		accountNumber = other.accountNumber;
		balance = other.balance;

		int size3 = strlen(other.accountHolderName);
		accountHolderName = new char[size3 + 1];
		Copy(accountHolderName, other.accountHolderName, size3);       // Deep copy
	}

	int AccountNumber() const
	{
		return accountNumber;
	}
	const char* getAccountHolderName()
	{
		return accountHolderName;
	}
	double getBalance() const
	{
		return balance;
	}

	void setAccountNumber(int accNum)
	{
		accountNumber = accNum;
	}
	void setAccountHolderName(char* Name)
	{
		int size1 = strlen(Name);
		delete[] accountHolderName;
		accountHolderName = new char[size1 + 1];
		Copy(accountHolderName, Name, size1);
	}
	void setBalance(double bal)
	{
		balance = bal;
	}

	~bankAccount() 
	{
		delete[] accountHolderName;
	}
	void display()
	{
		cout << "Account Number                 : HBLPKL0688" << accountNumber << "\n";
		cout << "Account Holder Name            : Mr/Ms " << accountHolderName << "\n";
		cout << "Account Balance                : " << balance << " PKR\n";
	}

	friend void deposit(bankAccount& account, double amount);
	friend void withdraw(bankAccount& account, double amount);
};

void deposit(bankAccount& account, double amount)
{
	if (amount > 0)
	{
		account.balance = account.balance + amount;
		cout << "Deposited " << amount << " PKR New balance  : " << account.balance << " PKR\n";
	}
	else
	{
		cout << "Invalid deposit amount!\n";
	}
}
void withdraw(bankAccount& account, double amount)
{
	if (amount > 0 && amount <= account.balance)
	{
		account.balance = account.balance - amount;
		cout << "Withdrawed: " << amount << " PKR New Balance: " << account.balance << " PKR\n";
	}
	else
	{
		cout << "Invalid withdraw amount or insufficient funds!\n";
	}
}

int main()
{
	bankAccount account1(12345, "Hammad Ahmad", 1000.0);
	account1.display();

	deposit(account1, 500.0);
	withdraw(account1, 200.0);
	withdraw(account1, 2000.0); 

	// Copy Constructor
	bankAccount account2 = account1;   // Deep copy
	cout << "\nCopied Account (Shallow Copy):" << endl;
	account2.display();

	bankAccount account3(account2);    
	cout << "\nCopied Account (Deep Copy):" << endl;
	account3.display();
	
	system("pause");
	return 0;
}