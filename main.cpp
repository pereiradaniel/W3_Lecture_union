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
	ID theId = nullptr;	// 20 bytes
	theId.m_iId = 123456789;
	cout << theId.m_strId << "\n";

	theId.m_strId[0] = 'A';
	theId.m_strId[1] = '\0';
}
