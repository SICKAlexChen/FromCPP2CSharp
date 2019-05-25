using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Runtime.InteropServices; // needed by DllImport

namespace FromCPP2CSharp
{
    public class classTemplateCSharp
    {
        [DllImport("02Wrapper.dll")]
        public static extern int classTemplate_geta();

        [DllImport("02Wrapper.dll")]
        public static extern double classTemplate_getb();

        [DllImport("02Wrapper.dll")]
        unsafe public static extern bool classTemplate_getArray(ref int* _pD, ref int length);

        [DllImport("02Wrapper.dll")]
        unsafe public static extern bool classTemplate_deleteArray(int * _pD);

        [DllImport("02Wrapper.dll")]
        public static extern void classTemplate_seta(int _a);

        [DllImport("02Wrapper.dll")]
        public static extern void classTemplate_setb(double _b);

        [DllImport("02Wrapper.dll")]
        unsafe public static extern void classTemplate_setArray(int[] _pD, uint length);


        //------------------------------------------------------
        // class defination

        public classTemplateCSharp()
        {
            classTemplate_seta(1);
        }

        ~classTemplateCSharp()
        {
        }

        public int geta()
        {
            return classTemplate_geta();
        }

        public double getb()
        {
            return classTemplate_getb();
        }

        unsafe public bool getArray(ref int* value, ref int length)
        {
            classTemplate_getArray(ref(value), ref(length));

            return true;
        }

        unsafe public bool deleteArray(int* value)
        {
            classTemplate_deleteArray(value);

            return true;
        }

        public void seta(int _a)
        {
            classTemplate_seta(_a);
        }

        public void setb(double _b)
        {
            classTemplate_setb(_b);
        }

        unsafe public void setArray(int[] value, uint length)
        {
            classTemplate_setArray(value, length);
        }
    }
}
