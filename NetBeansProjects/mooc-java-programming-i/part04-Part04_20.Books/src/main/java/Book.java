/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author edu
 */
public class Book {
    private String name;
    private int pages;
    private int year;
    
    
    public Book(String name, int numberPages, int pubYear) {
        this.name = name;
        this.pages = numberPages;
        this.year = pubYear;
    }
    
    public String getName() {
        return name;
    }
    
    public String toString() {
        return name + ", " + pages + " pages, " + year;
         
    }
    
}
