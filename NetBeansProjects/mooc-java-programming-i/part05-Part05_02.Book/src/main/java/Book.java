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
    private String title;
    private int pages;
    private String author;
    
    
    public Book(String author, String title, int pages) {
        this.title = title;
        this.pages = pages;
        this.author = author;
    }
    
    public String getAuthor() {
        return this.author;
    }
    
    public String getName() {
        return this.title;
    }
    
    public int getPages() {
        return this.pages;
    }
    
    public String toString() {
        return this.author + ", " + this.title + ", " + this.pages + " pages";
    }
}
