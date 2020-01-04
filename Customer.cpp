#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Customer.h"
using namespace std;

void Customer::SetName(string name)
{
	this->name = name;
}
void Customer::SetAddress(string address)
{
	this->address = address;
}
void Customer::SetPhone(string phone)
{
	this->phone = phone;
}
void Customer::SetDateReceived(string dateReceived)
{
	this->dateReceived = dateReceived;
}
void Customer::SetDateBack(string dateBack)
{
	this->dateBack = dateBack;
}
void Customer::SetPrice(double price)
{
	this->price = price;
}
void Customer::SetEmail(string email)
{
	this->email = email;
}
void Customer::setComments(string comments)
{
	this->comments = comments;
}
void Customer::SetPrices(vector<double> prices)
{
	this->prices = prices;
}
void Customer::setSize(int size)
{
	this->size = size;
}
/*
void Customer::SetTexts(string texts)
{
	this->texts = texts;
}
*/
void Customer::Write(ofstream& writeFile)
{
	writeFile << "Name: " << name << endl;
	writeFile << "Phone: " << phone << endl;
	writeFile << "Adress: " << address << endl;
	writeFile << "Email: " << email << endl;
	//writeFile << "Receive texts: " << texts << endl;
	writeFile << "Date Received: " << dateReceived << endl;
	writeFile << "Date Back: " << dateBack << endl;
	writeFile << "Price: " << price << endl;
	writeFile << "Additional Comments: " << comments << endl;
}
void Customer::WritePrice(ofstream& writeFile)
{
	int i = 0;
	prices.resize(size);
	while (prices.at(i) > 0)
	{
		writeFile << prices.at(i) << endl;
		i++;
	}
}

Customer::Customer(string name, string address, string phone, string dateReceived, string dateBack, double price, string email, string comments, vector<double> prices)
{
	this->name = name;
	this->address = address;
	this->phone = phone;
	this->email = email;
	this->dateReceived = dateReceived;
	this->dateBack = dateBack;
	this->price = price;
	this->comments = comments;
	//this->texts = texts;
}
Customer::Customer()
{
	return;
}