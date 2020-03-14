#include"Queue.h"

int main()
{
	Queue Q;
	Init(&Q);
	In_Queue(&Q, 1);
	In_Queue(&Q, 2);
	In_Queue(&Q, 4);
	In_Queue(&Q, 5);
	In_Queue(&Q, 6);
	In_Queue(&Q, 6);
	In_Queue(&Q, 6);

	Print(&Q);
	Out_Queue(&Q);
	Print(&Q);

	return 0;
}