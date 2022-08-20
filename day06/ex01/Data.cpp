#include "Data.hpp"

Data::Data(void)
{
    std::cout << "Data was created" << std::endl;
}

Data::~Data(void)
{
    std::cout << "Data was destroied" << std::endl;
}
                                        
const std::string   &Data::getData(void)
{
    return data;
}
void    Data::setData(const std::string str)
{
    data = str;
}
