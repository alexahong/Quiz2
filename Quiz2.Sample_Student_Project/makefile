all: doc output 

output: collegemain.o college.o course.o 
	g++ collegemain.o college.o course.o -o output

collegemain.o: collegemain.cc course.h node.h college.h
	g++ -c collegemain.cc course.h node.h college.h

college.o: college.cc college.h
	g++ -c college.cc college.h


course.o: course.cc course.h
	g++ -c course.cc course.h

clean:
	rm *.o output

doc:
	doxygen -g index.html
	doxygen index.html


