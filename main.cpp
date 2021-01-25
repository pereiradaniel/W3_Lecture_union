#include <iostream>
#include <string>
using namespace std;

union ID
{
	char m_strId[20];	// 20 bytes
	long long m_iId;	// 8 bytes
};

int main()
{
	ID theId;			// 20 bytes
}