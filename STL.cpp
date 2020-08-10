#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;

// Map
// set
// priority queue
// Ordered set
// unordered set
// unordered map
// multiset
void booster()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main()
{
	booster();

	//set -> is an associative container. That can be quickly searched
	// in O(LOGN) times
	set<int>s; //using (set<int, greater<int>>s) the set element will be sorted in
	//descending order
	for (int i = 0; i < 4; i++) {
		s.insert(i);
		s.insert(i);//if we insert two time the same
		// i then also it will occur one time.
	}
	for (int k : s) {
		cout << k << endl;
	}

	//important function of set ->lower bound and upper bound
	s.lower_bound(x);// return the iterator to the first element in the set which is >=x;
	s.upper_bound(x);//return the iterator to the first element in the set which is >x;(stricly greator then x)
	//if no such element exist it returns iterator == s.end()


	//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	// Deque -> double ended queues.
	// Deques are nothing much but sequence continer with feature of exapnsion and contraction

	// They are similar to vectors, but are more efficient in case of insertion and deletion of elements


	//-------------------------------------------------------------------------------------------------------------------------------------
	priority_queue<int>pq;
	//pq.top() => return the maximum elelment in a priority queue O(1)
	//pq.pop() =>removes the max_element from priority queue O(LOGN)
	//pq.push() =>add the elements to the queue ->O(LOGN)
	//this is internal binary heap.

	// Note that by default C++ creates a max-heap

	how to create min heap for priority queue ->
	// priority_queue<int,vector<int>,greater<int>>gpqueue;

	in above syntax priority_queue will hace top element => min - element.


	//----------------------------------------------------------------------------------------------------------------------------------
	map
	// Maps are associative containers that store elements in a mapped fashion.
	// Each element has a key value and a mapped value.


	// No two mapped values can have same key values.



	begin() – Returns an iterator to the first element in the map
		end() - Return  an iterator to the last element in the map

		//various ways to insert element to the map
		map<char, int> mp;
	mp['a'] = 1; //maping char (a) with integer (1)
	mp['b'] = 2; //maping char(b) with integer (2)
	//Printing the map
	for (auto it = mp.begin(); it != mp.end(); it++) {
		cout << it->first << " " << it->second << endl;
	}

	//second way to insert a element in the map
	map<char, int>mp;
	mp.insert({'a', 1});
	mp.insert({'b', 2});
	mp.insert({'c', 3});

	//to erase a mappedvalue   mp.erase(1)// 1 is key value
	//The function accepts one mandatory parameter key
	//which specifies the key to be erased in the map container.

	mp.erase('b');

	//The map::upper_bound() is a built-in function in C++ STL which returns an
	// iterator pointing to the immediate next element just greater than k.
	// If the key passed in the parameter exceeds the maximum key in the container,
	// then the iterator returned points to the number of elements in the map container as key
	// and element=0.
	map_name.upper_bound(key)

	-> mp.upper_bound('c');

	/*The map::lower_bound(k) is a built-in function in C++ STL
	which returns an iterator pointing to the key in the container
	which is equivalent to k passed in the parameter.
	*/
	-> mp.lower_bound('b');
	/*
	1 10
	2 30
	4 40
	5 50
	The lower bound of key 2 is 2 30
	The lower bound of key 3 is 4 40    // In case (key) is not present in the map container,
									the function returns an iterator pointing to the immediate
									next element which is just greater than k.


	The lower bound of key 6 is 4 0  //If the key passed in the parameter exceeds the maximum key in the container,
								 then the iterator returned points to
								 number of elements in the map as key and element=0.
	*/



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	multimap


#include <iostream>
#include <map>
#include <iterator>

	using namespace std;

	int main()
	{
		multimap <int, int> gquiz1;        // empty multimap container

		// insert elements in random order
		gquiz1.insert(pair <int, int> (1, 40));
		gquiz1.insert(pair <int, int> (2, 30));
		gquiz1.insert(pair <int, int> (3, 60));
		gquiz1.insert(pair <int, int> (4, 20));
		gquiz1.insert(pair <int, int> (5, 50));
		gquiz1.insert(pair <int, int> (6, 50));
		gquiz1.insert(pair <int, int> (6, 10));

		// printing multimap gquiz1
		multimap <int, int> :: iterator itr;
		cout << "\nThe multimap gquiz1 is : \n";
		cout << "\tKEY\tELEMENT\n";
		for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr)
		{
			cout  <<  '\t' << itr->first
			      <<  '\t' << itr->second << '\n';
		}
		cout << endl;

		// assigning the elements from gquiz1 to gquiz2
		multimap <int, int> gquiz2(gquiz1.begin(), gquiz1.end());

		// print all elements of the multimap gquiz2
		cout << "\nThe multimap gquiz2 after assign from gquiz1 is : \n";
		cout << "\tKEY\tELEMENT\n";
		for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
		{
			cout << '\t' << itr->first
			     << '\t' << itr->second << '\n';
		}
		cout << endl;

		// remove all elements up to element with value 30 in gquiz2
		cout << "\ngquiz2 after removal of elements less than key=3 : \n";
		cout << "\tKEY\tELEMENT\n";
		gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
		for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
		{
			cout << '\t' << itr->first
			     << '\t' << itr->second << '\n';
		}

		// remove all elements with key = 4
		int num;
		num = gquiz2.erase(4);
		cout << "\ngquiz2.erase(4) : ";
		cout << num << " removed \n" ;
		cout << "\tKEY\tELEMENT\n";
		for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
		{
			cout << '\t' << itr->first
			     << '\t' << itr->second << '\n';
		}

		cout << endl;

		//lower bound and upper bound for multimap gquiz1 key = 5
		cout << "gquiz1.lower_bound(5) : " << "\tKEY = ";
		cout << gquiz1.lower_bound(5)->first << '\t';
		cout << "\tELEMENT = " << gquiz1.lower_bound(5)->second << endl;
		cout << "gquiz1.upper_bound(5) : " << "\tKEY = ";
		cout << gquiz1.upper_bound(5)->first << '\t';
		cout << "\tELEMENT = " << gquiz1.upper_bound(5)->second << endl;

		return 0;

	}

//output look like
The multimap gquiz1 is :
	KEY    ELEMENT
	1    40
	2    30
	3    60
	4    20
	5    50
	6    50
	6    10


The multimap gquiz2 after assign from gquiz1 is :
	KEY    ELEMENT
	1    40
	2    30
	3    60
	4    20
	5    50
	6    50
	6    10


gquiz2 after removal of elements less than key = 3 :
	        KEY    ELEMENT
	        3    60
	        4    20
	        5    50
	        6    50
	        6    10

	        gquiz2.erase(4) : 1 removed
		        KEY    ELEMENT
		        3    60
		        5    50
		        6    50
		        6    10

		        gquiz1.lower_bound(5) :     KEY = 5        ELEMENT = 50
		                gquiz1.upper_bound(5) :     KEY = 6        ELEMENT = 50




	}