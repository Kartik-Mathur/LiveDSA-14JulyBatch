#define node ListNode
class Solution {
public:

	int lengthLL(node* h) {
		int cnt = 0;
		while (h != NULL) {
			cnt++;
			h = h->next;
		}

		return cnt;
	}


	void reverseLL(node* head, node*  tail) {
		node* c = head, * p = NULL;

		while (c != NULL) {
			node * n = c->next;
			c->next = p;
			p = c;
			c = n;
		}
	}

	node* reverseKGroup(node* head, int k) {
		node* headDummy = new node(-1);

		headDummy->next = head;
		node* prev = headDummy;
		node* tail, *n;

		int remaining_len = lengthLL(head);
		while (remaining_len >= k) { // SPACE: O(1) and Time: O(N)
			// Reverse K-Group and then remaining_len ko kam krdo

			// tail ko set karo
			tail = head;
			for (int i = 0; i < k - 1; ++i)
			{
				tail = tail->next;
			}

			n = tail->next;	 // To prevent memory leak
			tail->next = NULL; // head se tail wali LL ko reverse krna h toh remove head and tail from
			// original LL

			reverseLL(head, tail);

			// Connect the reverse LL into original Linked list
			prev->next = tail;
			head->next = n;

			// Take prev to head and head to n
			prev = head;
			head = n;


			remaining_len -= k;
		}


		return headDummy->next;
	}
};









