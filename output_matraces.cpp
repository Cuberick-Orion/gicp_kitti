#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int main() {
	// cout << "starting ...\n";
	char frame1[100];
	char frame2[100];
	char command[300];

	// change the directory to where you store the ascii files that produced by MATLAB
	char *directory = "~/gicp/data/dataset_08/frame_data_";
	char *fileType = ".ascii";
	char *exeLocation = "~/gicp/test_gicp";
	char *parameters = "--debug 0";

	// change the for loop no. of iterations here
// total of 105 frames, produce 104 datasets
	for (int count = 1; count<407; count++) {
		int fileNo1 = count;
		int fileNo2 = (count + 1);
		sprintf(frame1,"%s%d%s",directory,fileNo1,fileType);
		sprintf(frame2,"%s%d%s",directory,fileNo2,fileType);

		// sprintf(command,"%s %s %s",exeLocation,frame2,frame1);

		// NOTE: frame 2 comes first!!!
		sprintf(command,"%s %s %s %s",exeLocation,frame2,frame1,parameters);
		int result = system(command);

	}
	
	


	return 0;
}

// Execution:
// g++ hello.cpp
// make
// ./a.out &>> ~/gicp/total_output.txt