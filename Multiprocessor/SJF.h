#pragma once
#include"LinkedQueue.h"
#include"Processor.h"
#include"\college\sophomore\Semester 2\data structure\Multiprocessor-master\Multiprocessor-master\Process\Process.h"
class SJF : public Processor
{
	Linkedqueue<Process>Q1;
	Process Running_process;
public:
	SJF(Process p)
	{
		add_process(p);

	}
	void SchedulingAlgorthim()
	{
		Node<Process>* front = Q1.returnfront();  //set front with first member of the queue

		while (Q1.returnfront())
		{
			Q1.dequeue(Running_process);
			int ct = Running_process.getCT();
			while (ct > 0)
			{
				ct--;
			}
			cout << "process executed";
		}
	}
	//**************************************************************************************************************************
	//Process return_min_CT() // function to find process with minimum cpu-time
	//{
	//	Node<Process>* front = Q1.returnfront(); // set front with first member of queue
	//	Process P;
	//	Process minCT; ///  process with minimum ct
	//	while (front) //loop untill front  equal to null
	//	{
	//		P = front->getitem();
	//		int min = 50000; // minimum cpu time
	//		if ((P.getCT()) < min && (P.getCT()) > 0)
	//		{
	//			min = P.getCT(); //set minimum cpu time with process time
	//			minCT = P;  //set process with minimum ct
	//		}
	//		front = front->getnext();
	//	}
	//	return minCT;
	//}
	//**************************************************************************************************************************
	void add_process(Process p)
	{
		Q1.enqueue(p, p.getCT());
	}
	void removeprocess()
	{
		Process r;
		Q1.dequeue(r);
	}

	void printlist()
	{
		Q1.printqueue();
	}
	int Getcount()
	{
		 return Q1.getcount();
	}

};

