#include <iostream>
using namespace std;
class BankAccount{
	private:
		int balance;
	public:
		//setter
		void setBalance(int n){
			if(n>0){
				balance = n;
			}
			else
			{
				cout<<"balance is in vaild"<<endl;
			}
			
		}
		int getBalance(){
			return balance;
		}
};
int main(){
	BankAccount b;
	b.setBalance(222);
	cout <<b.getBalance();
}
