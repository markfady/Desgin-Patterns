
package singleton;


public class Singleton {

    
    public static void main(String[] args) {
      Singletonfirstype object1= Singletonfirstype.GetInstance();  //Check First Type
      Singletonfirstype object2=Singletonfirstype.GetInstance();
      
      SingletonLock object3= SingletonLock.GetInstance(); //Check Second Type
      SingletonLock object4=SingletonLock.GetInstance();
      
      SingletonDouble object5= SingletonDouble.GetInstance(); //Check Third Type
      SingletonDouble object6=SingletonDouble.GetInstance();
      if(object1==object2){
          System.out.println("Equal 'FirstType'");
      }
      else{
          System.out.println("NotEqual ");
      }
      if(object3==object4){
          System.out.println("Equal 'Lock Type'");
      }
      else{
          System.out.println("NotEqual ");
      }
      if(object5==object6){
          System.out.println("Equal 'DoubleLock Type'");
      }
      else{
          System.out.println("NotEqual ");
      }
    }
    
}
