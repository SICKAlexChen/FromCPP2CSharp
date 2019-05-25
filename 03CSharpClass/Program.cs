using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FromCPP2CSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            classTemplateCSharp t = new classTemplateCSharp();
            Console.WriteLine("geta : {0}", t.geta());
            Console.WriteLine("getb : {0}", t.getb());

            // print vec
            unsafe
            {
                int* a = null;
                int len = 0;
                t.getArray(ref(a), ref(len));
                for (UInt32 i = 0; i < len; ++i)
                {
                    Console.WriteLine("getb : {0}", a[i]);
                }
                t.deleteArray(a);
            }

            //set vec
            unsafe
            {
                int[] v = { 1, 5, 9 };
                t.setArray(v, 3);
            }

            // print vec
            unsafe
            {
                int* a = null;
                int len = 0;
                t.getArray(ref (a), ref (len));
                for (UInt32 i = 0; i < len; ++i)
                {
                    Console.WriteLine("getb : {0}", a[i]);
                }
                t.deleteArray(a);
            }

            Console.WriteLine("Press any key to exit.");
            Console.ReadKey();

        }
    }
}
