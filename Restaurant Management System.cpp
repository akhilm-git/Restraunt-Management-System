#include<iostream>
using namespace std;
int main(){
	int order,noofdeals;
	cout<<"--------------MENU------------"<<endl;
	cout<<endl;
	cout<<"1 Chowmein        Rs.100 only."<<endl;
	cout<<"2 Burger          Rs.80  only."<<endl;
	cout<<"3 Pizza           Rs.200 only."<<endl;
	cout<<"4 Momos           Rs.70  only."<<endl;
	cout<<"5 Spring Rolls    Rs.50  only."<<endl;
	cout<<"6 Coke            Rs.40  only."<<endl;
	cout<<endl;
	cout<<"Please select the order number."<<endl;
	cin>>order;
	cout<<"Please enter the number of deals."<<endl;
	cin>>noofdeals;
	cout<<endl;
	switch(order){
		case 1:
			cout<<"Order : Chowmein"<<endl;
			cout<<"Number of deals : "<<noofdeals<<endl;
			cout<<"Price of each deal : Rs. 100 only."<<endl;
			cout<<"Total price "<<"Rs "<<100*noofdeals<<" "<<"only."<<endl;
			cout<<endl;
			cout<<"------Thankyou for coming------"<<endl;
			break;
		case 2:
			cout<<"Order : Burger"<<endl;
			cout<<"Number of deals : "<<noofdeals<<endl;
			cout<<"Price of each deal : Rs.80 only."<<endl;
			cout<<"Total price "<<"Rs "<<80*noofdeals<<" "<<"only."<<endl;
			cout<<endl;
			cout<<"------Thankyou for coming------"<<endl;
			break;
		case 3:
			cout<<"Order : Pizza"<<endl;
			cout<<"Number of deals : "<<noofdeals<<endl;
			cout<<"Price of each deal : Rs.200 only."<<endl;
			cout<<"Total price "<<"Rs "<<200*noofdeals<<" "<<"only."<<endl;
			cout<<endl;
			cout<<"------Thankyou for coming------"<<endl;
			break;
		case 4:
			cout<<"Order : Momos."<<endl;
			cout<<"Number of deals : "<<noofdeals<<endl;
			cout<<"Price of each deal : Rs.70 only."<<endl;
			cout<<"Total price "<<"Rs "<<70*noofdeals<<" "<<"only."<<endl;
			cout<<endl;
			cout<<"------Thankyou for coming------"<<endl;
			break;
		case 5:
			cout<<"Order : Spring Rolls."<<endl;
			cout<<"Number of deals : "<<noofdeals<<endl;
			cout<<"Price of each deal : Rs.50 only."<<endl;
			cout<<"Total price "<<"Rs "<<50*noofdeals<<" "<<"only."<<endl;
			cout<<endl;
			cout<<"------Thankyou for coming------"<<endl;
			break;
		case 6:
			cout<<"Order : Coke"<<endl;
			cout<<"Number of deals : "<<noofdeals<<endl;
			cout<<"Price of each deal : Rs.40 only."<<endl;
			cout<<"Total price "<<"Rs "<<40*noofdeals<<" "<<"only."<<endl;
			cout<<endl;
			cout<<"------Thankyou for coming------"<<endl;
			break;
		default :
			cout<<"Invalid Input."<<endl;
	}
	return 0;
}
