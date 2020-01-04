#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Customer.h"
using namespace std;

int main()
{
	Customer newCustomer;
	ofstream writeFile;
	ifstream readFile;
	vector<double> prices;
	char decision = ' ';
	//char texts = ' ';
	string name;
	string phone;
	string address;
	string email;
	string dateReceived;
	string dateBack;
	string comments;
	double price = 0.00;
	int size = 0;
	

	do
	{
		cout << "Input name (this will also be the file name): ";
		getline(cin, name);
		cout << endl << "Input phone number: ";
		getline(cin, phone);
		cout << endl << "Input address: ";
		getline(cin, address);
		cout << endl << "Input email: ";
		getline(cin, email);
		/*
		cout << "Do they wanna get texts?: ";
		cin >> texts;
		if (texts == 'y')
		{
			newCustomer.SetTexts("Yes");
		}
		else
		{
			newCustomer.SetTexts("No :(");
		}
		*/
		cout << endl << "Input date: ";
		getline(cin, dateReceived);
		cout << endl << "Input expected return date: ";
		getline(cin, dateBack);
		cout << endl << "Input price: ";
		cin >> price;
		cin.ignore();
		cin.clear();
		cout << endl << "Additional comments: ";
		getline(cin, comments);
		cout << endl;

		newCustomer.SetName(name);
		newCustomer.SetPhone(phone);
		newCustomer.SetAddress(address);
		newCustomer.SetEmail(email);
		newCustomer.SetDateReceived(dateReceived);
		newCustomer.SetDateBack(dateBack);
		newCustomer.SetPrice(price);
		newCustomer.setComments(comments);

		writeFile.open(name);
		newCustomer.Write(writeFile);
		writeFile.close();
	
		readFile.open("money");
		while (!readFile.eof())
		{
			double p1;
			readFile >> p1;
			prices.push_back(p1);
			size++;
		}
		prices.push_back(price);
		newCustomer.setSize(size * 2);
		newCustomer.SetPrices(prices);

		writeFile.open("money");
		newCustomer.WritePrice(writeFile);
		writeFile.close();

		cout << "Wanna do another? ";
		cin >> decision;



	} while (decision == 'y');
}