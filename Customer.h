#pragma once
#include <iostream>
#include <string>
#include<vector>
using namespace std;

class Customer
{
private:
	string name;
	string address;
	string phone;
	string dateReceived;
	string dateBack;
	string email;
	string comments;
	//string texts;
	double price;
	vector<double> prices;
	int size = 0;

public:
	Customer(string name, string address, string phone, string dateReceived, string dateBack, double price, string email, string comments, vector<double> prices);
	Customer();
	void SetName(string name);
	void SetAddress(string address);
	void SetPhone(string phone);
	void SetDateReceived(string dateReceived);
	void SetDateBack(string dateBack);
	void SetPrice(double price);
	//void SetTexts(string texts);
	void SetEmail(string email);
	void setComments(string comments);
	void setSize(int size);
	void SetPrices(vector<double> prices);
	void Write(ofstream&);
	void WritePrice(ofstream&);
	
};