#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer to the name of the file.
 * @text_content: string to add at the end of the file.
 *
 * Return: -1 if the function fails or filename is NULL.
 *         -1 if the file does not exist the user lacks write permissions.
 *         else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int openFile, writeFile, length = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
while (text_content[length])
length++;
}
openFile = open(filename, O_WRONLY | O_APPEND);
writeFile = write(openFile, text_content, length);
if (openFile == -1 || writeFile == -1)
return (-1);
close(openFile);
return (1);
}
