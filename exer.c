# phy
long fun();
other_fun();
calling_fun()
{
   long test1;
   register test2;
   
   test1 = fun();
   if (test1 > 0)
          test2 = 0;
   else
          test2 = other_fun();
    return test2;      
}
