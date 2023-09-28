#include "iter.h"

int	main()
{
    char carray[2] = { 'y', 'z' }; 
    iter(carray, 2, &do_smth);
    std::cout << std::endl;

    char const ccarray[2] = { 'y', 'z' }; 
    iter(ccarray, 2, &do_smth);
    std::cout << std::endl;
    
    int iarray[2] = { 1, 2 }; 
    iter(iarray, 2, &do_smth);
    std::cout << std::endl;
    
    int *piarray[2] = { 0 }; 
    iter(piarray, 2, &do_smth);
    std::cout << std::endl;
    
    float farray[2] = { 42.0, 1 }; 
    iter(farray, 2, &do_smth);

    return (0);
}
