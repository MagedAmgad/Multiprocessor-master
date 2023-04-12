#pragma once
#include "Processor.h"
#include"\college\sophomore\Semester 2\data structure\Multiprocessor-master\Multiprocessor-master\Process\Process.h"
#include"\college\sophomore\Semester 2\data structure\Multiprocessor-master\Multiprocessor-master\Data Structures\linkedlist.h"
class FCFS : public Processor
{
	Linkedlist<Process>l1;
	Process Running_Process;
public:
	FCFS(Process p)
	{
		l1.add(p);
	}
	 void SchedulingAlgorthim()
	{
		 Node<Process>* temp = l1.Returnhead();
		 while (l1.Returnhead())
		 {
			 Node<Process>* p = l1.Returnhead();
			 Running_Process = p->getitem();
			 int ct = Running_Process.getCT();
			 while (ct!= 0)
			 {
				 
				 ct--;
				 ///runing_process.setct(ct)
			 }
			 temp = temp->getnext();
			 cout << "process is succsefully executed";
		 }
		 


	}
	 void add_process(Process p)
	 {
		 l1.add(p);
	 }
};



