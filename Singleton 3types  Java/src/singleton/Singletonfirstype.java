
package singleton;
public class Singletonfirstype {
     private static Singletonfirstype instance;
    private Singletonfirstype(){}
    public static Singletonfirstype GetInstance(){
    
        if(instance==null){
            instance=new Singletonfirstype();
        }
    
    return instance;
}
}