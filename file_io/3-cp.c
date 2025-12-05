#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define TAILLE_BUFFER 1024

void erreur_sortie(int code, char *msg, char *fichier)
{
    dprintf(STDERR_FILENO, msg, fichier);
    exit(code);
}


void ferme_fichier(int fd)
{
    if (close(fd) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        exit(100);
    }
}
int main(int argc, char *argv[])
{
    int fichier_from, fichier_to;
    ssize_t lu, ecrit;
    char buffer[TAILLE_BUFFER];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    fichier_from = open(argv[1], O_RDONLY);
    if (fichier_from == -1)
        erreur_sortie(98, "Error: Can't read from file %s\n", argv[1]);

    fichier_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (fichier_to == -1)
    {
        ferme_fichier(fichier_from);
        erreur_sortie(99, "Error: Can't write to %s\n", argv[2]);
    }

    while ((lu = read(fichier_from, buffer, TAILLE_BUFFER)) > 0)
    {
        ecrit = write(fichier_to, buffer, lu);
        if (ecrit != lu)
        {
            ferme_fichier(fichier_from);
            ferme_fichier(fichier_to);
            erreur_sortie(99, "Error: Can't write to %s\n", argv[2]);
        }
    }

    if (lu == -1)
    {
        ferme_fichier(fichier_from);
        ferme_fichier(fichier_to);
        erreur_sortie(98, "Error: Can't read from file %s\n", argv[1]);
    }

    ferme_fichier(fichier_from);
    ferme_fichier(fichier_to);

    return (0);
}
