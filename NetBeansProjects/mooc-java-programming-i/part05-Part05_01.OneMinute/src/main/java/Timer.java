/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author edu
 */
public class Timer {
    private ClockHand seconds;
    private ClockHand hundred_seconds;
    
    public Timer(){
        this.hundred_seconds = new ClockHand(100);
        this.seconds = new ClockHand(60);
        
    }
    
    public String toString() {
        return seconds + ":" + hundred_seconds;
    }
    
    public void advance() {
        this.hundred_seconds.advance();
        
        if (this.hundred_seconds.value() == 0) {
            this.seconds.advance();
        }
        
        
    }
    
    
    
}
