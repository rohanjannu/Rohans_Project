#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    
	// Create a new file or open it
	//if it exists (write-only access)
	// File permissions: rw-r--r--
	int fd = creat("newfile.txt", 0644);

	if (fd == -1) {
		perror("Error creating file");
		return 1;
	}

	// File was successfully created
	printf("File 'newfile.txt' created successfully \n"
	       "File descriptor: %d\n", fd);

	// Close the file descriptor
	close(fd);

	return 0;
}