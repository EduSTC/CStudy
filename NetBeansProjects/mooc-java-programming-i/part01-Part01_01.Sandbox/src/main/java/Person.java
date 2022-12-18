/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author edu
 */
public class Person {
    private String name;
    private int age;
    private int weight;
    private int height;
    
    public Person(String initialName) {
        this.age = 0;
        this.name = initialName;
        this.height = 0;
        this.weight = 0;
        
    }
    
    public String toString() {
        return this.name + ", age " + this.age + " years";
    }
    
    public void growOlder() {
        this.age = this.age + 1;
    }
    
    public int returnAge() {
        return this.age;
    }
    
    public boolean isOfLegalAge() {
        if (this.age < 18) {
            return false;
        } 
        
        return true;
    }
    
    public String getName() {
        return this.name;
    }
    
    public void setHeight(int newHeight) {
        this.height = newHeight;
    }
    
    public void setWeight(int newWeight) {
        this.weight = newWeight;
    }
    
    public double bodyMassIndex() {
        double heigthPerHundred = this.height / 100.0;
        return this.weight / (heigthPerHundred * heigthPerHundred);
    }
    
}
