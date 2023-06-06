#include<iostream>
using namespace std;
int main( )
{
	int burger=250 , pizza=1200 , drink=90 , choice;
	cout<<"-------Welcome to our Restaurant-------"<<endl;
	cout << "Press 1 to buy Burger "<<endl;
	cout << "Press 2 to buy Pizza "<<endl;
	cout << "Press 3 to buy Drink "<<endl;
	cout<< "Please enter your choice =";
	cin>>choice;
	if(choice==1)
	{
		int quantity;
		cout << "Burger Deal=250"<<endl;
	cout<<"How many burgers you want to buy sir"<<endl;
	cin>>quantity;
	
	int price =quantity*burger;
	int tip =(price/100)*12;
	int net =price+tip;
	cout<<"Bill"<<endl;
	cout <<"The price of burgers are "<<price<<endl;
	cout<<"The Additional charges of burgers are "<<tip<<endl;
	cout <<"The net amount is "<<net<<endl;
	cout <<"Thank You"<<endl;
}
	else if(choice==2)
	{
		int quantity;
		cout << "Pizza Deal=1200"<<endl;
	cout<<"How many pizza you want to buy sir"<<endl;
	cin>>quantity;
	
	int price =quantity*pizza;
	int tip =(price/100)*12;
	int net =price+tip;
	cout<<"Bill"<<endl;
	cout <<"The price of pizza are "<<price<<endl;
	cout<<"The Additional charges of pizza are "<<tip<<endl;
	cout <<"The net amount is "<<net<<endl;
	cout <<"Thank You"<<endl;
	
	
	}
	else if(choice==3)
	{
		int quantity;
		cout << " Cold Drink = 90 "<<endl;
	cout<<"How many Drinks you want to buy sir"<<endl;
	cin>>quantity;
	
	int price =quantity*drink;
	int tip =(price/100)*12;
	int net =price+tip;
	cout<<"Bill"<<endl;
	cout <<"The price of drinks are "<<price<<endl;
	cout<<"The Additional charges of drinks are "<<tip<<endl;
	cout <<"The net amount is "<<net<<endl;
	cout <<"Thank You"<<endl;
	
	
	}
	else 
	{
	cout<<"Sorry The Iteam You Want Is Not Available"<<endl;
	}
}
	
