
public class Sandbox {

    public static void main(String[] args) {
        // Write your program here
        Person pekka = new Person("Pekka");
        Person antti = new Person("Antti");

        int i = 0;
        while (i < 30) {
            pekka.growOlder();
            i = i + 1;
        }

        antti.growOlder();

        System.out.println("");

        if (antti.isOfLegalAge()) {
            System.out.print(antti.getName() + " is of legal age: ");
            System.out.println(antti);
        } else {
            System.out.print(antti.getName() + " is underage: ");
            System.out.println(antti);
        }

        if (pekka.isOfLegalAge()) {
            System.out.print(pekka.getName() + " is of legal age: ");
            System.out.println(pekka);
        } else {
            System.out.print(pekka.getName() + " underage: ");
            System.out.println(pekka);
        }
    }
}
