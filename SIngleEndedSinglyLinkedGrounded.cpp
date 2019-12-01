#include <iostream>
#include "NodeClass.h"

using namespace std;
//This linked list is Single Ended Singly Linked Grounded.
class SingleSingleGround{
	private:
		Node *head; 
	public:
		SingleSingleGround(){head = NULL;}
		
		void addAtStart(int v){
			Node *a = new Node();
			a->value = v;
			if(head==NULL){
				head = n;
			}
			else{
				a->next = head;
				head = a;
			}
			
		}
		
		void addAtEnd(int v){
			Node *n = new Node();
			n->value = v;
			if(head==NULL){
				head = n;
			}
			else{
				Node *last = head;
				while(last->next!=NULL){
					last = last->next;
				}
				last->next = n;
			}
			
		}
		
		void Remove(int v){
			Node *P, *D;  //P: Previous and D: Deletion
			P=D=head;
			if (head==NULL){
				cout<<"NO data in the list !"<<endl;
				return;
			}
			while(D!=NULL && D->value != v){
				P=D;
				D = D->next;
			}
			if(D==NULL){
				cout<<"Given value is not in the list"<<endl;
				return;
			}
			else if(D==head){
				head = head->next;
			}
			else{
				P->next = D->next;
				delete D;
			}
			
		}
		
		void display(){
			Node *c = head;
			while(c!=NULL){
				cout<<c->value<<" ";
				c = c->next;
			}
		}
		void displayReverseNL(){
			Node *Prev, *curr, *nex;
			curr = head;
			Prev = nex = NULL;
			while(curr!=NULL){
				nex = curr->next;
				curr->next = Prev;
				Prev = curr;
				curr = nex;
			}
			head = Prev;
		}
		
		void displayReverse(){   // Recursive Method
			displayRev(head);
		}
		
		void displayRev(Node *S){
			if(S==NULL)
				return ;
			else{
				displayRev(S->next);
			}
			cout<<S->value<<" ";
		}
		
		
		void revomeAll(){
			Node *d = head;
			while(head!=NULL){
				d = head;	
				head = head->next;
				delete d;
			}
			cout<<"All values from list the list are removed.";	
		}

};
int main(){
	SingleSingleGround l;
	l.addAtStart(13);
	l.addAtStart(45);
	l.addAtStart(1);
	l.addAtStart(3);
	//l.addAtStart(15);
	l.addAtStart(12);
	l.display();
	cout<<"\n";
	
	return 0;
}

