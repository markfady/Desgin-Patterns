
package singleton;

public class SingletonDouble {
   
    
    private static SingletonDouble instance;
    private SingletonDouble(){}
    public static SingletonDouble GetInstance(){
    
        
        if(instance==null){
            synchronized(SingletonLock.class){    
                
            }}
         if(instance==null){
            instance=new SingletonDouble();
        }
    
    return instance;
            }
}




