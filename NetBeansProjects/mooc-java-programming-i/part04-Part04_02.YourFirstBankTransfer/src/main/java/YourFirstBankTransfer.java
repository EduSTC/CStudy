
public class YourFirstBankTransfer {

    public static void main(String[] args) {
        // Do not touch the code in Account.java
        // write your program here
        Account matthewsAccount = new Account("Matthews account", 1000);
        System.out.println(matthewsAccount.toString());
        Account myAccount = new Account("My account", 0);
        System.out.println(myAccount.toString());
        matthewsAccount.withdrawal(100.0);
        myAccount.deposit(100.0);
        System.out.println(matthewsAccount.toString());
        System.out.println(myAccount.toString());
    }
}