
package singleton;


public class SingletonLock {

    
    private static SingletonLock instance;
    private SingletonLock(){}
    public static SingletonLock GetInstance(){
    
    synchronized(SingletonLock.class){      
        if(instance==null){
            instance=new SingletonLock();
        }
    }
    return instance;
            }
}


