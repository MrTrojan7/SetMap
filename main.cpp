#include "AllLibraries.h"

int main()
{
	////////////////
	// set
	///////////////
	set <int> st;
	cout << "<set>\n";

	// add 5 elem 	
	for (int i = 0; i < 5; i++)
		st.insert(i + 1);
	set<int>::iterator it = st.begin();

	// print
	for (; it != st.end(); it++)
		cout << *it << " ";
	cout << "\n";

	// delete 2 elem
	st.erase(4);
	st.erase(3);
	for (it = st.begin(); it != st.end(); it++)
		cout << *it << " ";
	cout << "\n";

	// find elem 
	it = st.find(2);
	cout << *it << " " << "\n";

	//  find elem
	it = st.find(8);
	//cout << *it <<"\n"; // bad

	// print
	for (it = st.begin(); it != st.end(); it++)
		cout << *it << " ";
	cout << "\n";

	//////////////////////////////////
	// map
	//////////////////////////////////
	cout << "<map>\n";

	map <int, string> mp;

	// add elem	
	mp.insert(pair < int, string>(2, "two"));
	mp.insert(pair < int, string>(1, "one"));
	mp.insert(pair < int, string>(4, "four"));
	mp.insert(pair < int, string>(3, "three"));
	mp.insert(pair < int, string>(5, "five"));
	map <int, string> ::iterator im = mp.begin();
	// output

	for (im = mp.begin(); im != mp.end(); im++)
		cout << "key: " << im->first << ", text: " << im->second << "\n";
	cout << "\n";

	// delete 2 elem
	im = mp.find(5); // finding (if haven't - error)
	mp.erase(im);
	mp.erase(2);

	// print 
	for (im = mp.begin(); im != mp.end(); im++)
		cout << "key: " << im->first << ", text: " << im->second << "\n";
	cout << "\n";

	return 0;
}