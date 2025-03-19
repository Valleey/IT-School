#include <iostream>
#include <set>
#include <vector>
#include <iterator>
#include <numeric>
#include <algorithm>
int main()
{
	//Problema 1
	/*std::vector < int > v = { 2,4,6,8,10 };
	auto it = v.begin();
	int suma = std::accumulate(v.begin(), v.end(), 0);
	std::cout << "2+4+6+8+10=" << suma;*/

	//Problema 2
	/*std::vector<int>v = { 1,2,3,4,5 };
	std::reverse(v.begin(), v.end());
	for (int i : v)
	{
		std::cout << i<< " ";
	}
	return 0;*/
	std::vector<int>v = { 1,2,2,3,4,4,5 };
	v.erase(v.begin() + 1, v.end() - 1);

}