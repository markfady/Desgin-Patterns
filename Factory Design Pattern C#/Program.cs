using System;
namespace Vscode
{
    class Program
    {
        static void Main(string[] args)
        {
           
            TypeFactory obj =new TypeFactory();
            Console.WriteLine("Choose From menu1,menu2");
             string Type = Console.ReadLine();
            IMENU reg= obj.e(Type); //The input take from user then goes to Factory Class.
            reg.action();
       

        

        }
    }
}