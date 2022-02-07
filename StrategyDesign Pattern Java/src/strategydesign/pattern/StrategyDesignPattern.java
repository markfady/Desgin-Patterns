
package strategydesign.pattern;

public class StrategyDesignPattern {


    public static void main(String[] args) {
       objectControl object1= new objectControl();
       object1.setClasses(new Business());
       object1.makeClass();
    }
    
}
