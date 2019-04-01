using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace myCSApp
{
    class Program
    {
        static void Main(string[] args)
        {
            myCLR.MathFuncsWrap myMathFuncs = new myCLR.MathFuncsWrap();

            Console.WriteLine(myMathFuncs.Add(1.2, 3.4));
            Console.Read();
        }
    }
}
