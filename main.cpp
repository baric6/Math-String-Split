/*
Baric
cis 1202
Cutting Strings and reversing them
july-27-2018
*/

//                         **Instructions**
//                         ---------------
//**declare a string that take in exspretion :: 34 * 4 + 5 / (4 + 5)**
//**ex.. vector<string> split(const string &exspretion)
//                    **split("35 * 4 + 5 / (4 + 5)") //is a string function argument
//**disply in reverse order**
//**in function**
//**in a for-loop:: if char is a digit append to digit string
//               :: store number string in a vector and delete number string if **size > 0**
//               :: if char has space add to vector element after number element
//
//**after loop :: if size of the number string > 0, add to vector

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

//prototype
vector<string> splitz(const string &espr);
 
int main()
{
	//vector/array mathz
	vector<string> mathz;

	//where whole string is stored
	string esprz;

	cout << "XXXXXXXXXXXXXXXXXXX" << endl;
	cout << "X String Spliting X" << endl;
	cout << "XXXXXXXXXXXXXXXXXXX" << endl << endl;

	//enter string
	cout << "Please enter a space after Expression...." << endl;
	cout << "Enter an Expression: ";
	getline(cin, esprz);

	//store split string into mathz
	mathz = splitz(esprz);

	cout << endl;
	cout << "Forward Expression" << endl;
	for (int i = 0; i < mathz.size(); i++)
	{
		//print out string in a array forward
		cout <<"\t"<< mathz[i] << endl;
	}

	cout << endl;

	//reverse(mathz.rbegin(), mathz.rend());//kept over flowing vector bounds
	//reverse vector look up
	cout << "Backward Expression" << endl;
	for (int i = mathz.size(); i > 0; --i)
	{
		cout <<" "<< mathz[i -1] << " ";
	}

	cout << endl << endl;

	system("pause");
	return 0;
}
vector<string> splitz(const string &espr)
{
	//vector and cut number string
	vector<string> math;
	string numberz = "";

	//loop threw array
	for (int i = 0; i < espr.size(); i++)
	{
		//searching for numbers in string and sets to numberz
		if (espr[i] >= '0' && espr[i] <= '9')
		{
			numberz = numberz + espr[i];
		}
		//searching for non numbers in string and sets to word
		else if (espr[i] != ' ')
		{
			string wordz = "";
			wordz = wordz + espr[i];
			math.push_back(wordz);
		}
		//if numberz is greater then zero put numberz in next element
		else 
		{
			if (numberz.size() > 0)
			{
				math.push_back(numberz);
				numberz = "";
			}
		}
	}
	//return vector math
	return math;
}



