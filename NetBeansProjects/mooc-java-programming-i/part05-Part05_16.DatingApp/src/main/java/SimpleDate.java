
public class SimpleDate {

    private int day;
    private int month;
    private int year;

    public SimpleDate(int day, int month, int year) {
        this.day = day;
        this.month = month;
        this.year = year;
    }

    @Override
    public String toString() {
        return this.day + "." + this.month + "." + this.year;
    }

    public boolean before(SimpleDate compared) {
        if (this.year < compared.year) {
            return true;
        }

        if (this.year == compared.year && this.month < compared.month) {
            return true;
        }

        if (this.year == compared.year && this.month == compared.month &&
                 this.day < compared.day) {
            return true;
        }

        return false;
    }
    
    public void advance() {
        this.advance(1);
        if (this.day > 30) {
            this.day = 1;
            this.month += 1;
            if (this.month > 12) {
                this.month = 0;
                this.year += 1;
            }
        }
    }
    
    public void advance(int howManyDays) {
        this.day += howManyDays;
        if (this.day > 30) {
            this.month += this.day / 30;
            this.day = this.day % 30;
            
            if (this.month > 12) {
                this.year += this.month / 12;
                this.month = this.month % 12;
            }
        }
    }
    
    public SimpleDate afterNumberOfDays(int days) {
        SimpleDate newDate = new SimpleDate(day, month, year);
        newDate.day = newDate.day + days;
        if (newDate.day > 30) {
            newDate.month = newDate.month + (newDate.day / 30);
            newDate.day = newDate.day % 30;
      
            if (newDate.month > 12) {
                newDate.year += newDate.month / 12;
                newDate.month = newDate.month % 12;
                
            }
        }
        return newDate;
    }

}
