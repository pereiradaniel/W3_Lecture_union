#include <iostream>
#include <string>
using namespace std;

union ID
{
	char m_strId[20];
	long long m_iId;
};

int main()
{
	ID theId;
}