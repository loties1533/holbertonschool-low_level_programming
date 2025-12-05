#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - lit  fichier texte et l'ecrit sur la sortie
 * @filename: nom du fichier a lire
 * @letters: nombre de caractères a lire
 *
 * Return: nombre de caracteres lu et écrit
 *         0 en cas d'erreur
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd_fichier;
	ssize_t caractere_lu, caractere_ecrit;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd_fichier = open(filename, O_RDONLY);
	if (fd_fichier == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd_fichier);
		return (0);
	}

	caractere_lu = read(fd_fichier, buffer, letters);
	if (caractere_lu == -1)
	{
		free(buffer);
		close(fd_fichier);
		return (0);
	}

	caractere_ecrit = write(STDOUT_FILENO, buffer, caractere_lu);

	free(buffer);
	close(fd_fichier);

	if (caractere_ecrit == -1 || caractere_ecrit != caractere_lu)
		return (0);

	return (caractere_ecrit);
}
