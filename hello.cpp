#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int main() {
	// cout << "starting ...\n";
	char frame1[100];
	char frame2[100];
	char command[300];

	char *directory = "~/gicp/data/data_interval_6/frame_data_";
	char *fileType = ".ascii";
	char *exeLocation = "~/gicp/test_gicp";
	char *parameters = "--debug 0";

// total of 105 frames, produce 104 datasets
	for (int count = 1; count<107; count++) {
		int fileNo1 = count;
		int fileNo2 = (count + 1);
		sprintf(frame1,"%s%d%s",directory,fileNo1,fileType);
		sprintf(frame2,"%s%d%s",directory,fileNo2,fileType);

		// sprintf(command,"%s %s %s",exeLocation,frame2,frame1);
		sprintf(command,"%s %s %s %s",exeLocation,frame2,frame1,parameters);
		int result = system(command);

	}
	
	


	return 0;
}