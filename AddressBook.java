package Question_1;

import java.util.Scanner;
class AddressBook {
	String name,address;
	int number;
	AddressBook(String name,String address,int number){
		this.name=name;
		this.address=address;
		this.number=number;
	}
}

class Functions {
	int index,flag=0;
	Scanner sc=new Scanner(System.in);
	
	AddressBook[] addressBook;
	
	Functions(){
		addressBook=new AddressBook[100];
	}
	
	void createNewRecord() {
			System.out.print("Enter name in AddressBook: ");
			String na=sc.nextLine();
			System.out.print("Enter address in AddressBook: ");
			String ad=sc.nextLine();
			System.out.print("Enter number in AddressBook: ");
			int nu=sc.nextInt();
			sc.nextLine();
			
			AddressBook ab=new AddressBook(na,ad,nu);
			addressBook[index]=ab;
			index++;
	}
	void updateRecord() {
		int i,found=0;
		System.out.println("\nEnter name");
		String searchName=sc.nextLine();
		int again=index;
		for(i=0;i<again;i++) {
			if(addressBook[i].name.equals(searchName)) {
				System.out.println("\n"+addressBook[i].name);
				System.out.println(addressBook[i].address);
				System.out.println(addressBook[i].number+"\n");
				found=1;
				break;
			}
		}
		if(found==0) {
			System.out.println("\n"+"Name not found!"+"\n");
		}
		System.out.println("\n"+"1.Name");
		System.out.println("2.Address");
		System.out.println("3.Number");
		System.out.println("4.Exit"+"\n");
		System.out.println("\n"+"Enter what to update: ");
		int update=sc.nextInt();
		sc.nextLine();
		switch(update) {
		case 1:
			System.out.println("\n"+"You want to update name"+"\n");
			System.out.print("\n"+"Enter new name: ");
			String na=sc.nextLine();
			addressBook[i].name=na;
			System.out.println("\n"+"Update name is successful"+"\n");
			break;
		case 2:
			System.out.println("\n"+"You want to update address"+"\n");
			System.out.print("\n"+"Enter new address: ");
			String ad=sc.nextLine();
			addressBook[i].address=ad;
			System.out.println("\n"+"Update address is successful"+"\n");
			break;
		case 3:
			System.out.println("\n"+"You want to update number"+"\n");
			System.out.print("\n"+"Enter new number: ");
			int nu=sc.nextInt();
			sc.nextLine();
			addressBook[i].number=nu;
			System.out.println("\n"+"Update number is successful"+"\n");
			break;
		case 4:
			break;
		}
		
	}
	void deleteRecord() {
		System.out.println("\n"+"Enter name to delete: ");
		String findName=sc.nextLine();
		for(int i=0;i<index;i++) {
			if(addressBook[i].name.equals(findName)) {
				for(int j=i;j<index;j++) {
						addressBook[j]=addressBook[j+1];
				}
				index--;
				break;
			}
		}
		
	}
	void displayRecord() {
		for(int i=0;i<index;i++) {
			System.out.println("\n"+addressBook[i].name);
			System.out.println(addressBook[i].address);
			System.out.println(addressBook[i].number+"\n");
		}
	}
	void menu() {
		System.out.println("\n"+"1.Create New Record");
		System.out.println("2.Update Record");
		System.out.println("3.Delete Record");
		System.out.println("4.Display Record");
		System.out.println("5.Exit"+"\n");
	}
	void display() {
		for(int k=0;flag!=1;k++) {
			menu();
			System.out.println("\nChoose your option: ");
			int select=sc.nextInt();
			sc.nextLine();
			switch(select) {
			case 1:
				createNewRecord();
				break;
			case 2:
				updateRecord();
				break;
			case 3:
				deleteRecord();
				break;
			case 4:
				displayRecord();
				break;
			case 5:
				flag=1;
				System.out.println("\n\n"+"Thank you!!");
				break;
			}
		}
	}
}
class Main {
	public static void main(String[] args) {
		
		Functions f=new Functions();
		for(int k=0;k<2;k++) {
			f.createNewRecord();
		}
			f.display();
	}
}

