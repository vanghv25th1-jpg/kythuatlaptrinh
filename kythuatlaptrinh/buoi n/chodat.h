template <typename>
struct node
{
	T data;
	node* next;


};
template <typename T >
struct Linkedlist 
{
	node < T >* head;
	void show();
	void add(T item);
	bool remode(int id);

};
template < typename T > 
void Linkedlist < T > ::show() {
	if (head == NULL) {
		cout << " no data available" << endl;
		return;
	}
	node <T> item = head;
	while (item !+ NULL) {
		cout <<
	}
}
