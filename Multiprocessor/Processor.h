#pragma once
#include "Processor.h"
#include"/college/sophomore/Semester 2/data structure/Multiprocessor-master/Multiprocessor-master/Process/Process.h"
#include "LinkedQueue.h"

class Processor
{
	bool isempty;
	
public:
	Processor()
	{
		isempty = 1;
	}
	virtual void SchedulingAlgorthim() = 0;
	virtual void add_process(Process p) = 0;

};

