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




}