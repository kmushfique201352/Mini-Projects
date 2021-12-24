package Question_2;

import java.util.Scanner;
import java.util.Random;
public class BankingApplication {
	private int accountNumber;
	private String name,pass;
	private double balance;
	
	BankingApplication(int accountNumber,String name,double balance,String pass){
		this.setAccountNumber(accountNumber);
		this.setName(name);
		this.setBalance(balance);
		this.setPass(pass);
	}
	
	void setName(String name) {
		this.name=name;
	}
	String getName() {
		return name;
	}
	
	void setAccountNumber(int accountNumber) {
		this.accountNumber=accountNumber;
	}
	int getAccountNumber() {
		return accountNumber;
	}
	
	void setBalance(double balance) {
		this.balance=balance;
	}
	double getBalance() {
		return balance;
	}
	
	void setPass(String pass) {
		this.pass=pass;
	}
	String getPass() {
		return pass;
	}
	

}
class Function {
	int rNumber,index=0,flag=0,checkAN,again=0,d;
	double am;
	String Pass,na,checkAP;
	Scanner sc=new Scanner(System.in);
	Random random=new Random();
	BankingApplication[] bankingApplication=new BankingApplication[100];
	
	void createNewAccount() {
		System.out.print("\nEnter name: ");
		na=sc.nextLine();
		
		System.out.print("Enter deposit amount: ");
		am=sc.nextDouble();
		
		System.out.print("Your account number is: ");
		accountNumberGenerator();
		
		System.out.print("Enter a password: ");
		Pass=sc.next();
		System.out.println();
		sc.nextLine();
		
		BankingApplication bApp=new BankingApplication(rNumber,na,am,Pass);
		bankingApplication[index]=bApp;
		index++;
	}
	void depositMoney() {
		System.out.print("Enter account number: ");
		checkAN=sc.nextInt();
		System.out.print("Enter password: ");
		checkAP=sc.next();
		checkLogin(checkAN,checkAP);
		if(again==1) {
			System.out.print("Enter deposit amount: ");
			double depA=sc.nextInt();
			
			am=bankingApplication[d].getBalance()+depA;
			
			bankingApplication[d].setBalance(am);
			
			again=0;
		}
	}
	void withDrawMoney() {
		System.out.print("Enter account number: ");
		checkAN=sc.nextInt();
		System.out.print("Enter password: ");
		checkAP=sc.next();
		checkLogin(checkAN,checkAP);
		if(again==1) {
			System.out.print("Enter withdraw amount: ");
			double depA=sc.nextInt();
			am=bankingApplication[d].getBalance()-depA;
			bankingApplication[d].setBalance(am);
			again=0;
		}
	}
	void checkBalance() {
		System.out.print("Enter account number: ");
		checkAN=sc.nextInt();
		System.out.print("Enter password: ");
		checkAP=sc.next();
		checkLogin(checkAN,checkAP);
		if(again==1) {
			System.out.print("Your balance is: "+bankingApplication[d].getBalance());
			again=0;
		}
	}
	void checkLogin(int checkAn,String checkAp) {
		int ok=0;
		for(int i=0;i<index;i++) {
			if(bankingApplication[i].getAccountNumber()==checkAn) {
				if(bankingApplication[i].getPass().equals(checkAp)) {
					ok=1;
					d=i;
					break;
				}
			}
		}
		if(ok==1) {
			System.out.println("\nLogging in....");
			System.out.println("Logged in");
			again=1;
		}else {
			System.out.println("Invalid");
		}
	}
	
	int accountNumberGenerator() {
		rNumber=1000+random.nextInt(9000);
		System.out.println(rNumber);
		return rNumber;
	}
	
	void menu() {
		System.out.println("\n    Welcome to Banking Application");
		System.out.println("\n\t1.Create new account");
		System.out.println("\t2.Deposit money");
		System.out.println("\t3.Withdraw money");
		System.out.println("\t4.Check balance");
		System.out.println("\t5.Exit\n");
	}
	void display() {
		for(int i=0;flag!=1;i++) {
			menu();
			System.out.println("\n Select option to proceed: ");
			int select=sc.nextInt();
			sc.nextLine();
			switch(select) {
			case 1:
				createNewAccount();
				break;
			case 2:
				depositMoney();
				break;
			case 3:
				withDrawMoney();
				break;
			case 4:
				checkBalance();
				break;
			case 5:
				flag=1;
				System.out.println("\n\nThank You!!");
				break;
			}
		}
	}
	
}
class Main {

	public static void main(String[] args) {
		Function f=new Function();
		for(int k=0;k<2;k++) {
			f.createNewAccount();
		}
		f.display();

	}

}
