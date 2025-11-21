#include <iostream>

using namespace std;



class List{
    class node{
        public:
        int data;
        node *next;

        // constructor for node.
        node(int data, node *next):
        data{data}, next{next} {}
    };
    //points to the head of the list
    node* head = nullptr;
    public:
        class iterator{
            node *p;
             iterator(node *p):
            p{p} {}
                        friend class List;

            public:
            // friend class List;
            bool operator!=(const iterator &other) const{
                return p != other.p;
            }

            int& operator*(){
                return p->data;
            }

            iterator& operator++(){
                p = p->next;
                return *this;
            }
            
        };

        iterator begin(){
                return iterator{head};
            }

            iterator end(){
                return iterator{nullptr};
            }
            void add_front(int new_data){
                head = new node{new_data, head};
            }
};

int main(){
    List l;
    l.add_front(2);
    l.add_front(3);
    l.add_front(4);
    l.add_front(5);
    for(List::iterator it=l.begin(); it!= l.end(); ++it){
        cout<<*it<<endl;
    }

}

// something to recall if we make the ctor of iterator 
// private then list will not be able to access or create list::iterator
// the solution is simple
// friend class list; doesnt matter where you write this in iterator, will work,
// after writing this. now the list has access to all the members of iterators