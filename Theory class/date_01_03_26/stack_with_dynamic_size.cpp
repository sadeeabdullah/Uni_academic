#include<bits/stdc++.h>
using namespace std;

int *STACK;
int top = -1;
int sz = 2;

void Push(int val){
	if(top >= sz -1){
		int *newSTACK = new int[sz * 2];

		// copy the old elements to new array
		for (int i = 0; i < sz; ++i)
		{
			newSTACK[i] = STACK[i];
		}

		delete[] STACK;
		STACK = newSTACK;
		sz = sz*2;
	}
	STACK[++top] = val;
}
int Pop(){
	if(top == -1){
		cout << "The stack is empty. Removing more element may cause underflow \n";
		return -1;
	}else{
		return STACK[top--];
	}
}

int Peek(){
	if(top==-1){
		cout << "The Stack is empty.\n";
		return top;
	}else{
		return STACK[top];
	}
}

int main()
{
	STACK = new int[sz];

	int x;	cin>>x;			// 5
	Push(x);
	cout << Peek() <<'\n';		// 5
	Push(500);
	Push(70);
	cout<< Peek() << '\n';		//70
	Pop();
	cout << Peek() <<'\n';		//500

	int pop_value = Pop();
	cout<<pop_value <<'\n';		//500
	cout <<Peek() <<'\n';		//5;
	return 0;
}