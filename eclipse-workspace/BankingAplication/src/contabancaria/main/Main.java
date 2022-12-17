package contabancaria.main;

import java.util.Scanner;

import contabancaria.dominio.BankAccount;

public class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		
		
		System.out.println("Welcome to the bank!");
		System.out.println("Do you have an account? (Y/N)");
		String newUser = String.valueOf(scan.nextLine());
		if (newUser.equals("Y")) {
			System.out.println("Nice to see you again!");
		} else {
			System.out.println("No problem!");
		}
		System.out.println("What's your name?");
		String userName = String.valueOf(scan.nextLine());
		BankAccount account = new BankAccount(userName);
		while (true) {
			System.out.println("What would you like to do?");
			System.out.println("1. Add money\n2. Take money\n3. Check your balance\n4. Quit ");
			int option = Integer.valueOf(scan.nextLine());
			if (option == 1) {
				System.out.println("How much would you like to add?");
				double money = Integer.valueOf(scan.nextLine());
				account.addMoney(money);
				
			} else if (option == 2) {
				System.out.println("How much would you like to take?");
				double money = Integer.valueOf(scan.nextLine());
				account.takeMoney(money);
			} else if (option == 3) {
				System.out.println(account);
			} else if (option == 4) {
				System.out.println("Have a great day!");
				break;
			}
		}
		
		
		
		
		
		
		
	}

}
