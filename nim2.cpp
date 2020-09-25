
#include <iostream>
#include <string>
using namespace std;

struct node
{
	node *left;
	node *right;
	int data;
	int flag;
	string a;
};//end struct node

class tree
{
	node *root;
public:
	node *getr(){ return root; }
	tree(int ele);//constructor 
	//..............................................make..........................................
	void ladd(node *p, int ele);//add left node
	void radd(node *p, int ele);//add right node
	void make(node *p);//make tree by pre-order traverse
	
	//.....................................select player..........................................
	void player(node *t);//
	void pl(node *p, string st);
	void pr(node *p, string st);
	
	//..........................................cost..............................................
	int min(int i, int j);
	int max(int i, int j);
	int cl(node *p);//cost left node
	int cr(node *p);//cost right node
	void cost(node *t);//cost 1
	void cost2(node *t);//cost 2
	
	//.............................................play............................................
	void play(node *t);
	int checkcost(node *t);
	
	//.............................................................................................
};//ende class tree

tree::tree(int ele)//constructor 
{
	node *q = new node;
	root = q;
	q->left = 0;
	q->right = 0;
	q->data = ele;
	q->a = 'm';
	make(q);
	player(q);
	cost(q);
	cost2(q);
}
void tree::player(node *t)//
	{
		string st;
		if (t->data <= 1)
			return;
		if (t->a == "m")
			st = "u";
		if (t->a == "u")
			st = "m";
		pl(t, st);
		pr(t, st);
		player(t->left);
		player(t->right);
	}
	void tree::pl(node *p, string st)
	{
		p = p->left;
		p->a = st;
	}

	void tree::pr(node *p, string st)
	{
		p = p->right;
		p->a = st;
	}
void tree::ladd(node *p, int ele)//add left node
{
	node *q = new node;
	q->data = ele;
	q->left = NULL;
	q->right = NULL;
	p->left = q;

}
void tree::radd(node *p, int ele)//add right node
{
	node *q = new node;
	q->data = ele;
	q->left = NULL;
	q->right = NULL;
	p->right = q;

}
void tree::make(node *p)//make tree by pre-order traverse
{
	if (p->data <= 1)
		return;
	ladd(p, (p->data) - 1);
	radd(p, (p->data) - 2);
	make(p->left);
	make(p->right);
}
int tree::min(int i, int j)
	{
		if (i > j)
			return j;
		return i;
	}


int tree::max(int i, int j)
	{
		if (i < j)
			return j;
		return i;
	}


	int tree::cl(node *p)//cost left node
	{
		p = p->left;
		return p->flag;
	}
	int tree::cr(node *p)//cost right node
	{
		p = p->right;
		return p->flag;
	}

void tree::play(node *t)
	{
		if (t->data == 1 && t->a == "m")
		{
			cout << "....................................you win!!!.................................";
			return;
		}
		if (t->data == 0 && t->a == "m")
		{
			cout << "....................................you lose!!!................................";
			return;
		}
		if (t->data == 1 && t->a == "u")
		{
			cout << "...................................you lose!!!.................................";
			return;
		}
		if (t->data == 0 && t->a == "u")
		{
			cout << "...................................you win!!!...................................";
			return;
		}

		if (t->a == "m")
		{
			cout << "*******************************computer select********************************\n";
			cout << "number of wood is: " << t->data << endl;
			if (checkcost(t) == 1)
			{
				cout << "computer select 2\n";
				play(t->right);

			}
			else
			{
				cout << "computer select 1\n";
				play(t->left);

			}
		}
		if (t->a == "u")
		{
			cout << "**********************************user select**********************************\n";
			cout << "number of wood is: " << t->data << endl;
			int i;
			while (1)
			{
				cout << "enter number(1or2):";
				cin >> i;
				if (i<3 && i>0)
					break;
			}
			if (i == 1)
			{
				play(t->left);
			}
			else
				play(t->right);
		}
	}
	int tree::checkcost(node *t)
	{
		t = t->right;
		return t->flag;
	}

	void tree::cost(node *t)//cost 1
	{

		if (t->data == 1 && t->a == "m")
			t->flag = -1;
		if (t->data == 0 && t->a == "m")
			t->flag = 1;
		if (t->data == 1 && t->a == "u")
			t->flag = 1;
		if (t->data == 0 && t->a == "u")
			t->flag = -1;
		if (t->data <= 1)
			return;
		cost(t->left);
		cost(t->right);
	}

	void tree::cost2(node *t)//cost 2
	{
		if (t->data <= 1)
			return;
		cost2(t->left);
		cost2(t->right);
		if (t->a == "m")
			t->flag = max(cl(t), cr(t));
		if (t->a == "u")
			t->flag = min(cl(t), cr(t));

	}

int main()
{
	int i;
	cout << "enter number of wood ?";
	cin >> i;
	tree t(i);
	t.play(t.getr());
	cin.ignore();
	cin.get();
	return 0;
}//end of main
