using System;

namespace Vscode
{
     class menu1 : IMENU 
    {
        public string getType()
        {
          return "MENU1";
        }
        public void action(){
          Console.WriteLine("This is Menu1 Desserts");

        }
    }

}



