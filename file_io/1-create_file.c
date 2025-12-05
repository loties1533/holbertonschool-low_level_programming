#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int create_file(const char *filename, char *text_content)
{
    int fd_fichier;
    ssize_t caracteres_a_ecrire = 0;
    ssize_t caracteres_ecrits;

    if (filename == NULL)
        return (-1);

    if (text_content != NULL)
    {
        while (text_content[caracteres_a_ecrire])
            caracteres_a_ecrire++;
    }

    fd_fichier = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (fd_fichier == -1)
        return (-1);

    if (caracteres_a_ecrire > 0)
    {
        caracteres_ecrits = write(fd_fichier, text_content, caracteres_a_ecrire);
        if (caracteres_ecrits != caracteres_a_ecrire)
        {
            close(fd_fichier);
            return (-1);
        }
    }

    if (close(fd_fichier) == -1)
        return (-1);

    return (1);
}
