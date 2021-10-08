#include "std_lib_facilities.h"

// Converter
   double converter(double val, string unit)
   {
      if (unit == "m" || unit == "cm" || unit == "in" || unit == "ft")
      {
         if (unit == "m")
         {
            return val;
         }
         else if (unit == "cm")
         {
            return val*0.01;
         }
         else if (unit == "in")
         {
            return val*2.54*0.01;
         }
         else if (unit == "ft")
         {
            return val*2.54*0.01*12;
         }
         else error("Error, wrong unit!");
      }   
      return 0;
   }

int main()
{
   // 1.
   /* 
   int a = 0,b = 0;
   cout << "Adjon meg két egész számot!" << endl;
   while (cin >> a >> b)
   {
      cout << a << " " << b;
      if (a == '|')
         break;
      else if (b == '|')
         break;
   }
   */

   // 2.
   /* 
   int a = 0,b = 0;
   cout << "Adjon meg két egész számot!" << endl;
   while (cin >> a >> b)
   {
      if (a == '|')
         break;
      else if (b == '|')
         break;

      if (a > b)
      {
         cout << "The smaller value is: " << b << endl;
         cout << "The larger value is: " << a << endl;
      }
      else if (a < b)
      {
         cout << "The smaller value is: " << a << endl;
         cout << "The larger value is: " << b << endl;
      }
   }
   */

   // 3.
   /*
   int a = 0,b = 0;
   cout << "Adjon meg két egész számot!" << endl;
   while (cin >> a >> b)
   {
      if (a == '|')
         break;
      else if (b == '|')
         break;

      if (a > b)
      {
         cout << "The smaller value is: " << b << endl;
         cout << "The larger value is: " << a << endl;
      }
      else if (a < b)
      {
         cout << "The smaller value is: " << a << endl;
         cout << "The larger value is: " << b << endl;
      }
      else
      {
         cout << "The numbers are equal." << endl;
      }
   }
   */

   // 4.

   /* double a = 0,b = 0;
   double diff= a - b;
   cout << "Adjon meg két számot!" << endl;
   while (cin >> a >> b)
   {
      if (a == '|')
         break;
      else if (b == '|')
         break;

      if (a > b)
      {
         cout << "The smaller value is: " << b << endl;
         cout << "The larger value is: " << a << endl;
      }
      else if (a < b)
      {
         cout << "The smaller value is: " << a << endl;
         cout << "The larger value is: " << b << endl;
      }
      else if (a == b)
      {
         cout << "The numbers are equal." << endl;
      }
      if ( diff == 0.01)
      {
         cout << "The numbers are almost equal." << endl;
      }
   }
   */

   // 6. - 11.
   vector<double> values;
   double val = 0;
   string unit = " ";
   double max = 0, min = -1;
   double sum = 0;
   cout << "Enter a value with a unit! (the unit can be: m, cm, in, ft)\n" << endl;
   while (cin >> val >> unit)
   {
      if ( unit == "m" || unit == "cm" || unit == "in" || unit == "ft")
      {
         values.push_back(converter(val, unit));
         sum += converter(val, unit);
         sort(values);
         
      }
      else error("Error, wrong unit!");

      if (val > max)
      {
         max = val;
      }
      if (val < min)
      {
         min = val;
      }

      cout << "Smallest number: " << min << endl;
      cout << "Largest number: " << max << endl;
      cout << "Number of values: " << values.size() << endl;
      cout << "Sum of values: " << sum << endl;
      cout << "Values in increasing order: " << endl;
      for (int i = 0; i < values.size(); ++i)
      {
         cout << values[i] << " m " << endl;
      }


   }
   return 0;
}