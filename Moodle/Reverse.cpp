#include "LinkedList.h"

Node* createNode(int t)
{
	Node* temp = new Node;
	temp->data = t;
	temp->pNext = nullptr;
	return temp;
}

void load(ifstream& f, Node*& pH)
{
	Node* cur = nullptr;

	int temp;
	f >> temp;

	if (temp == 0) return;
	if (pH == nullptr)
	{
		pH = createNode(temp);
		cur = pH;
	}

	while (1)
	{
		f >> temp;
		if (temp == 0) break;
		else
		{
			cur->pNext = createNode(temp);
			cur = cur->pNext;
		}
	}
}

void reverse(Node*& pHead)
{
	bool swap = true;

	Node* cur1 = pHead;
	if (cur1 == nullptr) return;

	Node* cur2 = pHead->pNext;
	if (cur2 == nullptr) return;

	Node* cur3 = pHead->pNext->pNext;
	if (cur3 == nullptr)
	{
		cur2->pNext = cur1;
		cur1->pNext = nullptr;
		pHead = cur2;
	}
	else
		while (1)
		{
			if (swap)//First swap
			{
				cur1->pNext = nullptr;
				swap = false;
			}

			cur2->pNext = cur1;
			pHead = cur2;

			if (cur3 == nullptr) break;
			cur1 = cur2;
			cur2 = cur3;
			cur3 = cur3->pNext;
			
		}

}

void save(ofstream& g, Node* pH)
{
	while (pH != nullptr)
	{
		g << pH->data << " ";
		pH = pH->pNext;
	}
	g << "0";
}