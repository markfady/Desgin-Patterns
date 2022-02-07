using System;
namespace Vscode
{
    public class Program
    {
        public static void Main(string[] args)
        {
    
            Target obj = new Adapter();
            obj.Request();
    
            Console.ReadKey();
        }
    }
}