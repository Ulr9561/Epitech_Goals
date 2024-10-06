# Makefile pour compiler la bibliothèque statique libphoenix.a

# Nom de la bibliothèque statique
LIBNAME = libphoenix.a

# Dossier où seront placés les fichiers objets
OBJDIR = obj

# Liste des fichiers source
SRCS = my_putchar.c show_number.c show_string.c reverse_string.c to_number.c \
       is_prime_number.c my_strcpy.c my_strncmp.c my_strstr.c

# Générer les fichiers objets correspondants
OBJS = $(SRCS:%.c=$(OBJDIR)/%.o)

# Options du compilateur
CFLAGS = -I../../includes -Wall -Wextra -Werror

# Commande pour compiler
CC = gcc

# Commande pour créer la bibliothèque statique
AR = ar rcs

# Règle par défaut pour compiler la bibliothèque
all: $(LIBNAME)

# Compilation des fichiers objets
$(OBJDIR)/%.o: %.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Création du répertoire obj s'il n'existe pas
$(OBJDIR):
	mkdir -p $(OBJDIR)

# Création de la bibliothèque statique
$(LIBNAME): $(OBJS)
	$(AR) $(LIBNAME) $(OBJS)

# Nettoyage des fichiers objets et de la bibliothèque
clean:
	rm -rf $(OBJDIR)
	rm -f $(LIBNAME)

# Nettoyage complet
fclean: clean

# Recompilation complète
re: fclean all
