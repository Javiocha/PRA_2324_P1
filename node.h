#include <ostream>
using namespace std;
template <typename T>
class Node{
	public:
	T data;
	Node<T>* next;
	Node(T data, Node <T>* next=nullptr){
		this->data = data;
	}
	friend ostream&operator<<(ostream&out, const Node<T> &node){
		cout << node.data << endl;
	}
	
