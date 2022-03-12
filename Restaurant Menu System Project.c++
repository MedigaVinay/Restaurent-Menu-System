#include<iostream>
using namespace std;
int main()
{
	int order,no_deals;
	cout<<"|*----------------------------------------MENU--------------------------------------------------------*|"<<endl;
	cout<<endl;
	cout<<"(1)   Chicken Biryani                   Rs.150/only"<<endl;
	cout<<"(2)   Chicken palao                     Rs.100/only"<<endl;
	cout<<"(3)   Chicken Curry                     Rs.180/only"<<endl;
	cout<<"(4)   Chicken Burgar                    Rs.100/only"<<endl;
	cout<<"(5)   Mutton  Curry                     Rs.400/only"<<endl;
	cout<<"(6)   Mutton Biryani                    Rs.300/only"<<endl;
	cout<<endl;
	cout<<"Please select the order number: ";
	cin>>order;
	cout<<"Please enter the number of deals: ";
	cin>>no_deals;
	cout<<endl;
	switch(order)
	{
		case 1:
			cout<<"Order  : Chicken Biryani."<<endl;
			cout<<"Number of deals : "<<no_deals<<endl;
			cout<<"Price of each deal:   Rs.150/only."<<endl;
			cout<<"Total Price :"<<"Rs"<<150*no_deals<<" "<<"only."<<endl;
			cout<<"endl";
			cout<<"|*-----------------------THANK YOU FOR COMING---------------------------*|";
		break;
		case 2:
			cout<<"Order  : Chicken Palao."<<endl;
			cout<<"Number of deals : "<<no_deals<<endl;
			cout<<"Price of each deal:   Rs.100/only."<<endl;
			cout<<"Total Price :"<<"Rs"<<100*no_deals<<" "<<"only."<<endl;
			cout<<"endl";
			cout<<"|*-----------------------THANK YOU FOR COMING---------------------------*|"<<endl;
		break;
		case 3:
			cout<<"Order  : Chicken Curry."<<endl;
			cout<<"Number of deals : "<<no_deals<<endl;
			cout<<"Price of each deal:   Rs.180/only."<<endl;
			cout<<"Total Price :"<<"Rs"<<180*no_deals<<" "<<"only."<<endl;
			cout<<"endl";
			cout<<"|*-----------------------THANK YOU FOR COMING---------------------------*|"<<endl;
		break;
		case 4:
		    cout<<"Order  : Chicken Burgar."<<endl;
			cout<<"Number of deals : "<<no_deals<<endl;
			cout<<"Price of each deal:   Rs.100/only."<<endl;
			cout<<"Total Price :"<<"Rs"<<100*no_deals<<" "<<"only."<<endl;
			cout<<"endl";
			cout<<"|*-----------------------THANK YOU FOR COMING---------------------------*|"<<endl;
		break;
		case 5:
			cout<<"Order  : Mutton Curry."<<endl;
			cout<<"Number of deals : "<<no_deals<<endl;
			cout<<"Price of each deal:   Rs.400/only."<<endl;
			cout<<"Total Price :"<<"Rs"<<400*no_deals<<" "<<"only."<<endl;
			cout<<"endl";
			cout<<"|*-----------------------THANK YOU FOR COMING---------------------------*|"<<endl;
		break;
		case 6:
			cout<<"Order  : Mutton Biryani."<<endl;
			cout<<"Number of deals : "<<no_deals<<endl;
			cout<<"Price of each deal:   Rs.300/only."<<endl;
			cout<<"Total Price :"<<"Rs"<<300*no_deals<<" "<<"only."<<endl;
			cout<<"endl";
			cout<<"|*-----------------------THANK YOU FOR COMING---------------------------*|"<<endl;
		break;
	}
}
