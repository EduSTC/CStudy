package contabancaria.dominio;

public class BankAccount {
	private double balance;
	private String name;
	
	
	
	public BankAccount(String name) {
		this.name = name;
		this.balance = 0;
	}
	
	public double getBalance() {
		return this.balance;		
	}
	
	public String getName() {
		return this.name;
	}
	
	public boolean canTakeMoney(double money) {
		if (money < 0 || money > this.balance) {
			return false;
		}
		return true;
	}
	
	public boolean canAddMoney(double money) {
		if (money < 0 ) {
			return false;
		}
		return true;
	}
	
	public void addMoney(double money) {
		if (canAddMoney(money)) {
			this.balance += money;
		} else {
			System.out.println("Sorry, it wasn't possible to add.");
		}
	}
	
	public void takeMoney(double money) {
		if (canTakeMoney(money)) {
			this.balance -= money;
		} else {
			System.out.println("Sorry, it wasn't possible to withdraw.");
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	public String toString() {
		return "Hello " + this.name + ", your balance is: $" + this.balance;
		
	}
	

}
