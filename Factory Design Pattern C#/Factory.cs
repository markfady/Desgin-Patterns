using System.Reflection;
using System;
using System.Linq;
using System.Text;
namespace Vscode
{   
    public  class TypeFactory
    { 
        Dictionary<string,Type> obj=new Dictionary<string, Type>(); //Dictionary to carry the name of class and the type itself
        public TypeFactory()
        {
          Type[] types= Assembly.GetExecutingAssembly().GetTypes().Where //Get all types of the program where they are implement IStudent interface
          (t => typeof(IMENU).IsAssignableFrom(t)).ToArray(); //all data stored in array to save them in Dictionary
          foreach(Type t in types) {
            obj.Add(t.Name,t);                     //Key=t.name  , value=t                      //Put this type in dictionray 
        }
        }
      public IMENU e (string input){
          if(obj.ContainsKey(input))       //if the input from the dictionary
            return Activator.CreateInstance(obj[input])as IMENU; //Then return object from the input 
            return new Nullvalue();         //if the input not from the items in dictionray then terminate
           
      }
    } 
    
}

        
            
        
    
