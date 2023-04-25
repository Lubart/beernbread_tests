
#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>

#include <numbers> // std::numbers
#include <iomanip>


using namespace std;
using namespace boost::lambda;
typedef istream_iterator<int> in;

int add(int x, int y);

int main()
{
    cout << "Adding 2 and 9 together gives you: " << add(2, 9) << endl;

    //for_each(in(cin), in(), cout << (_1 * 3) << " " );


    std::cout << std::fixed << std::setprecision(20);
    std::cout << "float       " << std::numbers::pi_v<float> << std::endl;
    std::cout << "double      " << std::numbers::pi << std::endl;
    std::cout << "long double " << std::numbers::pi_v<long double> << std::endl;
    std::cout << "exact       " << "3.141592653589793238462643383279502884197169399375105820974944" << std::endl;

    return 0;	
}