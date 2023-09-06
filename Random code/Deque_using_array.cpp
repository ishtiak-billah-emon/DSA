#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 9;
struct Deque {

	int arr[2 * N];
	int start = N, end = N - 1;

	void push_front(int x ) {
		start --;
		arr[start] = x;
	}

	void push_back(int x) {

		end ++;
		arr[end] = x;
	}

	int front() {

		if(start > end) {
			cout << "The deque is empty! Can't get the front element!\n";
			return -1;
		}

		return arr[start];
	}

	int back() {

		if(start > end) {
			cout << "The deque is empty! Can't get the back element!\n";
			return -1;
		}
		return arr[end];
	}

	void pop_front() {
		if(start > end) {
			cout << "The deque is empty! Can't pop from the front!\n";
			return;
		}
		start ++;
	}

	void pop_back() {
		if(start > end) {
			cout << "The deque is empty! Can't pop from the back!\n";
			return;
		}
		end --;
	}

	int size() {

		return ( end - start + 1);
	}

	bool empty() {
		if( start > end) {
			cout << "Empty!\n";
			return 0;
		}
		cout << "Not empty! size : ";
		size();
		
	}


};

int main(){

   	  ios_base::sync_with_stdio(false);
      cin.tie(NULL);

	  Deque dq;
	  dq.push_front(10);
	  dq.push_front(20);
	  dq.push_back(30);
	  dq.push_back(40);

	  cout << "size : " <<dq.size() << '\n';
	  
	  cout << dq.front() << '\n'; // Output: 20
	  cout << dq.back() << '\n'; // Output: 40
	  dq.pop_front();
	  cout << dq.front() << '\n'; // Output: 10
	  cout << dq.back() << '\n'; // Output: 40
	  dq.pop_back();
	  cout << dq.front() << '\n'; // Output: 10
	  cout << dq.back() << '\n'; // Output: 30
	  dq.pop_front();

	  cout << "size : " <<dq.size() << '\n';
	 // cout << "is empty ? : " << dq.empty() << '\n';

	  cout << dq.front() << '\n'; // Output: 30
	  cout << dq.back() << '\n'; // Output: 30
	  dq.pop_back();
	  cout << dq.front() << '\n'; // Output: The deque is empty! Can't get the front element!
	  cout << dq.back() << '\n'; // Output: The deque is empty! Can't get the back element!
	  dq.pop_front(); // Output: The deque is empty! Can't pop from the front!
	  dq.pop_back(); // Output: The deque is empty! Can't pop from the back!





    return 0;
}		