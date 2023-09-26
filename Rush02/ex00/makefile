#Compilateur
CC = cc
CFLAGS = -Wall -Werror -Wextra

#List fichiers source
SRC_FILES = main.c ft_error.c ft_parse_file.c ft_util.c

#Conversion des fichiers .c en .o
OBJ_FILES = $(SRC_FILES:.c=.o)

#Execute rush-02
rush-02: $(OBJ_FILES)
	$(CC) $(CFLAGS) $^ -o $@

#Generer les fichiers .o a partir des fichiers .c
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#Commande pour effacer les fichiers .o
fclean:
	rm -f $(OBJ_FILES) rush-02

#Regles
.PHONY: clean rush-02
