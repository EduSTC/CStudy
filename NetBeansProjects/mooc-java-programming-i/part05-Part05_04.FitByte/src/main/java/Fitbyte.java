/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author edu
 */
public class Fitbyte {
    private int age;
    private int restingHeartRate; 
    
    
    
    
    public Fitbyte(int age, int restingHeartRate) {
        this.restingHeartRate = restingHeartRate;
        this.age = age;
        
    }
    
    public double targetHeartRate(double percentual) {
        return ((206.3 - (0.711 * this.age)) - this.restingHeartRate) * percentual + this.restingHeartRate;
    }
    
    
    
}
