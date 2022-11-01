#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_file - a function that creates a file.
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[i] != '\0')
	{
		i++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	/*O_TRUNC - to trauncate*/

	 if (fd == -1)
		return (-1);

	 write(fd, text_content, i);
	 
	 close(fd);

	 return (1);
}
