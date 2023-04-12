#include <iostream>
#include <fstream>
#include"\college\sophomore\Semester 2\data structure\Multiprocessor-master\Multiprocessor-master\Data Structures\linkedlist.h"
#include"Processor.h"
#include"FCFS.h"
#include"SJF.h"
#include"processSch.h"
//#include "Multiprocessor/Process.h"
using namespace std;


int main()
{
	//load();
	Process p(5, 50, 10);

	//FCFS processor1(p);
	Process p2(3, 2, 5);
	SJF processor2(p);
	processor2.add_process(p2);
	Process p3(4, 3, 3);
	Process p4(7, 7, 8);
	Process p5(6, 6, 6);
	processor2.add_process(p3);
	processor2.add_process(p4);
	processor2.add_process(p5);
	//processor2.printlist();
	//cout << processor2.Getcount();
	//cout << "\n";
	//
	//processor2.removeprocess();
	//cout << "\n";
	//processor2.printlist();
	processor2.SchedulingAlgorthim();
	//cout<<processor2.Getcount();
//	processor2.printlist();
	//processor1.add_process(p);
//	processor1.SchedulingAlgorthim();
	//Linkedlist<Process> Processlist;
	//Processlist = load();
	
}
