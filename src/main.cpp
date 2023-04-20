
#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;
using namespace boost::lambda;
typedef istream_iterator<int> in;

int add(int x, int y);

int main()
{
    cout << "Adding 2 and 9 together gives you: " << add(2, 9) << endl;

    for_each(in(cin), in(), cout << (_1 * 3) << " " );


    return 0;	
}