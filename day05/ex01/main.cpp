#include <iostream>
#include "Bureaucrat.hpp"

void    testOne(void)
{
    Bureaucrat  a("Bob", 2);
    Bureaucrat  b("Lesha", 149);
    Bureaucrat  c = a;
                                     
    std::cout << a << std::endl;
    for (int i = 0; i < 2; ++i)
    {
        a.upGrade();
        std::cout << a << std::endl;
    }
    std::cout << b << std::endl;
    for (int i = 0; i < 2; ++i)
    {
       b.downGrade();
        std::cout << b << std::endl;
    }
    std::cout << c << std::endl;
    Bureaucrat  d("Emely", 1000);
    Bureaucrat  e("Lesha", -1);
//    Bureaucrat  b;
//    a = c;
}

void    testTwo(void)
{
    Bureaucrat  a("Bob", 10);
    Form        arr[] = {
        Form("form 1", 1, 1),
        Form("form 2", 10, 10),
        Form("form 3", 150, 150)
    };
//    Form        four("form 4", 0, 0);
//    Form        five("form 5", 151, 151);
    for (int i = 0; i < 3; ++i)
    {
        a.signForm(arr[i]);
        if (arr[i].getSign() == 1)
            std::cout << "Yes" << std::endl;
        else
            std::cout << "No" << std::endl;
    }
    Form    b("form 4", 10, 10);

    b.beSigned(a);
    if (b.getSign() == 1)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;
}

int main(void)
{
    try
    {
//        testOne();
        testTwo();
    }
   catch (std::exception &a)
    {
        std::cout << a.what() << std::endl;
    }
    return 0;
}
