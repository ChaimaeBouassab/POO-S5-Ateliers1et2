
#include <iostream>

using namespace std;

struct node
{
	int data;
	node *next;
};

class linked_list
{
private:
	node *head,*tail;
public:
	linked_list()
	{
		head = NULL;
		tail = NULL;
	}

	void add_node(int n)
{
    node *tmp = new node;
    tmp->data = n;
    
    tmp->next = head;
        head = tmp;
        if (tail == NULL) {
        tail = tmp;
    }
}
	
	void display()
{
    node *current = head;

    while (current != NULL)
    {
        cout << current->data << endl;
        current = current->next;
    }

    if (current == NULL)
    {
        cout << "NULL" << endl;
    }
}
	void del_beginning()
{
    if (head != NULL)
    {
        node* temp = head;
        head = head->next;
        delete temp;
        if (head == NULL) {
            tail = NULL;
        }
    }
}

};

int main()
{
	linked_list a;
	a.add_node(1);
	a.add_node(2);
	a.add_node(5);
	a.add_node(15);
    cout<<"La Liste Simplement Chainee:"<<endl;
    a.display(); 
    a.del_beginning();
    cout<<"La Liste Simplement Chainee Apres Supression du Premier Element Au Debut:"<<endl;
    a.display(); 
	return 0;
}
