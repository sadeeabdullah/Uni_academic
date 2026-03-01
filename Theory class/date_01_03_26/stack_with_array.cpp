#include<bits/stdc++.h>
using namespace std;
const int sz = 1000;
int top = -1;
int STACK[sz];

void Push(int val){
	if(top >= sz -1){
		cout << "The stack is full. Pushing more element may cause overflow..\n";
	}else{
		STACK[++top] = val;
	}
}

int Pop(){
	if(top == -1){
		cout << "The stack is empty. Removing more element may cause underflow \n";
		return -1;
	}else{
		return STACK[top--];
	}
}

int Peak(){
	if(top==-1){
		cout << "The Stack is empty.\n";
		return top;
	}else{
		return STACK[top];
	}
}


int main(){
	int x;	cin>>x;			// 5
	Push(x);
	cout << Peak() <<'\n';		// 5
	Push(500);
	Push(70);
	cout<< Peak() << '\n';		//70
	Pop();
	cout << Peak() <<'\n';		//500

	int pop_value = Pop();
	cout<<pop_value <<'\n';		//500
	cout <<Peak() <<'\n';		//5;
	return 0;
}