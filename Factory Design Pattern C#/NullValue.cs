using System;

namespace Vscode
{
     class Nullvalue : IMENU 
    {
        
        public string getType()
        {
            return "invalid input";
        }
        public void action(){                           
            int exitCode=0;
            Console.WriteLine ("Please Rerun the program & Enter menu name accurate");
             Environment.Exit(exitCode);  //If the user entered wrong value The Program will terminate 

        }
    }

}



