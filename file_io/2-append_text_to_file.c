#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - ajoute du texte à la fin d'un fichier
 * @filename: nom du fichier
 * @text_content: texte à ajouter
 *
 * Return: 1 si succès, -1 en cas d'échec
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd_fichier;
	ssize_t nb_caracteres = 0;
	ssize_t nb_ecrit;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[nb_caracteres])
			nb_caracteres++;
	}

	fd_fichier = open(filename, O_WRONLY | O_APPEND);
	if (fd_fichier == -1)
		return (-1);

	if (nb_caracteres > 0)
	{
		nb_ecrit = write(fd_fichier, text_content, nb_caracteres);
		if (nb_ecrit != nb_caracteres)
		{
			close(fd_fichier);
			return (-1);
		}
	}

	if (close(fd_fichier) == -1)
		return (-1);

	return (1);
}
