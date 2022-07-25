#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: pointer to the name of the file .
 * @text_content: pointer to a string to write to the file.
 * Return: -1 if the function fails .
 *         else - 1.
 */
int create_file(const char *filename, char *text_content)
{
int open_file, write_file, length = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (length = 0; text_content[length]; length++)
:
}
open_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
write_file = write(open_file, text_content, length);
if (open_file == -1 || write_file == -1)
return (-1);
close(open_file);
return (1);
}
