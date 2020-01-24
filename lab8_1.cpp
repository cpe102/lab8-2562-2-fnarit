#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	


double EndofYear = 1,PrevBalance,Interest,Total,Payment,NewBalance,Percent;
	cout << "Enter initial loan: ";
	cin >> PrevBalance;
	cout <<  "Enter interest rate per year (%): ";
	cin >> Percent;
	cout << "Enter amount you can pay per year: ";
	cin >> Payment;
	

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	while(PrevBalance > 0 ){
		/*if(PrevBalance < Payment){
			Payment = Total;
		}*/
		Interest = PrevBalance * (Percent/100);
		Total = PrevBalance + Interest;
		NewBalance = Total - Payment;
		if(PrevBalance < Payment){
			Payment = Total;
			NewBalance = 0;
		}
		

		cout << fixed << setprecision(2); 
		cout << setw(13) << left << EndofYear; 
		cout << setw(13) << left << PrevBalance;
		cout << setw(13) << left << Interest;
		cout << setw(13) << left << Total;
		cout << setw(13) << left << Payment;
		cout << setw(13) << left << NewBalance;
		cout << "\n";	
		
		PrevBalance = NewBalance;
		EndofYear++;
	}
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	/*cout << fixed << setprecision(2); 
	cout << setw(13) << left << EndofYear; 
	cout << setw(13) << left << PrevBalance;
	cout << setw(13) << left << Interest;
	cout << setw(13) << left << Total;
	cout << setw(13) << left << Payment;
	cout << setw(13) << left << NewBalance;
	cout << "\n";	*/
	
	return 0;
}
